# C++标准库 第2版

## Chapter3 New Language Features
### 3.1 C++11语言新特性
#### The requirement to put a space between two closing template expressions has gone:
    ```c++
    vector<list<int> >; // OK in each C++ version
    vector<list<int>>; // OK since C++11
    ```
#### `nullptr`和`std::nullptr_t`
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