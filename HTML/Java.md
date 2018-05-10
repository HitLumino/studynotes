# Java核心技术

* HTML是一种描述网页结构的方式
* XML是一种描述数据的方式

## 第三章 Java基本的程序设计结构
### 一个简单的程序
* java应用程序的全部内容全部放在类里。
* java源码的文件名必须与公有类的名字相同。（大小写敏感）
* 类名称以大小写字母开头，骆驼命名法。
* Java中所有的函数都属于某个类的方法。因此，Java的main方法必须有一个外壳类。Java的main方法必须是静态的。
* 正常退出程序退出代码为0.
* `/** */`可以自动生成文档

### 数据类型、变量、常量、运算符、字符串
* 整形（int、short、long、byte）占字节数与机型无关！（不同于c）

    |int|short|long |byte|
    ----|-----|----|-------
    |4  |2    |8   |1    |
* 浮点型 float（4bits） double（8bits）
* char 布尔类型（整形不能和bool互换（0和1））
* 变量初始化，必须显示初始化，千万不要使用未被初始化的变量
* java不区分变量声明与定义。（`extern int i;//c`）
* 常量利用关键字`final`,常量名习惯上大写
* 类常量定义在main方法的外部。因此同一个类的其他方法也可以使用这个常量；如果这个常量被声明为`public`，那么其他类的方法也可以使用这个常量。
* `String`
    * `substring(m,n);`
    * Java中的`String`类型不可修改！（C++可以对单独字符进行修改）
    * 检测字符串知否相等 `s.equals(t);`若不区分大小写，可以用`equalsIgnoreCase()`;一定不能使用`==`判别两个字符串相等。这个只能确定两个字符串是否放在同一个位置。如果虚拟机将所有的相同字符串共享，就可以用`==`来辨别。但实际上只有字符串常量的共享的。
    * 代码点与代码单元
        ```java
        String str="hello";
        int n=str.length();//is 5
        int cpCount=str.codePointCount(0,str.length());//获得实际长度，及代码点数量
        char first=str.charAt(0);
        char first=str.charAt(4);
        ```
    * 字符串API
    * 构建字符串`StringBuilder()`
        * 里面有`insert()`方法；`setCharAt()`;
        ```java
        StringBuilder builder=new StringBuilder();
        builder.append(ch);
        builder.append(str);
        String res=builder.toString();
        ```
* 输入输出流
    * 输入：先构建一个`Scanner`对象，并与标准输入流`System.in`关联。
        * 需要`import`加入相应的包，因为不在`java.lang`里。
        ```java
        import java.util.*

        Scanner in=new Scanner(System.in);
        String name=in.nextLine();//读取一行
        String firstname=in.next();//若含有空格，读取第一个单词
        int age=in.nextInt();//读取一个整数
        double sale=in.nextDouble();
        ```
        * 其他API：`boolean hasNext()`--是否还有其他单词
        * `Console`类
    * 输出
    * 文件输入输出
        * 如果一个不存在的文件来构建
    ```java
     Scanner in=new Scanner(new File("myfile.txt"));
     PrintWriter out=new PrintWriter("myfile.txt");
     ```
* 大数值 相加和相乘用`add`和`multiply`
    ```java
    BigInteger a=BigInteger.valueOf(100);
    BigInteger c=a.add(b);
    BigInteger d=c.multiply(b.add(BigInteger.valueOf(2)));//d=c*(b+2)
    ```
* 数组
    ```java
    int[] a;//仅仅声明
    int[] a=new int[100];//声明并初始化
    int[] small={2,3,4,5,6};//初始化，不需要new
    small=new int[]{6,7,8,9,0};
     ```
     * 数组拷贝：java允许讲一个数组变量拷贝给另一个数组变量。这时两个变量将同时引用同一个数组。
     * 如果希望将一个数组的值拷贝到一个新的数组里去，就要用到`Array`类的`copyOf`方法。例如：`int[] res=Array.copyOf(small,small.length*2);`
     * 命令行参数
     * 排序 Array.sort()
