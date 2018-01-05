<!-- TOC -->

- [SVO代码解析](#svo%E4%BB%A3%E7%A0%81%E8%A7%A3%E6%9E%90)
    - [有关虚函数/虚类 继承](#%E6%9C%89%E5%85%B3%E8%99%9A%E5%87%BD%E6%95%B0%E8%99%9A%E7%B1%BB-%E7%BB%A7%E6%89%BF)
        - [派生类的构造函数(P531)](#%E6%B4%BE%E7%94%9F%E7%B1%BB%E7%9A%84%E6%9E%84%E9%80%A0%E5%87%BD%E6%95%B0p531)
        - [抽象类与纯虚函数](#%E6%8A%BD%E8%B1%A1%E7%B1%BB%E4%B8%8E%E7%BA%AF%E8%99%9A%E5%87%BD%E6%95%B0)
    - [foreach 与 lambda 结合用法](#foreach-%E4%B8%8E-lambda-%E7%BB%93%E5%90%88%E7%94%A8%E6%B3%95)
    - [常用数学运算函数](#%E5%B8%B8%E7%94%A8%E6%95%B0%E5%AD%A6%E8%BF%90%E7%AE%97%E5%87%BD%E6%95%B0)
        - [**举例:**](#%E4%B8%BE%E4%BE%8B)
    - [容器相关](#%E5%AE%B9%E5%99%A8%E7%9B%B8%E5%85%B3)
        - [vector](#vector)
    - [技巧](#%E6%8A%80%E5%B7%A7)
        - [Qt函数注释技巧](#qt%E5%87%BD%E6%95%B0%E6%B3%A8%E9%87%8A%E6%8A%80%E5%B7%A7)
        - [Qt出现中文编码乱码问题](#qt%E5%87%BA%E7%8E%B0%E4%B8%AD%E6%96%87%E7%BC%96%E7%A0%81%E4%B9%B1%E7%A0%81%E9%97%AE%E9%A2%98)
        - [Linux下不能进入windows的NTFS分区之挂载错误问题（error mounting）](#linux%E4%B8%8B%E4%B8%8D%E8%83%BD%E8%BF%9B%E5%85%A5windows%E7%9A%84ntfs%E5%88%86%E5%8C%BA%E4%B9%8B%E6%8C%82%E8%BD%BD%E9%94%99%E8%AF%AF%E9%97%AE%E9%A2%98%EF%BC%88error-mounting%EF%BC%89)
        - [单应矩阵](#%E5%8D%95%E5%BA%94%E7%9F%A9%E9%98%B5)

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
 ### **举例:**
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
## 容器相关
### vector
* **`insert`**  
除了常见的`push_back`和`push_front`操作外,`vector`还支持更一般的插入操作
  * 在容器中的特定位置添加元素(P307)  
  eg: 在vector `px_cur_`的`begin()`前,插入`px_ref_`的所有元素.而不用for遍历.
    ```c
    px_cur_.insert(px_cur_.begin(), px_ref_.begin(), px_ref_.end());
    ```
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
