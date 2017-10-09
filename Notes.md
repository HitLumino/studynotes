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