## 第四章 对象与类
### 用户自定义类
* 类的方法在前，域在后面
* 当多个源文件使用的时候，可以将一个类存放在一个单独的源文件，也可以放在一起；只能有一个公共类！
* 编译器会自动根据所调用的类名查找`类名.class`文件，如果没有（没有编译），就自动找到`类名.java`，对他进行编译。
### 构造器（C++构造函数）
* **构造器和其他方法不同于，总是伴随着`new`操作符的执行被调用，而不能对一个已经存在的对象调用构造器来重新“赋值”。** （和C++明显不同，C++程序员很容易忘记加`new`！）
* Java所有方法都必须在类的内部定义，但并不表示他们是内联方法。
### 文档注释
JDK包含一个很有用的工具，叫`javadoc`,他可以由源文件生成一个`HTML`文档。在源码中添加专用的定界符`/**`开始的注释。
* `javadoc`会从下面几个特性中抽取信息，我们应该为下面几部分编写注释
    * 包
    * 公有类与接口
    * 公有的和受保护的方法
    * 公有的和手保护的域
* 每个注释后跟`@` `自由格式文本`,如`@author @param`等。自由格式文本第一句应该是一个概要性句子。
* 在自由格式文本中，可以使用HTML修饰符，例如强调`<em>..</em>`等等。
* 类的注释必须放在``import`语句之后，类定义之前。
* 方法注释：可以添加` @param` `@return` `throws`等
* 只需要对共有域（通常值得是静态常量）建立文档
* 如何抽取注释：
    * 切换到包含想要生成文档的源文件目录下。如果有嵌套的包要生成文档，例如`com.host-mann.corejava`,则切换到`com`的目录下。
    * 如果是一个包，运行：`javadoc -d doc_Dir nameofPackege`;对于多个包生成文档，`javadoc -d doc_Dir nameofPackege1 nameofPackege2...`;如果文件在**默认包**里，`javadoc -d doc_Dir *.java`;如果没有`-d doc_Dir`就会提取到当前目录下，不提倡。
### 类设计技巧
* 一定要将数据设计为私有，保持实例域的私有性。
* 一定要对数据初始化。
* 不要在类中使用过多的基本数据类型
* 不是**所有的域**都需要独立的域访问器和修改器。
    * 比如，一旦构造了雇员对象，就应该禁止对雇佣日期的修改。
* 使用标准格式对类进行定义，类的使用者对公有接口要比私有实现细节更感兴趣，并且对方法要比数据更刚兴趣。

## 第五章 继承

### 类、超类和子类

* 关键字`extends`代替C++里的 `:`,表明正在构造一个新类派生与一个已存在的类。
* 已存在的类叫做超类、基类或父类；新类叫做子类（subclass）、派生类（derived）
* 派生类不能直接访问超类的私有域，如果一定要访问，必须借助公有的接口；我们希望调用超类的方法，可以使用关键字`supper`。
    ```java
    public double getSalary()
    {
        double baseSalary=super.getSalary();
        return baseSalary+bonus;
    }
    ```
* 由于派生类的构造器不能访问超类的私有域，所以必须利用超类的构造器对这部分私有域进行初始化。我们可以通过`super`实现对超类构造器的调用。使用super调用构造器的语句必须是派生类构造器的第一句。（类似于C++利用初始化列表初始化基类对象）
    ```java
    //java
    public Manager(String n,double,s,int year,int month,int day)
    {
        super(n,s,year,month,day);
        bonus=0;
    }
    ```
    ```c++
    //c++
    Manager::Manager(String n,double,s,int year,int month,int day):Employee(n,s,year,month,day)
    {
        bonus=0;
    }
    ```
* 在java中，不需要将方法声明为虚拟方法。动态绑定是默认的处理方式，如果不希望让一个方法具有虚拟特征，可以将它标记为关键字`final`.
* **继承层次**：由一个公共超类派生出来的所有类的集合；在继承层次中，由某个特定的类到其祖先的路径称为该类的**继承链**。
* 注意：java不支持多继承。有关其实现，在接口里讨论。
* 如果子类定义了一个与超类签名相同的方法，就会覆盖掉超类的这个方法；不过返回类型不是签名的一部分，因此在覆盖方法的时候，一定要保证返回内容的兼容性。
    ```java
    //Manager is-a Employee
    public Employee getBuddy(){...}
    public Manager getBuddy(){...}
