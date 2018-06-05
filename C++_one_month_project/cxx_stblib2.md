
<!-- TOC -->

- [C++标准库 第2版](#c%E6%A0%87%E5%87%86%E5%BA%93-%E7%AC%AC2%E7%89%88)
    - [Chapter3 New Language Features](#chapter3-new-language-features)
        - [3.1 C++11语言新特性](#31-c11%E8%AF%AD%E8%A8%80%E6%96%B0%E7%89%B9%E6%80%A7)
            - [The requirement to put a space between two closing template](#the-requirement-to-put-a-space-between-two-closing-template)
            - [`nullptr `和`std::nullptr_t`](#nullptr-%E5%92%8Cstdnullptrt)
            - [一致性初始化](#%E4%B8%80%E8%87%B4%E6%80%A7%E5%88%9D%E5%A7%8B%E5%8C%96)
            - [Range-Based for Loops](#range-based-for-loops)
            - [Move Semantics and Rvalue References(右值引用)](#move-semantics-and-rvalue-references%E5%8F%B3%E5%80%BC%E5%BC%95%E7%94%A8)
            - [关键字`noexcept`](#%E5%85%B3%E9%94%AE%E5%AD%97noexcept)
            - [Keyword constexpr](#keyword-constexpr)
            - [Lambda 表达式](#lambda-%E8%A1%A8%E8%BE%BE%E5%BC%8F)
    - [Chapter4 一般概念](#chapter4-%E4%B8%80%E8%88%AC%E6%A6%82%E5%BF%B5)
        - [命名空间](#%E5%91%BD%E5%90%8D%E7%A9%BA%E9%97%B4)
        - [头文件](#%E5%A4%B4%E6%96%87%E4%BB%B6)
        - [差错和异常](#%E5%B7%AE%E9%94%99%E5%92%8C%E5%BC%82%E5%B8%B8)
            - [标准的Exception Classes](#%E6%A0%87%E5%87%86%E7%9A%84exception-classes)
    - [Chapter5 通用工具](#chapter5-%E9%80%9A%E7%94%A8%E5%B7%A5%E5%85%B7)

<!-- /TOC -->

# C++标准库 第2版

## Chapter3 New Language Features

### 3.1 C++11语言新特性

#### The requirement to put a space between two closing template 

expressions has gone:
```c++
vector<list<int> >; // OK in each C++ version
vector<list<int>>; // OK since C++11
```
#### `nullptr `和`std::nullptr_t`
C++11 lets you use nullptr instead of 0 or NULL to specify that a pointer refers to no value (which
differs from having an undefined value).他被自动转化成各种pointer类型，但不会转化成任何整数类型。他拥有类型`std::nullptr_t`，注意，他被视为基础类型。
#### 一致性初始化
面对任何初始化动作，都可以使用大括号。
```c
int values[] { 1, 2, 3 };
std::vector<int> v { 2, 3, 5, 7, 11, 13, 17 };
std::vector<std::string> cities {
"Berlin", "New York", "London", "Braunschweig", "Cairo", "Cologne"
};
std::complex<double> c{4.0,3.0}; // equivalent to c(4.0,3.0)
```
但是，会遇到narrowing---也就是精度降低或造成数值变动---对大括号而言是不可成立的。

```c
int x1(5.3); // OK, but OUCH: x1 becomes 5
int x2 = 5.3; // OK, but OUCH: x2 becomes 5
int x3{5.0}; // ERROR: narrowing
int x4 = {5.3}; // ERROR: narrowing
char c1{7}; // OK: even though 7 is an int, this is not narrowing
char c2{99999}; // ERROR: narrowing (if 99999 doesn’t fit into a char)
std::vector<int> v1 { 1, 2, 4, 5 }; // OK
std::vector<int> v2 { 1, 2.3, 4, 5.6 }; // ERROR: narrowing doubles to ints
```
如何解决？

利用`std::initializer_list<>`

Example1:
```c
void print (std::initializer_list<int> vals)
{
    for (auto p=vals.begin(); p!=vals.end(); ++p) { // process a list of values
    std::cout << *p << "\n";
    }
}
print ({12,3,5,7,11,13,17}); // pass a list of values to print()
```
Example2: 类的构造函数也可以

```c++
class P
{
    public:
    P(int,int);
    P(std::initializer_list<int>);
};
P p(77,5); // calls P::P(int,int)
P q{77,5}; // calls P::P(initializer_list)
P r{77,5,42}; // calls P::P(initializer_list)
P s = {77,5}; // calls P::P(initializer_list)
```

#### Range-Based for Loops

Example1 值

```c
for ( int i : { 2, 3, 5, 7, 9, 13, 17, 19 } ) {
std::cout << i << std::endl;
}
```

Example2: 引用

```c
std::vector<double> vec;
...
for ( auto& elem : vec ) {
elem *= 3;
}
```

Notes: avoid calling the copy constructor and the destructor for each element, you
should usually declare the current element to be a **constant reference**. 

```c
template <typename T>
void printElements (const T& coll)
{
    for (const auto& elem : coll) {
        std::cout << elem << std::endl;
    }
}
```

#### Move Semantics and Rvalue References(右值引用)

```c
class X {
public:
X (const X& lvalue); // copy constructor
X (X&& rvalue); // move constructor
...
};
```

[转 C++Primer.md](https://github.com/HitLumino/studynotes/blob/master/C%2B%2B_one_month_project/C%2B%2BPrimer.md)

#### 关键字`noexcept`

c++提供了关键字`noexcept`,用来指明某个函数不打算抛出异常.
```c
void swap (Type& x, Type& y) noexcept(noexcept(x.swap(y)))
{
x.swap(y);
}
```
这里`noexcept(...)`中你可以指定一个`Boolean`条件,若符合就不抛出异常.换句话说,那些指明`noexcept`而不带任何条件的,其实就是`noexcept(true)`.

#### Keyword constexpr

constexpr:常量表达式是指值不会改变并且在编译过程中就能得到结果。

```c
constexpr int mf=20;//20是常量表达式
constexpr int limit=mf+1;
constexpr int sz=size(); //只有当size()是constexpr函数时，才正确！
```
#### Lambda 表达式

* lambda 语法介绍:

  ```c++
  [] {
      std::cout<<"hello world!"<<std::endl;
  }();//print hello world!
  //或者传递给对象
  auto l=[]{std::cout<<"hello world!"<<std::endl;};
  l();//print hello world!
  //也可以拥有参数:
  auto l=[const std::string& s]{std::cout<<s<<std::endl;};
  l("hello world!");

  //但是lambda不可以是模板,必须指明所有类型.
  //lambda可以返回某物,你不需要指明类型,自己推导出来.
  []{return 42;}//返回类型是int

  //如果一定要指明返回类型,可以这样:
  []()->double{return 42;}
  ```


* capture(用以访问外部作用域)

  在每一个lambda最开始的方括号内,你可以指明一个**capture**用来处理外部作用域内未被传递为实参的数据:

  ```c++
  int x=0;
  int y=42;
  auto qqq=[x,&y]{
      std::cout<<x<<std::endl;
      std::cout<<y<<std::endl;
      ++y;
  };
  x=y=77;
  qqq();
  qqq();
  std::cout<<y<<std::endl;
  // $ clang++ -std=c++11 -stdlib=libc++ main.cpp -o c.out
  // 0 77 0 78 79

  //你也可以用[=,&y]取代[x,&y]
  //为了获得混合体,可引用或值传递.可以声明lambda为mutable
  int id=0;
  auto f=[id]() mutable{
      std::cout<<"id: "<<id<<std::endl;
      id++;//OK
  };
  id=42;
  f();
  f();
  f();
  std::cout<<id<<std::endl;
  //id: 0
  //id: 1
  //id: 2
  //42
  ```

#### `Member Template`(成员模板)

Class的成员函数可以是`template`.然而`Member Template`不能是`virtual`.

```c++
//成员函数模板
class MyClass{
    ...
    template<typename T>
        void f(T);
};

template <typename T>
class MyClass{
    private:
    	T value;
    public:
    void assign(const MyClass<T> & x){
        value=x.value;
    }
};
//如果assign()调用者和其实参的template类型不同,是不可以的.
//也就是说,这两个函数的<T>需要一致!
```

现在,这个成员函数的template实参可具备任何template类型,只要该类型"可被赋值".

```c++
template <typename T>
class MyClass{
    private:
    	T value;
    public:
    	template <typename X>
    void assign(const MyClass<X> &x){
            //value=x.value;
            //注意:现在assign()的实参x,其类型不同于*this,因此不能直接使用MyClass<>的private和protect成员!
            value=x.getValue();
        }
    T getValue() const{
        return value;
    }
    ...
};
void f(){
    MyClass<double> d;
    MyClass<int> i;
    d.assign(d);//OK
    d.assign(i);//OK
}
```

##### `template` 构造函数

Member Template的一个特殊形式就是Template构造函数.经常用于"对象被复制时给予隐式类型转换".注意:`template` 构造函数并不压制`copy`构造函数的隐式声明.如果类型完全符合,隐式的copy构造函数会被生成出来,并被调用.例如:

## Chapter4 一般概念

### 命名空间

### 头文件

```c
include <cstdlib> // was: <stdlib.h>
include <cstring> // was: <string.h>
//Inside these header files, all identifiers are declared in namespace std.
//One advantage of this naming scheme is that you can distinguish the old string header for char*
//C functions from the new string header for the standard C++ class string:
include <string> // C++ class string
include <cstring> // char* functions from C
```

### 差错和异常

#### 标准的Exception Classes

All exceptions thrown by the language or the library are derived from the base class `exception`,
defined in `<exception>`. 

![异常](pic/异常.png)

##  Chapter 5  通用工具

### `pair` 和 `tuple`

#### `pair的基本方法`

为了能让程序能够处理`pair`的两个值,它提供了`直接访问对应的数据成员`的能力. `struct`实现.

```c++
namespace std{
    template<typename T1,typename T2>
    struct pair{
    T1 first;
    T2 second;
    ...
    }
}
```

![](pic/pair_func.png)

写一个泛型函数模板,用一个`value pair` 写入一个`stream`内.

```c++
template<typename T1,typename T2>
std::ostream& operator <<(std::ostream& strm,const std::pair<T1,T2>& p)
{
    return strm<<"["<<p.first<<","<<p.second<<"]";
}
```

自c++11起,可以使用`tuple_size<>::value`获取元素个数;`tuple_element<>::type`获取类型;`get()`获得`first`或者`second`.

```c++
typedef std::pair<int,float> IntFloatPair;
IntFloatPair p(42,3.14);
std::get<0>(p)                            //42
std::get<1>(p)                            //3.14
std::tuple_size<IntFloatPair>::value      //2
std::tuple_element<0,IntFloatPair>::type  //生成int
```

##### 构造函数和赋值







