# boost/timer.hpp
```
#include <boost/timer.hpp>
void VisualOdometry::extractKeyPoints()
{
    boost::timer timer;
    orb_->detect ( curr_->color_, keypoints_curr_ );
    cout<<"extract keypoints cost time: "<<timer.elapsed()<<endl;
}

void VisualOdometry::computeDescriptors()
{
    boost::timer timer;
    orb_->compute ( curr_->color_, keypoints_curr_, descriptors_curr_ );
    cout<<"descriptor computation cost time: "<<timer.elapsed()<<endl;
}
```
# CV_8UC4 ---> CV_8UC3
I've found that the best way to do this is:  

cvtColor(src,dst,CV_GRAY2RGB);  
The image will look the same as when it was grayscale CV_8UC1 but it will be a 3 channel image of type CV_8UC3.

# Linux下不能进入windows的NTFS分区之挂载错误问题（error mounting）
* 首先重启电脑,确保`Windows`是`正常关机`.重新进入`Linux``.  
* 如果还是不能访问硬盘接下来第二步:  
   * sudo apt-get install ntfs-3g
   * sudo ntfsfix /dev/sda2




