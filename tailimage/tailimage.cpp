#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
#include <fstream>
#include <iomanip>      // std::setw
#include <sstream>
#include <vector>


using namespace std;
using namespace cv;


int main(int argc, char** argv)
{
    cv::Mat image;
    Size imgSize(1280,720);
   // Size imgSize(672,376);

    std::vector<std::string> filelist;
   
    // generate list of chessboard image filename
    for (int i=0; i<19; i++) 
    {

		std::stringstream str;
  //      str << "/home/lumino/hitlumino/tailimage/HD/HD" << std::setw(3) << std::setfill('0') << i << ".png";
   //     str << "/home/lumino/hitlumino/tailimage/VGA/VGA" << std::setw(3) << std::setfill('0') << i << ".png";
   str<<string(argv[1])<<"/HD/HD"<<std::setw(3) << std::setfill('0') << i << ".png";
		std::cout << str.str() << std::endl;
        filelist.push_back(str.str());
    }
    for(int i=0;i<filelist.size();i++)
        {
            
            std::stringstream str_l,str_r;
            Mat img=imread(filelist[i]);
//            str_l<<"/home/lumino/hitlumino/tailimage/HD/HD_L/HDleft"<<std::setw(3)<<std::setfill('0')<<i<<".png";
//            str_r<<"/home/lumino/hitlumino/tailimage/HD/HD_R/HDright"<<std::setw(3)<<std::setfill('0')<<i<<".png";

            // str_l<<"/home/lumino/hitlumino/tailimage/VGA/VGA_L/VGAleft"<<std::setw(3)<<std::setfill('0')<<i<<".png";
            // str_r<<"/home/lumino/hitlumino/tailimage/VGA/VGA_R/VGAright"<<std::setw(3)<<std::setfill('0')<<i<<".png";
            str_l<<string(argv[1])<<"/HD/HD_L/HDleft"<<std::setw(3)<<std::setfill('0')<<i<<".png";
            str_r<<string(argv[1])<<"/HD/HD_R/HDright"<<std::setw(3)<<std::setfill('0')<<i<<".png";
            
            Mat leftimg,rightimg;
            cv::Rect leftrect(0,0,imgSize.width,imgSize.height);
            cv::Rect rightrect(imgSize.width,0,imgSize.width,imgSize.height);     
            leftimg=img(leftrect); 
            rightimg=img(rightrect);      
            imwrite(str_l.str(),leftimg);
            imwrite(str_r.str(),rightimg);
        }
    return 0;    
        
		
}
