#include "ros/ros.h"
#include <geometry_msgs/TransformStamped.h>
#include "sensor_msgs/Image.h"
#include "cv_bridge/cv_bridge.h"
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>  
#include <opencv2/highgui/highgui.hpp> 
#include <math.h>
#include <ros/time.h>
#include <geometry_msgs/PoseStamped.h>

#include <tf/transform_broadcaster.h>
#include <image_transport/image_transport.h>

#include <ARToolKitPlus/TrackerSingleMarker.h>

#include <sensor_msgs/CameraInfo.h>
#include <sensor_msgs/image_encodings.h>

#define pi 3.1415926

using ARToolKitPlus::TrackerSingleMarker;

geometry_msgs::PoseStamped pose_msg;

TrackerSingleMarker* tracker;
#define IMG_WIDTH 640
#define IMG_HEIGHT 480
#define USEBCH false

//ros::Time current_time ,last_time;

std::string  int2str(int num)
{
    std::stringstream ss;
    ss << num;
    std::string text = ss.str();
    return text;
}
void rotToEular_rad(double *rot, double *eular)
{
    double R11=rot[0];
    double R21=rot[4];
    double R31=rot[8];
    double R32=rot[9];
    double R33=rot[10];
    double pitch=asin(R31);
    double yaw = atan2(R32,R33);
    double roll =atan2(R21,R11);
    eular[0]=pitch;
    eular[1]=yaw;
    eular[2]=roll;
}

void rotToEular_angle(const float *rot, float *eular)
{
    float R11=rot[0];
    float R21=rot[4];
    float R31=rot[8];
    float R32=rot[9];
    float R33=rot[10];
    float pitch=asin(R31);
    float yaw = atan2(R32,R33);
    float roll =atan2(R21,R11);
    pitch=pitch/pi*180;
    yaw=yaw/pi*180;
    roll=roll/pi*180;
    eular[0]=pitch;
    eular[1]=yaw;
    eular[2]=roll;
}

void drawMarkerInfo(cv::Mat &image,ARToolKitPlus::ARMarkerInfo* markInfo)
{
    cv::Point center,corner0,corner1,corner2,corner3 ;
    center=cv::Point(markInfo->pos[0],markInfo->pos[1]);
    corner0=cv::Point(markInfo->vertex[(4-markInfo->dir+0)%4][0],markInfo->vertex[(4-markInfo->dir+0)%4][1]);
    corner1=cv::Point(markInfo->vertex[(4-markInfo->dir+1)%4][0],markInfo->vertex[(4-markInfo->dir+1)%4][1]);
    corner2=cv::Point(markInfo->vertex[(4-markInfo->dir+2)%4][0],markInfo->vertex[(4-markInfo->dir+2)%4][1]);
    corner3=cv::Point(markInfo->vertex[(4-markInfo->dir+3)%4][0],markInfo->vertex[(4-markInfo->dir+3)%4][1]);

    cv::line(image,corner0,corner1,CV_RGB(255,0,0),1,8);
    cv::line(image,corner1,corner2,CV_RGB(255,0,0),1,8);
    cv::line(image,corner2,corner3,CV_RGB(255,0,0),1,8);
    cv::line(image,corner3,corner0,CV_RGB(255,0,0),1,8);
    cv::rectangle(image,cv::Point(center.x-1, center.y-1),cv::Point(center.x+1, center.y+1),CV_RGB(0,255,0),1,8); //圈取图像中心点

    //string dir_str = int2str(one_mark.dir);
    std::string tx0 = "0";
    std::string tx1 = "1";
    std::string tx2 = "2";
    std::string tx3 = "3";

    cv::putText(image,tx0,corner0,CV_FONT_HERSHEY_COMPLEX,1,CV_RGB(0,0,255));
    cv::putText(image,tx1,corner1,CV_FONT_HERSHEY_COMPLEX,1,CV_RGB(0,0,255));
    cv::putText(image,tx2,corner2,CV_FONT_HERSHEY_COMPLEX,1,CV_RGB(0,0,255));
    cv::putText(image,tx3,corner3,CV_FONT_HERSHEY_COMPLEX,1,CV_RGB(0,0,255));


    std::string text ="Id:"+ int2str(markInfo->id);
    cv::putText(image,text,cv::Point(center.x+80,center.y),CV_FONT_HERSHEY_COMPLEX,1,CV_RGB(0,0,255));

}