* 如果是private方法、static方法、final方法或者构造器，那么编译器就会准备知道调用哪一个函数，这种调用方法叫**静态绑定**，其他默认**动态绑定**。
* **动态绑定**每次调用方法都得进行搜索，时间开销相当大。因此虚拟机预先为每个类创建了一个**方法表**，其中列出了所有方法的签名和实际调用的方法，所以调用的时候只需要查找表就可以了。
* 签名是方法的名字以及参数列表。
* 警告：覆盖一个方法的时候，子类方法不能低于超类的可见性。特别是，如果超类方法是public,子类方法一定是public.
* 阻止继承：final类和方法
* 不允许拓展的类被称为final类。`final class Executive extends Manager{...}`
    * 类的方法也可以被声明为final，子类就不能覆盖整个方法。
    ```java
    class Employee{
        ...
        public final String getName(){
            return name;
        }
    }
    ```
    * 域也可以被声明为final,对于final域来说，构造对象之后就不允许改变他们的值。不过，如果将一个类声明为final，只有其中的方法自动地成为final,而不包括域。
    * 将方法或类声明为final的只要鉴于：1.确保他们不会在子类中改变语义。例如`String`类。
* 只能在继承层次内进行类型转换；将超类转换为子类之前，应该使用`instanceof`进行检查。
* 抽象类`abstract`
    * 抽象方法
    ```java
    public abstract String getDescription();//声明
    ```
    * 包含一个或者多个抽象方法的类本身必须声明为抽象的。
    ```java
    abstract class Person{
        public abstract String getDescription();
    }
    ```
    * 抽象方法的具体实现在子类里；
        * 在子类中定义部分抽象方法，那么该子类也必须标记为抽象类
        * 在子类中定义全部抽象方法，那么该子类不必标记为抽象类
        ```java
        //这里的p是一个抽象类person的变量，引用了一个子类（非抽象类）的实例。
        Person p=new Student("Jack","Economics");
        ```
* 受保护访问：

假设子类想访问超类的私有域，或者子类的方法访问超类的某个域；超类的某些方法允许被子类访问，需要将这些方法或域声明为`protected`。比如将超类Employee中的hireDay声明为`protected`，Manager中的方法就可以直接地访问他。

* 控制可见性的4个访问修饰符：
    * 仅对本类可见--private
    * 对所有的类可见--public
    * 对所有的子类和本包可见--protected
    * 对本包可见--默认（不太欢迎）

### `Object:` 所有类的超类

在java中，所有的类都有他继承而来。可以使用`Object`类型的变量引用任何类型的对象。
```java
Object obj=new Employee("jack","3500");
```
* `Object`类型的变量只能用于作为各种值的通用持有者。要想对其中的内容进行具体的操作，还需要清楚对象的原始类型，**并进行类型转换**。
```java
Employee e=(Employee)obj;
```
* `Equals`方法：`Object`类的`Equals`方法用于检测对象是否相等。
    * 如果两个对象具有相同的引用，他们一定相等。
    * 只有两个对象同属一个类，才可能相等。`getClass`:返回一个对象所属的类
    * 在子类定义`Equals`方法时，首先调用超类的`Equals`方法，若失败，不可能相等；反之，则继续比较子类的实例域。
* `HashCode`方法:

    散列码：是由对象导出一个整数值。散列码是没有规律的。
    * String类使用下列算法计算散列码
    ```java
    int hash=0;
    for(int i=0;i<length();i++)
    {
        hash=31*hash+charAt(i);
    }
    ```
* ToString 方法
    建议为自定义的每一个类增加`toString`方法。

## 接口

## 异常

## 集合

