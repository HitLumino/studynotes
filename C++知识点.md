<!-- TOC -->

- [SVO代码解析](#svo%E4%BB%A3%E7%A0%81%E8%A7%A3%E6%9E%90)
    - [有关虚函数/虚类 继承](#%E6%9C%89%E5%85%B3%E8%99%9A%E5%87%BD%E6%95%B0%E8%99%9A%E7%B1%BB-%E7%BB%A7%E6%89%BF)
        - [派生类的构造函数(P531)](#%E6%B4%BE%E7%94%9F%E7%B1%BB%E7%9A%84%E6%9E%84%E9%80%A0%E5%87%BD%E6%95%B0p531)
        - [抽象类与纯虚函数](#%E6%8A%BD%E8%B1%A1%E7%B1%BB%E4%B8%8E%E7%BA%AF%E8%99%9A%E5%87%BD%E6%95%B0)
    - [foreach 与 lambda 结合用法](#foreach-%E4%B8%8E-lambda-%E7%BB%93%E5%90%88%E7%94%A8%E6%B3%95)
    - [常用数学运算函数](#%E5%B8%B8%E7%94%A8%E6%95%B0%E5%AD%A6%E8%BF%90%E7%AE%97%E5%87%BD%E6%95%B0)
    - [字符串相关](#%E5%AD%97%E7%AC%A6%E4%B8%B2%E7%9B%B8%E5%85%B3)
    - [容器相关](#%E5%AE%B9%E5%99%A8%E7%9B%B8%E5%85%B3)
        - [vector](#vector)
    - [批量读取文件](#%E6%89%B9%E9%87%8F%E8%AF%BB%E5%8F%96%E6%96%87%E4%BB%B6)
        - [批量图片函数](#%E6%89%B9%E9%87%8F%E5%9B%BE%E7%89%87%E5%87%BD%E6%95%B0)
        - [读取yaml文件 cv::FileStorage](#%E8%AF%BB%E5%8F%96yaml%E6%96%87%E4%BB%B6-cvfilestorage)
            - [Reading data from a file storage.](#reading-data-from-a-file-storage)
            - [写入yaml文件](#%E5%86%99%E5%85%A5yaml%E6%96%87%E4%BB%B6)
    - [opencv相机标定系列](#opencv%E7%9B%B8%E6%9C%BA%E6%A0%87%E5%AE%9A%E7%B3%BB%E5%88%97)
        - [单目标定](#%E5%8D%95%E7%9B%AE%E6%A0%87%E5%AE%9A)
        - [双目标定stereoCalibrate](#%E5%8F%8C%E7%9B%AE%E6%A0%87%E5%AE%9Astereocalibrate)
        - [双目矫正stereoRectify](#%E5%8F%8C%E7%9B%AE%E7%9F%AB%E6%AD%A3stereorectify)
        - [projectPoints](#projectpoints)
        - [图像矫正](#%E5%9B%BE%E5%83%8F%E7%9F%AB%E6%AD%A3)
        - [极线匹配](#%E6%9E%81%E7%BA%BF%E5%8C%B9%E9%85%8D)
        - [Qt出现中文编码乱码问题](#qt%E5%87%BA%E7%8E%B0%E4%B8%AD%E6%96%87%E7%BC%96%E7%A0%81%E4%B9%B1%E7%A0%81%E9%97%AE%E9%A2%98)
        - [Linux下不能进入windows的NTFS分区之挂载错误问题（error mounting）](#linux%E4%B8%8B%E4%B8%8D%E8%83%BD%E8%BF%9B%E5%85%A5windows%E7%9A%84ntfs%E5%88%86%E5%8C%BA%E4%B9%8B%E6%8C%82%E8%BD%BD%E9%94%99%E8%AF%AF%E9%97%AE%E9%A2%98%EF%BC%88error-mounting%EF%BC%89)
        - [单应矩阵](#%E5%8D%95%E5%BA%94%E7%9F%A9%E9%98%B5)
        - [opencv求二范数之和](#opencv%E6%B1%82%E4%BA%8C%E8%8C%83%E6%95%B0%E4%B9%8B%E5%92%8C)
    - [Bugs](#bugs)
        - [1. 类成员变量初始化顺序问题](#1-%E7%B1%BB%E6%88%90%E5%91%98%E5%8F%98%E9%87%8F%E5%88%9D%E5%A7%8B%E5%8C%96%E9%A1%BA%E5%BA%8F%E9%97%AE%E9%A2%98)
        - [2. 注释里也不能出现反斜杠](#2-%E6%B3%A8%E9%87%8A%E9%87%8C%E4%B9%9F%E4%B8%8D%E8%83%BD%E5%87%BA%E7%8E%B0%E5%8F%8D%E6%96%9C%E6%9D%A0)

<!-- /TOC -->
# SVO代码解析
## 有关虚函数/虚类 继承  
### 派生类的构造函数(P531)
* 派生类构造函数初始化必须首先初始化基类部分然后按照声明的顺序依次初始化派生类的成员
* 派生类不能直接初始化这些基类成员,必须使用基类的构造函数来初始化他的基类成员.
* 以类名加圆括号内的实参列表的形式为构造函数提供初始值  

**举例:**
  * 先建立抽象基类AbstractDetector 
  * 然后FastDetector继承AbstractDetector
### 抽象类与纯虚函数
* 参考资料:
    * [虚函数和纯虚函数的区别](http://blog.csdn.net/hackbuteer1/article/details/7558868)
    * [抽象类与纯虚函数](https://www.cnblogs.com/bluestorm/archive/2012/08/29/2662350.html)
* 虚函数和纯虚函数可以定义在同一个类(class)中，含有纯虚函数的类被称为抽象类(abstract class)，而只含有虚函数的类(class)不能被称为抽象类(abstract class)。
* 虚函数可以被直接使用，也可以被子类(sub class)重载以后以多态的形式调用，而纯虚函数必须在子类(sub class)中实现该函数才可以使用，因为纯虚函数在基类(base class)只有声明而没有定义。
* 虚函数必须实现，如果不实现，编译器将报错，错误提示为：`error LNK****: unresolved external symbol "public: virtual void __thiscall ClassName::virtualFunctionName(void)"`  
* 虚函数是C++中用于实现多态(polymorphism)的机制。核心理念就是通过基类访问派生类定义的函数
  
  ```c
   AbstractDetector(           
      const int img_width,
      const int img_height,
      const int cell_size,
      const int n_pyr_levels);//基类构造函数
      
   FastDetector::FastDetector(
     const int img_width,
     const int img_height,
     const int cell_size,
     const int n_pyr_levels) :
         AbstractDetector(img_width, img_height, cell_size, n_pyr_levels) 
     {}
  ```


## foreach 与 lambda 结合用法   
* [博客](http://blog.csdn.net/czyt1988/article/details/43636473)
* [cppreference.com范例](http://zh.cppreference.com/w/cpp/algorithm/for_each)
```c
std::for_each(fts.begin(), fts.end(), [&](svo::Feature* i){
    cv::circle(img_rgb, cv::Point2f(i->px[0], i->px[1]), 4*(i->level+1), cv::Scalar(0,255,0), 1);
  });
```
再看一个教例:
```c
#include <vector>
#include <algorithm>
#include <iostream>
 
struct Sum
{
    Sum(): sum{0} { }
    void operator()(int n) { sum += n; }
    int sum;
};//一个结构体(类),定义了一个仿函数
 
int main()
{
    std::vector<int> nums{3, 4, 2, 8, 15, 267};
 /*
  [](const int& n) { std::cout << " " << n; };
   //利用lambda函数定义了一个打印函数,无返回值,相当于:
   void print (const int& n)
   {
      std::cout << " " << n; 
   }
 */
    auto print = [](const int& n) { std::cout << " " << n; };
 
    std::cout << "before:";
    std::for_each(nums.begin(), nums.end(), print);
    std::cout << '\n';
 
    std::for_each(nums.begin(), nums.end(), [](int &n){ n++; });//引用传值
 
    // 对每个数调用 Sum::operator()
    Sum s = std::for_each(nums.begin(), nums.end(), Sum());
 
    std::cout << "after: ";
    std::for_each(nums.begin(), nums.end(), print);
    std::cout << '\n';
    std::cout << "sum: " << s.sum << '\n';//调用sum()
}
```
**输出:**
```c
before: 3 4 2 8 15 267
after:  4 5 3 9 16 268
sum: 305
```
## 常用数学运算函数 
 函数                                                        |   解释                  |头文件
 -----------------------------------------------------------|------------------------|----------------------
 [ceil](http://zh.cppreference.com/w/cpp/numeric/math/ceil) |返回不小于 arg 的最小整数值 | 定义于头文件 `<cmath>`
 [floor](http://zh.cppreference.com/w/cpp/numeric/math/floor)|不大于给定值的最接近整数   |定义于头文件 `<cmath>`
 [fill](http://zh.cppreference.com/w/cpp/algorithm/fill)     | 填充                   | 定义于头文件 `<cmath>`
 [fmin](http://en.cppreference.com/w/cpp/numeric/math/fmin)  | 返回二个浮点数的较小者    |定义于头文件 `<cmath>`
 [std::numeric_limits](http://zh.cppreference.com/w/cpp/types/numeric_limits)    |  例如 int 类型的最大可能值是 std::numeric_limits`<int>`::max()|定义于头文件 `<limits>`
 [nth_element](http://zh.cppreference.com/w/cpp/algorithm/nth_element)| 这个新的 nth 元素前的所有元素小于或等于新的 nth 元素后的所有元素    |定义于头文件 `<algorithm>`
  **举例:**
 * ceil(static_cast<double>(img_width)/cell_size_)
 * std::fill(grid_occupancy_.begin(), grid_occupancy_.end(), false);
 * nth_element
```c
T getMedian(vector<T>& data_vec)
{
  assert(!data_vec.empty());
  typename vector<T>::iterator it = data_vec.begin()+floor(data_vec.size()/2);
  nth_element(data_vec.begin(), it, data_vec.end());
  return *it;
}
```
 ## 字符串相关
 * `std::basic_string::substr`
    ```
    basic_string substr( size_type pos = 0,
                     size_type count = npos ) const;//默认从pos(0)开始 
    ```
     
    **举例 :**
    ```c
    #include <string>
    #include <iostream>
    
    int main()
    {
        std::string a = "0123456789abcdefghij";
    
        // count is npos, returns [pos, size())
        std::string sub1 = a.substr(10);
        std::cout << sub1 << '\n';
    
        // both pos and pos+count are within bounds, returns [pos, pos+count)
        std::string sub2 = a.substr(5, 3);
        std::cout << sub2 << '\n';
    
        // pos is within bounds, pos+count is not, returns [pos, size()) 
        std::string sub4 = a.substr(a.size()-3, 50);
        std::cout << sub4 << '\n';
    
        try {
            // pos is out of bounds, throws
            std::string sub5 = a.substr(a.size()+3, 50);
            std::cout << sub5 << '\n';
        } catch(const std::out_of_range& e) {
            std::cout << "pos exceeds string size\n";
        }
    }
    ```
    **output:**
    ```c
    abcdefghij
    567
    hij
    pos exceeds string size
    ```
* [std::stoi](http://en.cppreference.com/w/cpp/string/basic_string/stol)  
**string转整形**  
 舍弃所有空白符（以调用 isspace() 鉴别），直到找到首个非空白符，然后取尽可能多的字符组成底 n （其中 n=base ）的整数表示，并将它们转换成一个整数值。合法的整数值由下列部分组成.  

    **举例 :**
    ```c
        #include <iostream>
        #include <string>
        
        int main()
        {
            std::string str1 = "45";
            std::string str2 = "3.14159";
            std::string str3 = "31337 with words";
            std::string str4 = "words and 2";
        
            int myint1 = std::stoi(str1);
            int myint2 = std::stoi(str2);
            int myint3 = std::stoi(str3);
            // error: 'std::invalid_argument'
            // int myint4 = std::stoi(str4);
        
            std::cout << "std::stoi(\"" << str1 << "\") is " << myint1 << '\n';
            std::cout << "std::stoi(\"" << str2 << "\") is " << myint2 << '\n';
            std::cout << "std::stoi(\"" << str3 << "\") is " << myint3 << '\n';
            //std::cout << "std::stoi(\"" << str4 << "\") is " << myint4 << '\n';
        }
    ```
    **Output :**
    ```
    std::stoi("45") is 45
    std::stoi("3.14159") is 3
    std::stoi("31337 with words") is 31337
    ```
* [stof](http://zh.cppreference.com/w/cpp/string/basic_string/stof)   
**string--> float**   
函数会舍弃任何空白符（由 std::isspace() 确定），直至找到首个非空白符。然后它会取用尽可能多的字符，以构成合法的浮点数表示，并将它们转换成浮点值。
* `std::stringstream str;`  
`#include <sstream>`
## 容器相关
### vector
* **`insert`**  
除了常见的`push_back`和`push_front`操作外,`vector`还支持更一般的插入操作
  * 在容器中的特定位置添加元素(P307)  
  eg: 在vector `px_cur_`的`begin()`前,插入`px_ref_`的所有元素.而不用for遍历.
    ```c
    px_cur_.insert(px_cur_.begin(), px_ref_.begin(), px_ref_.end());
    ```
## 批量读取文件
### 批量图片函数
```c
void LoadImages(const string &strImagePath, const string &strPathTimes,
                vector<string> &vstrImages, vector<double> &vTimeStamps)
{
    ifstream fTimes;
    fTimes.open(strPathTimes.c_str());
    vTimeStamps.reserve(5000);
    vstrImages.reserve(5000);
    while(!fTimes.eof())
    {
        string s;
        getline(fTimes,s);
        if(!s.empty())
        {
            stringstream ss;
            ss << s;
            vstrImages.push_back(strImagePath + "/" + ss.str() + ".png");
            double t;
            ss >> t;
            vTimeStamps.push_back(t/1e9);

        }
    }
}

// Retrieve paths to images
    vector<string> vstrImageFilenames;
    vector<double> vTimestamps;
    LoadImages(string(argv[3]), string(argv[4]), vstrImageFilenames, vTimestamps);

    int nImages = vstrImageFilenames.size();

    if(nImages<=0)
    {
        cerr << "ERROR: Failed to load images" << endl;
        return 1;
    }
```
### 读取yaml文件 cv::FileStorage
#### Reading data from a file storage.
To read the previously written XML, YAML or JSON file, do the following:
* Open the file storage using FileStorage::FileStorage constructor or FileStorage::open method.  
* Read the data you are interested in. Use FileStorage::operator [], FileNode::operator []
    and/or **FileNodeIterator**.
* Close the storage using FileStorage::release.  
**举例:** 
    ```c
    FileStorage fs2("test.yml", FileStorage::READ);

        // first method: use (type) operator on FileNode.
        int frameCount = (int)fs2["frameCount"];

        String date;
        // second method: use FileNode::operator >>
        fs2["calibrationDate"] >> date;

        Mat cameraMatrix2, distCoeffs2;
        fs2["cameraMatrix"] >> cameraMatrix2;
        fs2["distCoeffs"] >> distCoeffs2;

        cout << "frameCount: " << frameCount << endl
            << "calibration date: " << date << endl
            << "camera matrix: " << cameraMatrix2 << endl
            << "distortion coeffs: " << distCoeffs2 << endl;

        FileNode features = fs2["features"];
        FileNodeIterator it = features.begin(), it_end = features.end();
        int idx = 0;
        std::vector<uchar> lbpval;

        // iterate through a sequence using FileNodeIterator
        for( ; it != it_end; ++it, idx++ )
        {
            cout << "feature #" << idx << ": ";
            cout << "x=" << (int)(*it)["x"] << ", y=" << (int)(*it)["y"] << ", lbp: (";
            // you can also easily read numerical arrays using FileNode >> std::vector operator.
            (*it)["lbp"] >> lbpval;
            for( int i = 0; i < (int)lbpval.size(); i++ )
                cout << " " << (int)lbpval[i];
            cout << ")" << endl;
        }
        fs2.release();
    ```
#### 写入yaml文件
* Write all the data you want using the streaming operator `<<`, just like in the case of STL streams.
* Close the file using FileStorage::release. FileStorage destructor also closes the file.
* To write a mapping, you first write the special string `{` to the storage, then write the elements as pairs (`fs << <element_name> << <element_value>`) and then write the closing `}`.
* To write a sequence, you first write the special string `[`, then write the elements, then write the closing `]`.  
* In YAML/JSON (but not XML), mappings and sequences can be written in a compact Python-like inline form. In the sample above matrix elements, as well as each feature, including its lbp value, is stored in such inline form. To store a mapping/sequence in a compact form, put `:` after the opening character, e.g. use `{:` instead of `{` and `[:` instead of `[`. When the data is written to XML, those extra `:` are ignored.

**Here is an example:**
    ```c
    #include "opencv2/opencv.hpp"
        #include <time.h>

        using namespace cv;

        int main(int, char** argv)
        {
            FileStorage fs("test.yml", FileStorage::WRITE);

            fs << "frameCount" << 5;
            time_t rawtime; time(&rawtime);
            fs << "calibrationDate" << asctime(localtime(&rawtime));
            Mat cameraMatrix = (Mat_<double>(3,3) << 1000, 0, 320, 0, 1000, 240, 0, 0, 1);
            Mat distCoeffs = (Mat_<double>(5,1) << 0.1, 0.01, -0.001, 0, 0);
            fs << "cameraMatrix" << cameraMatrix << "distCoeffs" << distCoeffs;
            fs << "features" << "[";
            for( int i = 0; i < 3; i++ )
            {
                int x = rand() % 640;
                int y = rand() % 480;
                uchar lbp = rand() % 256;

                fs << "{:" << "x" << x << "y" << y << "lbp" << "[:";
                for( int j = 0; j < 8; j++ )
                    fs << ((lbp >> j) & 1);
                fs << "]" << "}";
            }
            fs << "]";
            fs.release();
            return 0;
        }
    ```
**效果:**  
```
@code{.yaml}
%YAML:1.0
frameCount: 5
calibrationDate: "Fri Jun 17 14:09:29 2011\n"
cameraMatrix: !!opencv-matrix
   rows: 3
   cols: 3
   dt: d
   data: [ 1000., 0., 320., 0., 1000., 240., 0., 0., 1. ]
distCoeffs: !!opencv-matrix
   rows: 5
   cols: 1
   dt: d
   data: [ 1.0000000000000001e-01, 1.0000000000000000e-02,
       -1.0000000000000000e-03, 0., 0. ]
features:
   - { x:167, y:49, lbp:[ 1, 0, 0, 1, 1, 0, 1, 1 ] }
   - { x:298, y:130, lbp:[ 0, 0, 0, 1, 0, 0, 1, 1 ] }
   - { x:344, y:158, lbp:[ 1, 1, 0, 0, 0, 0, 1, 0 ] }
```
## opencv相机标定系列
### 单目标定
* calibrateCamera
```c
CV_EXPORTS_W double calibrateCamera( InputArrayOfArrays objectPoints,
                                     InputArrayOfArrays imagePoints, Size imageSize,
                                     InputOutputArray cameraMatrix, InputOutputArray distCoeffs,
                                     OutputArrayOfArrays rvecs, OutputArrayOfArrays tvecs,
                                     int flags = 0, TermCriteria criteria = TermCriteria(
                                        TermCriteria::COUNT + TermCriteria::EPS, 30, DBL_EPSILON) );
```
函数目的:找到相机内参和外参.  
算法的步骤：
1. 计算内参或者由外界输入初始值．
2. 利用solvePnP,通过内参估计初始的相机位姿.
3. 全局LM最小化重投影误差.(1.像素坐标 2.空间点通过内参矩阵投影到像素的坐标 3.求距离二范数之和)
* objectPoints: 在棋盘坐标下的各自坐标(e.g. `std::vector<std::vector<cv::Vec3f>>`),一般Ｚ为０．
* imagePoints：投影到图像的坐标(e.g. `std::vector<std::vector<cv::Vec2f>>`)
* distCoeffs: k_1, k_2, p_1, p_2, k_3
* rvecs: 输出每个标定板相对于相机坐标系旋转向量(e.g. `std::vector<cv::Mat>>`)
* tvecs: 输出每个标定板相对于相机坐标系平移向量(e.g. `std::vector<cv::Mat>>`)
* flag: 可以为0或者是以下值的组合,用`+`表示组合.
    * **CV_CALIB_USE_INTRINSIC_GUESS** :给定初始值
    * **CV_CALIB_FIX_PRINCIPAL_POINT** :求解的过程中,`principal point`不变.保持初始值,或者理论中心值.
    * **CV_CALIB_ZERO_TANGENT_DIST** : Tangential distortion coefficients p1,p2设为0.
    * **CV_CALIB_FIX_K1,...,CV_CALIB_FIX_K6** : 在优化的过程中相对应的畸变系数不变.
    * **CV_CALIB_RATIONAL_MODEL** :　Coefficients k4, k5, and k6 are enabled.
* return： the overall RMS re-projection error.
### 双目标定stereoCalibrate
1. 单目标定(左/右分别进行`calibrateCamera`)
2. stereoCalibrate-->内参1,2/畸变/R1R2/P1P2: P是新的内参矩阵,具体看opencv
3. initUndistortRectifyMap 图像矫正
    * 输入: 内参,畸变 R,P(新内参3X4)
    * 输出: 映射图矩阵(map)X/Y
4. remap(): 利用map将图片映射   
**有些参数是可以`Input/output`,比如内参矩阵和畸变系数**
    ```c
    CV_EXPORTS_W double stereoCalibrate( InputArrayOfArrays objectPoints,
                                        InputArrayOfArrays imagePoints1, InputArrayOfArrays imagePoints2,
                                        InputOutputArray cameraMatrix1, InputOutputArray distCoeffs1,
                                        InputOutputArray cameraMatrix2, InputOutputArray distCoeffs2,
                                        Size imageSize, OutputArray R,OutputArray T, OutputArray E, OutputArray F,
                                        int flags = CALIB_FIX_INTRINSIC,
                                        TermCriteria criteria = TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, 30, 1e-6) );
    ```
* @param R: Output rotation matrix between the 1st and the 2nd camera coordinate systems.
* @param T: Output translation vector between the coordinate systems of the cameras.
* @param E: Output essential matrix.
* @param F: Output fundamental matrix. F = cameraMatrix2^{-T} E cameraMatrix1^{-1}
* @param flags Different flags that may be zero or a combination of the following values:
    * **CV_CALIB_FIX_INTRINSIC** :内参给定初始值,内参矩阵`cameraMatrix`作为输入
    * **CV_CALIB_USE_INTRINSIC_GUESS** :给定内参的一些或者全部系数
    * **CV_CALIB_SAME_FOCAL_LENGTH** : 强制使fx==fy
* The function returns the final value of the re-projection error.  
```
R_2=R*R_1*T_2=R*T_1 + T
E=T^R//
F=K2{-T}*E*K1{-1}
```
### 双目矫正stereoRectify
```c
CV_EXPORTS_W void stereoRectify( InputArray cameraMatrix1, InputArray distCoeffs1,
                                 InputArray cameraMatrix2, InputArray distCoeffs2,
                                 Size imageSize, InputArray R, InputArray T,
                                 OutputArray R1, OutputArray R2,
                                 OutputArray P1, OutputArray P2,
                                 OutputArray Q, int flags = CALIB_ZERO_DISPARITY,
                                 double alpha = -1, Size newImageSize = Size(),
                                 CV_OUT Rect* validPixROI1 = 0, CV_OUT Rect* validPixROI2 = 0 );
```
* 输入: 内参矩阵1,2;畸变系数1,2;图像分辨率;两相机之间的变换R,T
* 输出: 
    * R1,R2:各自矫正后的旋转变换矩阵
    * P1=[fx,0,cx,0;0,fy,cy,0;0,0,1,0] 3x4 
    * P2=[fx,0,cx,**Tx*fx**;0,fy,cy,0;0,0,1,0] 3x4 注意,这里有一个x方向的平移
    * Q:输出4x4 视差-深度的矩阵 为了以后求深度用的`reprojectImageTo3D()`
    * validPixROI:矫正之后的图像
### projectPoints
将空间点投影到像素上objectPoints-->imagePoints
```c
CV_EXPORTS_W void projectPoints( InputArray objectPoints,
                                 InputArray rvec, InputArray tvec,
                                 InputArray cameraMatrix, InputArray distCoeffs,
                                 OutputArray imagePoints,
                                 OutputArray jacobian = noArray(),
                                 double aspectRatio = 0 );
```
### 图像矫正
图像矫正的本质，其实就是重投影的过程，即【像素坐标→物理坐标→像素坐标】的过程。  
Opencv中UndistortPoints就是执行的正向矫正过程，而initUndistortRectifyMap执行的是逆向矫正过程.
* 正向矫正的流程为：畸变像素坐标→畸变物理坐标→标准物理坐标→标准像素坐标  
* 逆向矫正的流程为：标准像素坐标→标准物理坐标→畸变物理坐标→畸变像素坐标  
X=(u-cx)/fx  
Y=(v-cy)/fy  
[opencv图像矫正原理](https://docs.opencv.org/2.4/modules/calib3d/doc/camera_calibration_and_3d_reconstruction.html?highlight=undistortpoints)
```c
CV_EXPORTS_W void undistortPoints( InputArray src, OutputArray dst,
                                   InputArray cameraMatrix, InputArray distCoeffs,
                                   InputArray R = noArray(), InputArray P = noArray());
```
### 极线匹配
```c
CV_EXPORTS_W void computeCorrespondEpilines( InputArray points, int whichImage,
                                             InputArray F, OutputArray lines );
```t
* 输出:lines: ax+by+c=0 (a,b,c),并且a^2+b^2=1
## opencv
### 特征点相关
* [keypoint Size and response](https://stackoverflow.com/a/10333506/9279780)
## 技巧
### Qt函数注释技巧  
自动生成函数注释  `/** `
```c
/**
 * @brief computeHomography
 * @param f_ref
 * @param f_cur
 * @param focal_length
 * @param reprojection_threshold
 * @param inliers
 * @param xyz_in_cur
 * @param T_cur_from_ref
 */
```
### Qt出现中文编码乱码问题
在`工具`-->`选项`-->`文本编辑器`-->`行为`-->`文件编码`-->`默认编码:`选择`GBK`;如果不行就选`UTF-8`.
### Linux下不能进入windows的NTFS分区之挂载错误问题（error mounting）
* 首先重启电脑,确保`Windows`是`正常关机`.重新进入`Linux``.  
* 如果还是不能访问硬盘接下来第二步:  
   * sudo apt-get install ntfs-3g
   * sudo ntfsfix /dev/sda2
### 单应矩阵
* [单应矩阵博客](http://blog.csdn.net/sunshine_in_moon/article/details/45461819)
* [单应矩阵分解R,t](http://blog.csdn.net/kokerf/article/details/72885435)
### opencv求二范数之和
`double norm(InputArray src1, InputArray src2,int normType = NORM_L2, InputArray mask = noArray());`

## Bugs
### 1. 类成员变量初始化顺序问题
**描述:**  
`gcc warning" 'will be initialized after'`  
**解决:**   
[初始化顺序](https://stackoverflow.com/questions/1564937/gcc-warning-will-be-initialized-after)

### 2. 注释里也不能出现反斜杠