<!-- TOC -->

- [Effective  C++](#effective-c)
    - [引用](#%E5%BC%95%E7%94%A8)
        - [返回引用](#%E8%BF%94%E5%9B%9E%E5%BC%95%E7%94%A8)
            - [函数有关引用返回的4种形式](#%E5%87%BD%E6%95%B0%E6%9C%89%E5%85%B3%E5%BC%95%E7%94%A8%E8%BF%94%E5%9B%9E%E7%9A%844%E7%A7%8D%E5%BD%A2%E5%BC%8F)
        - [C++：函数返回引用](#c%EF%BC%9A%E5%87%BD%E6%95%B0%E8%BF%94%E5%9B%9E%E5%BC%95%E7%94%A8)
            - [1. 千万不要返回局部对象的引用](#1-%E5%8D%83%E4%B8%87%E4%B8%8D%E8%A6%81%E8%BF%94%E5%9B%9E%E5%B1%80%E9%83%A8%E5%AF%B9%E8%B1%A1%E7%9A%84%E5%BC%95%E7%94%A8)
            - [2. 引用函数的<u>参数</u>，当然该参数也是一个引用](#2-%E5%BC%95%E7%94%A8%E5%87%BD%E6%95%B0%E7%9A%84u%E5%8F%82%E6%95%B0u%EF%BC%8C%E5%BD%93%E7%84%B6%E8%AF%A5%E5%8F%82%E6%95%B0%E4%B9%9F%E6%98%AF%E4%B8%80%E4%B8%AA%E5%BC%95%E7%94%A8)
            - [3. 引用返回左值](#3-%E5%BC%95%E7%94%A8%E8%BF%94%E5%9B%9E%E5%B7%A6%E5%80%BC)
        - [返回一个引用，意味着什么？](#%E8%BF%94%E5%9B%9E%E4%B8%80%E4%B8%AA%E5%BC%95%E7%94%A8%EF%BC%8C%E6%84%8F%E5%91%B3%E7%9D%80%E4%BB%80%E4%B9%88%EF%BC%9F)
        - [object.method1().method2() 是什么意思?](#objectmethod1method2-%E6%98%AF%E4%BB%80%E4%B9%88%E6%84%8F%E6%80%9D)
        - [如何能够使一个引用重新指向另一个对象？](#%E5%A6%82%E4%BD%95%E8%83%BD%E5%A4%9F%E4%BD%BF%E4%B8%80%E4%B8%AA%E5%BC%95%E7%94%A8%E9%87%8D%E6%96%B0%E6%8C%87%E5%90%91%E5%8F%A6%E4%B8%80%E4%B8%AA%E5%AF%B9%E8%B1%A1%EF%BC%9F)
        - [何时该使用引用, 何时该使用指针？](#%E4%BD%95%E6%97%B6%E8%AF%A5%E4%BD%BF%E7%94%A8%E5%BC%95%E7%94%A8-%E4%BD%95%E6%97%B6%E8%AF%A5%E4%BD%BF%E7%94%A8%E6%8C%87%E9%92%88%EF%BC%9F)

<!-- /TOC -->
# Effective  C++ 

## 引用
### 返回引用

#### [函数有关引用返回的4种形式](https://blog.csdn.net/duhengqi/article/details/70198630)

https://blog.csdn.net/qq_33266987/article/details/53516977

例如，下面的程序是有关引用返回的4种形式

```c
#include <iostream.h>
float temp;
float fn1(float r)
{
    temp = r*r*3.14;
    return temp;
}
float& fn2(float r)
{
    temp = r*r*3.14;
    return temp;
}
void main()
{
    float a=fn1(5.0); //1
    float& b=fn1(5.0); //2:warning
    float c=fn2(5.0); //3
    float& d=fn2(5.0); //4
}

```
```
　　运行结果为：
　　　　78．5
　　　　78．5
　　　　78．5
　　　　78．5
```

　　对主函数的4种引用返回的形式， 程序的运行结果是一样的。但是它们在内存中的活动情况是各不相同的。**其中变量temp是全局数据，驻留在全局数据区data。函数main()、函数fnl()或函数fn2()驻留在栈区stack。**

<u>全局变量需要在stack生成一个临时变量。</u>

* 第一种情况：

![img](https://img-blog.csdn.net/20170416220212294)

　　这种情况是一般的函数返回值方式。 返回全局变量temp值时，C++创建临时变量并将temp的值78.5复制给该临时变量。返回到主函数后，赋值语句a=fnl(5.0)把临时变量的值78.5复制给a。

* 第二种情况:

![img](https://img-blog.csdn.net/20170416220256232)

　　这种情况下，函数`fnl()`是以值方式返回的，返回时， 复制temp的值给临时变量。返回到主函数后，**引用b以该临时变量来初始化，使得b成为该临时变量的别名**。由于临时变量的作用域短暂，所以b面临无效的危险。 根据C++标准，临时变量或对象的生命期在一个 完整的语句表达式结束后便宣告结束，也即在`“float& b=fnl(5.0)；”`之后，临时变量不再存在。 所以引用b以后的值是个无法确定的值。BC对C++标准进行了扩展，规定如果临时变量或对象作为引用的初始化时，则其生命期与该引用一致。这样的程序， 依赖于编译器的具体实现，所以移植性是差的。
　　若要以返回值初始化一个引用，应该先创建一个变量，将函数返回值赋给这个变量，然 后再以该变量来初始化引用，就像下面这样：

```c
int x=fnl(5.0)；
int& b=x；
```

* 第三种情况：

  ```c
   float c=fn2(5.0); //3
  ```

  ​

![img](https://img-blog.csdn.net/20170416220354702)

　　这种情况，函数fn2()的返回值不产生副本，所以， 直接将变量temp返回给主函数。主函数的赋值语句中的左值，直接从变量temp中得到复制，这样避免了临时变量的产生。**当变量temp是一个用户自定义的类型时，这种方式直接带来了程序执行效率和空间利用的利益。**

* 第四种情况：

![img](https://img-blog.csdn.net/20170416220423232)

　　这种情况， 函数fn2()返回一个引用，因此不产生任何返回值的副本。在主函数中，一个引用声明d用该返回值来初始化，使得d成为temp的别名。由于temp是全局变量， 所以在d的有效期内temp始终保持有效。这样做法是安全的。
　　**但是， 如果返回不在作用域范围内的变量或对象的引用， 那就有问题了。**这与返回一个**局部作用域指针的性质**一样严重。BC作为编译错误，VC作为警告，来提请编程者注意。例如，下面的代码返回一个引用，来给主函数的引用声明初始化：

```C
　float& fn2(float r)
　　　　{
　　　　　float temp；
　　　　　temp=r*r*3.14；
　　　　　return temp；
　　　　}
　　　　void main()
　　　　{
　　　　　float &d=fn2(5.0)； //error返回的引用是个局部变量
　　　　}
```

　　如果返回的引用是作为一个左值进行运算，也是程序员最犯忌的。所以，如果程序中有下面的代码，则一定要剔除：

```C
float& fn2(float r)
　　　　{
　　　　　float temp；
　　　　　temp=r*r*3.14；
　　　　　return temp；
　　　　}
　　　　void main()
　　　　{
　　　　　fn2(5.0)=12.4； //error返回的是局部作用域内的变量
　　　　}
```

### C++：函数返回引用

注：C++ 有三种传递方式：值传递，指针传递，引用传递

返回**“值”**和返回**“引用”**是不同的

​        函数返回**值**时会产生一个临时变量作为函数返回值的副本，而返回**引用**时不会产生值的副本，既然是引用，那引用谁呢？这个问题必须清楚，否则将无法理解返回引用到底是个什么概念。以下是几种引用情况：

#### 1. 千万不要返回局部对象的引用

```c
      const string &mainip(const string &s)
      {
             string ret=s;
             return ret;
      }
```

​	当函数执行完毕，程序将释放分配给局部对象的存储空间。此时，对局部对象的引用就会指向不确定的内存。

​	 同理，指针也是这样，返回指针的时候，不能指向局部临时变量，否则指针将变为野指针；

#### 2. 引用函数的<u>参数</u>，当然该参数也是一个引用

```c
const string &shorterString(const string &s1,const string &s2)  
 {  
        return s1.size()<s2.size()?s1:s2;  
 }  
```

以上函数的返回值是引用类型。无论返回s1或是s2,调用函数和返回结果时，都没有拷贝这些string对象。简单的说，**返回的引用是函数的参数s1或s2**，并且参数s1、s2也是引用，不是在函数体内产生的。函数体内局部对象是不能被引用的，**因为函数调用完局部对象会被释放**。

#### 3. 引用返回左值 

```c
char &get_val(string &str,string::size_type ix)  
{  
       return str[ix];  
}  
//使用语句调用:  
 string s("123456");  
 cout<<s<<endl;  
 get_val(s,0)='a';  
 cout<<s<<endl;  
```

可以定义一个和返回值一样的引用类型，来接受函数的返回值，操作此引用值，和直接操作函数的参数是一样的,引用都是使用引用传递；

```c
char &ch = get_val(s,0);  
ch = ‘A’;  
//此句进行的都是引用传递，故运行之后，s[0] 就变为了 A，s为“A23456”；
```

### 返回一个引用，意味着什么？

意味着该函数调用可以出现在赋值运算符的左边。

最初这种能力看起来有些古怪。例如，没有人会认为表达式 f() = 7 有意义。然而，如果 a 是一个 Array 类，大多数人会认为 a[i] = 7 有意义，即使 a[i] 实际上是一个函数调用的伪装（它调用了 如下的 Array 类的 Array::operator[](int)）。

### object.method1().method2() 是什么意思? 
连接这些方法的调用，因此被称为方法链

第一个被执行的是 object.method1()。它返回对象，可能是对象的引用（如，method1()可能以 `return *this` 结束），或可能是一些其他对象。我们姑且把返回的对象称为objectB。然后objectB成为method2()的this对象。

方法链最常用的地方是iostream库。例如，`cout << x << y` 可以执行因为 `cout << x`是一个返回cout.的函数

### 如何能够使一个引用重新指向另一个对象？

不行。

你无法让引用与其指示物分离。

和指针不同，一旦引用和对象绑定，它无法再被重新指向其他对象。引用本身不是一个对象（它没有标识; 当试图获得引用的地址时，你将的到它的指示物的地址；记住：引用就是它的指示物 ）。
从某种意义上来说，引用类似 `int* const p`  这样的const指针（并非如 `const int* p` 这样的**指向常量**的指针）。不管有多么类似，请不要混淆引用和指针；它们完全不同。

### 何时该使用引用, 何时该使用指针？

尽可能使用引用，不得已时使用指针。

当你不需要“重新指向(reseating)”时，引用一般优先于指针被选用。这通常意味着引用用于类的公有接口时更有用。引用出现的典型场合是对象的表面，而指针用于对象内部。

上述的例外情况是函数的参数或返回值需要一个“临界”的引用时。这时通常最好返回/获取一个指针，并使用 NULL 指针来完成这个特殊的使命。(引用应该总是对象的别名，而不是被解除引用的 NULL 指针)。

注意：由于在调用者的代码处，无法提供清晰的的引用语义，所以传统的 C 程序员有时并不喜欢引用。然而，当有了一些 C++ 经验后，你会很快认识到这是信息隐藏的一种形式，它是有益的而不是有害的。就如同，程序员应该针对要解决的问题写代码，而不是机器本身。

### item 07:为多态基类声明vitual析构函数

```c++
class TimeKeeper{
public:
    TimeKeeper()=default;
    virtual ~TimeKeeper()=default;
};
class AtomiClock:public TimeKeeper{
}
class WaterClock:public TimeKeeper{
}
class WristClock:public TimeKeeper{
}
class Factory{
public:
    virtual TimeKeeper* getTimeKeeper()=0;
}
class AtomiFactory:public Factory{
    TimeKeeper* getTimeKeeper(){
        return new AtomiClock;
    }
}
class WaterFactory:public Factory{
    TimeKeeper* getTimeKeeper(){
        return new WaterClock;
    }
}
class WristFactory:public Factory{
    TimeKeeper* getTimeKeeper(){
        return new WristClock;
    }
}
```

