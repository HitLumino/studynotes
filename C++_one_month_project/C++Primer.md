<!-- TOC -->

- [C++ Primer](#c-primer)
    - [第二章 变量和基本类型](#%E7%AC%AC%E4%BA%8C%E7%AB%A0-%E5%8F%98%E9%87%8F%E5%92%8C%E5%9F%BA%E6%9C%AC%E7%B1%BB%E5%9E%8B)
        - [当我们付给带符号类型一个超出他的范围的值时，结果是未定义的。（p33）](#%E5%BD%93%E6%88%91%E4%BB%AC%E4%BB%98%E7%BB%99%E5%B8%A6%E7%AC%A6%E5%8F%B7%E7%B1%BB%E5%9E%8B%E4%B8%80%E4%B8%AA%E8%B6%85%E5%87%BA%E4%BB%96%E7%9A%84%E8%8C%83%E5%9B%B4%E7%9A%84%E5%80%BC%E6%97%B6%EF%BC%8C%E7%BB%93%E6%9E%9C%E6%98%AF%E6%9C%AA%E5%AE%9A%E4%B9%89%E7%9A%84%E3%80%82%EF%BC%88p33%EF%BC%89)
        - [左值和右值](#%E5%B7%A6%E5%80%BC%E5%92%8C%E5%8F%B3%E5%80%BC)
        - [声明和定义](#%E5%A3%B0%E6%98%8E%E5%92%8C%E5%AE%9A%E4%B9%89)
        - [引用和const和指针](#%E5%BC%95%E7%94%A8%E5%92%8Cconst%E5%92%8C%E6%8C%87%E9%92%88)
        - [类型别名`typedef`和`using`](#%E7%B1%BB%E5%9E%8B%E5%88%AB%E5%90%8Dtypedef%E5%92%8Cusing)
    - [搞清楚什么是拷贝/赋值拷贝/析构/三五法则/移动构造函数?](#%E6%90%9E%E6%B8%85%E6%A5%9A%E4%BB%80%E4%B9%88%E6%98%AF%E6%8B%B7%E8%B4%9D%E8%B5%8B%E5%80%BC%E6%8B%B7%E8%B4%9D%E6%9E%90%E6%9E%84%E4%B8%89%E4%BA%94%E6%B3%95%E5%88%99%E7%A7%BB%E5%8A%A8%E6%9E%84%E9%80%A0%E5%87%BD%E6%95%B0)
        - [什么是拷贝? 深拷贝? 浅拷贝?](#%E4%BB%80%E4%B9%88%E6%98%AF%E6%8B%B7%E8%B4%9D-%E6%B7%B1%E6%8B%B7%E8%B4%9D-%E6%B5%85%E6%8B%B7%E8%B4%9D)
            - [[1]Notes: 对比`push`和`emplace`成员函数.](#1notes-%E5%AF%B9%E6%AF%94push%E5%92%8Cemplace%E6%88%90%E5%91%98%E5%87%BD%E6%95%B0)
        - [拷贝赋值运算符](#%E6%8B%B7%E8%B4%9D%E8%B5%8B%E5%80%BC%E8%BF%90%E7%AE%97%E7%AC%A6)
        - [析构函数](#%E6%9E%90%E6%9E%84%E5%87%BD%E6%95%B0)
            - [析构函数完成什么工作?什么时候调用?](#%E6%9E%90%E6%9E%84%E5%87%BD%E6%95%B0%E5%AE%8C%E6%88%90%E4%BB%80%E4%B9%88%E5%B7%A5%E4%BD%9C%E4%BB%80%E4%B9%88%E6%97%B6%E5%80%99%E8%B0%83%E7%94%A8)
        - [三/五法则](#%E4%B8%89%E4%BA%94%E6%B3%95%E5%88%99)
        - [拷贝控制和资源管理](#%E6%8B%B7%E8%B4%9D%E6%8E%A7%E5%88%B6%E5%92%8C%E8%B5%84%E6%BA%90%E7%AE%A1%E7%90%86)
            - [**1. 行为像值的类**](#1-%E8%A1%8C%E4%B8%BA%E5%83%8F%E5%80%BC%E7%9A%84%E7%B1%BB)
            - [**2. 行为像指针的类**](#2-%E8%A1%8C%E4%B8%BA%E5%83%8F%E6%8C%87%E9%92%88%E7%9A%84%E7%B1%BB)
        - [对象移动](#%E5%AF%B9%E8%B1%A1%E7%A7%BB%E5%8A%A8)
            - [右值引用](#%E5%8F%B3%E5%80%BC%E5%BC%95%E7%94%A8)

<!-- /TOC -->
# C++ Primer

**路漫漫其修远兮，吾将上下而求索。----2018.4.28 夜**



## 第二章 变量和基本类型

### 当我们付给带符号类型一个超出他的范围的值时，结果是未定义的。（p33）
### 左值和右值
* **左值可以出现在赋值语句的左边或右边。**
* 右值只能出现在赋值的右边，不能出现在赋值语句的左边。
变量是左值，因此可以出现在赋值语句的左边。数字字面值是右值，因此不能被赋值。
### 声明和定义
* 变量的定义用于为变量分配存储空间，还可以为变量指定初始值。在一个程序中，变量有且仅有一个定义。
* 声明用于向程序表明变量的类型和名字。定义也是声明：当定义变量时我们声明了它的类型和名字。可以通过使用 extern 关键字声明变量名而不定义它。不定义变量的声明包括对象名、对象类型和对象类型前的关键字`extern`
    ```c
    extern int i; // declares but does not define i
    int i; // declares and defines i
    ```
* extern 声明不是定义，也不分配存储空间。事实上，它只是说明变量定义在程序的其他地方。程序中变量可以声明多次，但只能定义一次。
### 引用和const和指针
* 当引用初始化后，只要该引用存在，它就保持绑定到初始化时指向的对象。不可能将引用再绑定到另一个对象。
* 空指针：生成空指针：`int p=nullptr`
* `void*`:可以存放任意对象的地址，但是我们不知道是什么样的类型的对象。
* 指向指针的引用。
    ```c
    int i=42;
    int *p;
    int *&r=p;

    r=&i;//相当于p指向i
    *r=0;
    ```
要理解r到底是什么，最简单的办法是从右向左阅读r的定义。因此上一个r是一个引用。应用的是一个指针，最后数据类型是int。
* `constexpr`:常量表达式是指值不会改变并且在编译过程中就能得到结果。
    ```c++
    constexpr int mf=20;//20是常量表达式
    constexpr int limit=mf+1;
    constexpr int sz=size(); //只有当size()是constexpr函数时，才正确！
    ```
* 如果你认为变量是一个常量表达式，那就把它声明为`constexpr`.

### 类型别名`typedef`和`using`
 `typedef double wages;` 
 `using SI=Sale_Item;`

## 搞清楚什么是拷贝/赋值拷贝/析构/三五法则/移动构造函数?

拷贝控制操作:5种.

拷贝构造函数/拷贝赋值运算符/移动构造函数/移动赋值运算符/析构函数

### 什么是拷贝? 深拷贝? 浅拷贝?　

```c
class Foo{
    public:
    Foo();
    Foo(const Foo&);//拷贝构造函数
    ...
};
```

* 如果一个构造函数的第一个参数是自身类型的引用，且任何额外参数都有默认值，那么这就是拷贝构造函数．
* 如果一个类有一个移动构造函数，则拷贝初始化有时会使用移动构造函数而非拷贝构造函数来完成.
* **拷贝初始化**不仅在`=``定义变量时发生,在以下情况也会发生:(P441)
    * 将一个对象作为实参传递给一个非引用类型的形参  (传值)
    * 从一个返回类型为非引用类型的函数返回一个对象  (不是返回引用)
    * 用花括号列表初始化一个数组中的一个元素或一个聚合类中的成员
    * 当我们初始化STL容器或者调用`insert`或`push`成员时,也是拷贝初始化.相反,用`emplace`成员创建的元素都进行直接初始化.[1]
    
#### [1]Notes: 对比`push`和`emplace`成员函数.

* 向一个`vector deque string `插入元素会使所有指向容器的迭代器/引用和指针失效.(effective STL)
* 向一个`vector deque string `尾部以外插入元素,都需要移动元素;向`vector string`添加元素可能会导致整个对象存储空间的**重新分配**.(effective STL)
* 当我们用一个对象来初始化容器,或插入.实际放入容器的是对象值的拷贝,而不是对象本身.

`emplace`操作: `emplace_front`/ `emplace`/ `emplace_back`

当我们调用一个`emplace`成员函数时,直接将参数传递给元素类型的构造函数.`emplace`成员直接在容器管理的内存空间中直接构造元素.

```c
c.emplace_back("99-99",25,15.99);//直接构造sales_data对象     1
c.push_back("99-99",25,15.99);//错误!,不符合`push_back`参数   2
c.push_back(sales_data("99-99",25,15.99));//创建一个临时对象,在传递给push_back    3
```
其中 1,3 都会创建新的sales_data对象,在1中会直接在容器管理的内存空间中创建对象.而3 会创建临时对象,再压入容器中.

```c
c.emplace_back();//使用sales_data默认构造函数
c.emplace(iter,"99-99");//使用相对应的构造函数
```

    Notes: 传递给emplace函数的参数必须与元素类型的构造函数相匹配.
    push或insert是拷贝初始化;emplace是直接初始化.

### 拷贝赋值运算符

```c
class Foo{
    public:
    Foo();
    Foo& operator=(const Foo&);//赋值运算符
    ...
};
```
* 重载赋值运算符本质就是函数,`operator=`的函数,必须定义为成员函数.
    * 如果运算符是成员函数,其左侧运算对象就绑定到隐式的`this`参数
* 赋值运算符通常返回一个指向其坐车运算对象的引用.

### 析构函数

析构函数没有返回值,也不接受参数.因此不能被重载,一个类只有一个析构函数.

#### 析构函数完成什么工作?什么时候调用?

* 在构造函数中,成员初始化是在函数体执行之前完成的,且按照类先后定义的位置顺序进行初始化;一个析构函数先执行函数体,然后销毁成员.成员按初始化的逆序销毁.
* 内置类型没有析构函数,不需要销毁;如果`类`类型,需要执行自己的析构函数.
* 隐式销毁一个内置指针类型的成员不会delete他所指的对象.
* 什么时候会调用析构函数:
    * 变量离开其作用域
    * 当一个对象被销毁,其成员也被销毁
    * 容器被销毁,其元素也被销毁
    * 对于动态分配的对象,当对指向他的指针应用`delete`时被销毁.
    * 对于临时对象,当创建他的完整表达式结束时被销毁.

```c
{
    //新作用域
    sales_data *p =new sales_data;//p是一个内置指针
    auto p2=make_shared<sales_data>();//p2是一个shared_ptr
    sales_data item(*p);//拷贝构造函数将*p拷贝到item里
    vector<sales_data> vec;//局部变量vec
    vec.push_back(*p2);//拷贝P2所指的对象
    delete p;//对p指向的对象执行析构函数,如果没有这一步,不会被释放
}//退出局部作用域;对item,p2,vec调用析构函数
 //销毁p2会递减其引用次数,如果次数为0,对象被释放.本例中,次数为0,因此shared_ptr的析构函数会delete p2分配的sales_data对象
 //销毁vec,会销毁其内部元素
```

### 三/五法则
* **需要自定义析构函数的类也需要自定义拷贝和赋值操作**．
* **需要拷贝的操作也需要赋值操作,反之亦然**

如果这个类在构造函数中分配动态内存,合成析构函数不会delete一个指针数据成员,因此需要自定义一个析构函数释放构造函数分配的内存.并且,**他还需要一个拷贝构造函数和拷贝赋值运算符**.
```c
class HasPtr{
public:
    HasPtr(const std::string &s=std::string()):
    ps(new std::string(s),i(0)) { }
    ~HasPtr(){
        delete ps;
    }
private:
    std::string *ps;
    int i;
};
```
在这个版本的类定义中,构造函数中分配的内存将在HasPtr对象销毁时被释放.**但是**,会引入严重的错误!这个版本的类使用了合成拷贝构造和拷贝赋值运算符.这些函数简单拷贝指针成员,意味着多个HasPtr对象可能指向相同的内存:
```c
HasPtr f(HasPtr hp){//HasPtr是传值参数,所以将被拷贝
    HasPtr ret=hp;//拷贝给指定的HasPtr
    return ret;//ret和hp都会被销毁
}
```
当f返回时,ret和hp都会被销毁,在两个对象都会调用HasPtr的析构函数.会delete ret和hp中的指针成员.但是两个对象包含相同的指针值,代码会导致此指针被delete两次!--->未定义的行为!

此外,f的调用者还会使用传递给f的对象:

```c
HasPtr p("some");
f(p);//p.ps指向内存被释放!
HasPtr q(p);//现在p和q都指向无效内存!
```
其他:
* 使用`=default`,显式地要求编译器生成合成的版本;当我们在类内用`=default`声明时,--->声明为内联的.当我们不希望,应该只对成员的类外定义使用`=default`.**我们只能对默认构造函数或拷贝控制成员使用**.
* 阻止拷贝,例如iosstream类阻止了拷贝,避免多个对象写入或读取相同的IO缓冲.在函数参数列表后面加上`=delete`,定义删除的函数. **1. 我们可以对任何函数使用**. **2. 只能在函数第一次声明的时候使用**

```c
struct NoCopy{
    NoCopy()=default;//使用合成的默认构造函数
    NoCopy(const NoCopy&)=delete;
    NoCopy &operator=(const NoCopy&)=delete;
}
```

### 拷贝控制和资源管理

还是以上一个`HasPtr`类为例:
```c
class HasPtr{
public:
    HasPtr(const std::string &s=std::string()):
    ps(new std::string(s),i(0)) { }
    ~HasPtr(){
        delete ps;
    }
private:
    std::string *ps;
    int i;
};
```
#### **1. 行为像值的类**

为了提供类值的行为,对于类管理的资源,每一个对象都应该拥有一份自己的拷贝.则意味着对于ps指向的string,对于每一个HasPtr对象都必须有自己的拷贝.实现类值行为,HasPtr需要:

* 定义一个拷贝构造函数,完成对string的拷贝,而不是拷贝指针
* 定义一个析构函数释放string
* 定义一个拷贝赋值运算符来释放对象当前的string,并从右侧运算对象拷贝string

```c
    class HasPtr{
    public:
        HasPtr(const std::string &s=std::string()):
        ps(new std::string(s),i(0)) { }
        //对ps指向的string,每个HasPtr对象都有自己的拷贝
        HasPtr(const HasPtr& p):ps(new std::string(*p.ps),i(p.i)){}
        HasPtr& operator=(const HasPtr &);
        ~HasPtr(){
            delete ps;
        }
    private:
        std::string *ps;
        int i;
    };
```
接下来,类值拷贝赋值运算符:

赋值运算符通常组合了析构函数和构造函数的操作.
1. 类似析构函数,赋值操作会首先销毁左侧运算对象的资源(原来的值).
2. 类似拷贝构造函数,从右侧对象拷贝数据,但是要以正确的顺序执行.

```c
HasPtr& HasPtr::operator=(const HasPtr &rhs)
{
    auto newp=new string (*rhs.ps);
    delete ps;
    ps=newp;
    i=rhs.i;
    return *this;//返回本对象
}
```
Notes: 
1. 如果建一个对象赋予他自身,赋值运算符必须能正确工作.
2. 大多数赋值运算符组合了析构函数和拷贝构造函数的工作.
3. 一个好的模式是先将右侧对象拷贝到一个局部临时对象中;当拷贝完成后,销毁左侧运算对象的现有成员就是安全的了. 1.销毁左侧资源; 2.从临时对象拷贝到左侧.

以下是错误的:
```c
HasPtr& HasPtr::operator=(const HasPtr &rhs)
{
    //如果rhs和*this指向同一个对象,那就废了!(比如自己赋值给自己)
    delete ps;
    ps=new string (*(rhs.ps));
    i=rhs.i;
    return *this;//返回本对象
}
```
#### **2. 行为像指针的类**

令一个类展现类似指针的行为的最好办法是使用`shared_ptr`来管理类中的资源.拷贝(或赋值)一个`shared_ptr`会拷贝(或赋值)`shared_ptr`所指向的指针.

### 对象移动
标准库容器/string/shared_ptr类既支持移动也支持拷贝,IO类和unique_ptr类可以移动,但不支持拷贝.

#### 右值引用
为了支持移动操作,c++11加入了新的引用类型---右值引用(rvalue reference).所谓右值引用,即绑定到右值的引用.我们通过`&&`而不是`&`来获取右值.

* 右值引用只能绑定到一个将要销毁的对象
* 左值引用不能绑定到要求要求转换的表达式,字面常量或是返回右值的表达式;而右值完全相反.
* 我们可以将一个右值引用绑定到这类表达式,但不能绑定到一个左值.

```c
int i=42;
int &r=i;
int &&rr=i;//错
int &r2=i*42;//cuo
const int &r3=i*42;
int &&rr2=i*42;//对
```