void chatterCallback(const sensor_msgs::ImageConstPtr& msg)//一旦收到传感器信息msg,执行回调函数
{
    cv::Mat im_raw;
    cv::Mat im_gray;
    cv::Mat im_showMarker;
    float eular[3]={0};
   
    
/*CvImagePtr cv_bridge::toCvCopy(const sensor_msgs::ImageConstPtr & source,
 const std::string & encoding = std::string())*/
 //函数原型rosimage
/*class CvImage
{
    sensor_msgs::ImagePtr toImageMsg()const;
    void toImageMsg(sensor_msgs::Image& ros image)const;
};*/
    //这里主要是为了把ROS的图像消息里面的数据提取出来,边长 cv::MAT
     cv_bridge::CvImagePtr cv_ptr;//opencv格式，cv_bridge是链接ros图像与opencv图像的桥梁
        try
        {
          cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::BGR8);//msg转换成opencv格式，方便处理
        }
        catch (cv_bridge::Exception& e)
        {
          ROS_ERROR("cv_bridge exception: %s", e.what());
          return;
        }


    ROS_ASSERT(cv_ptr->image.channels()==3 || cv_ptr->image.channels()==1);

    if(cv_ptr->image.channels()==3)
    {
        //将彩色图转灰度图，存入im中
        cv_ptr->image.copyTo(im_raw);
        cv::cvtColor(cv_ptr->image, im_gray, CV_RGB2GRAY);

    }
    else if(cv_ptr->image.channels()==1)
    {
        printf("灰度图\n");
        cv_ptr->image.copyTo(im_raw);
        cv_ptr->image.copyTo(im_gray);
    }

    //im_showMarkr 图像主要是为了显示ID号和边框的
   im_raw.copyTo(im_showMarker);

   ARToolKitPlus::ARMarkerInfo* markInfo;
   int markNum;

   std::vector<int> markerId = tracker->calc(im_gray.data,&markInfo,&markNum); //参考赵的

   int flag_equalizeHist=0;
   if(markerId.empty())
   {
       flag_equalizeHist=1;
       //图像均衡化,可以不需要试试
       cv::equalizeHist(im_gray,im_gray);
       std::vector<int> markerId = tracker->calc(im_gray.data,&markInfo,&markNum); //参考赵的

   }

    if(markerId.empty())
        return;
    else if(flag_equalizeHist == 1)
        printf("#############################");


   tracker->selectBestMarkerByCf();
   float conf = tracker->getConfidence();

    //运行到这里，表示已经获取了路标了：测试打印消息
   //检测出来到很多信息打印在ARMarkerInfo中
   //路标中像素个数？
   int area=markInfo->area;
  // 路标ID号
   int id=markInfo->id;
   //路标方向
   int dir=markInfo->dir;
   //路标检测出来的可行度
   ARFloat cf=markInfo->cf;
   ARFloat pos[2];
   pos[0]=markInfo->pos[0];
   pos[1]=markInfo->pos[1];

   ARFloat vertex[4][2];
   ARFloat line[4][3];

   printf("\n\nFound marker %d  (confidence %d%%):\n\n  ", id, (int(cf * 100.0f)));


   //把四条边和中心画在了rgb图上
   drawMarkerInfo(im_showMarker,markInfo);
   cv::imshow("imageMarker",im_showMarker);
   cv::waitKey(4);

   //打印出识别到的路标
   printf("\n\nFound marker %d  (confidence %d%%):\n\n  ", markerId[0], (int(conf * 100.0f)));
   printf("\nPose-Matrix(相机坐标系在世界坐标系中位姿为：）\n\n");
   for (int i = 0; i < 16; i++)
       printf("%10.3f  %s", tracker->getModelViewMatrix()[i], (i % 4 == 3) ? "\n" : "");

   //rotToEular_angle(tracker->getModelViewMatrix(),eular);
   pose_msg.header.stamp=ros::Time::now();
   pose_msg.pose.position.x=tracker->getModelViewMatrix()[12];
   pose_msg.pose.position.y=tracker->getModelViewMatrix()[13];
   pose_msg.pose.position.z=tracker->getModelViewMatrix()[14];
   pose_msg.pose.orientation.x=0;
   pose_msg.pose.orientation.y=0;
   pose_msg.pose.orientation.z=0;
   pose_msg.pose.orientation.w=1;
   ROS_INFO("position_x= %lf=position_x",pose_msg.pose.position.x);
   ROS_INFO("position_y= %lf=position_y",pose_msg.pose.position.y);
}

int main(int argc, char **argv){
    //ROS节点初始化
  ros::init(argc, argv, "detect_armark");
  ros::NodeHandle nh;

  tracker= new TrackerSingleMarker (IMG_WIDTH,IMG_HEIGHT, 8, 6, 6, 6, 0);
  tracker->setPixelFormat(ARToolKitPlus::PIXEL_FORMAT_LUM);  //其实就是灰度图的格式

  if (!tracker->init("/home/lumino/catkin_ws/src/markerDetect/camera.cal", 1.0f, 1000.0f)) // load MATLAB file
  {
      printf("ERROR: init() failed\n");
      return -1;
  }

  tracker->getCamera()->printSettings();

  //整个二维码到宽度（整个大的markwr边框边长为2.0）;
  tracker->setPatternWidth(78); //78.0
  //这里应该是白色条码外边的黑色边框宽度，宽编码为0.125,即整个（默认2）的八分之一
  //而简单编码的形式又有标准的（0.25）和小型的（0.125）
  tracker->setBorderWidth(USEBCH ? 0.125 : 0.25);
  //如果采用自动阈值
  tracker->activateAutoThreshold(true);
  //这里图像像素为480×360,没考虑畸变
  tracker->setUndistortionMode(ARToolKitPlus::UNDIST_STD);
  tracker->setMarkerMode(USEBCH ? ARToolKitPlus::MARKER_ID_BCH : ARToolKitPlus::MARKER_ID_SIMPLE);
  //订阅图像消息 /usb_cam/image_raw or /rgb/image_raw
  ros::Subscriber sub = nh.subscribe("/usb_cam/image_raw", 1, &chatterCallback);

  ros::Time current_time;
  current_time=ros::Time::now();

  ros::Publisher pose_pub = nh.advertise<geometry_msgs::PoseStamped>("PoseStamped", 1);
  pose_msg.header.stamp=current_time;
  pose_msg.header.frame_id="PoseStamped";

  while (ros::ok())
    {
      pose_pub.publish(pose_msg);
      ros::Rate loop_rate(10);  
      ros::spinOnce();
    }
  

  ros::shutdown();
  delete(tracker);
  return 0;
}
