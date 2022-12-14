## 第一章 绪论
* 语句必须以分号(;)结尾
## 第二章 c++程序的组成部分
* 预处理编译指令`#include <iostream>`
* `< >`通常用于包含标准头文件
* `main()` 函数，是入口函数，程序从这里开始，main函数返回一个int给操作系统
* c++程序是区分大小写的
* 名称空间
* 注释: `//`表示单行注释，`/* */`表示多行注释，注释要正确使用，要易于其它人理解，代码修改，注释要随之修改
## 第三章 使用常量和变量
### 3.1 变量
* 变量名只能包含字母，数字，和下划线，不能以数字开头，不能是关键字
* 使用时再声明
* 项目开发前对变量命名做好约定，维护已有项目时，应该采用项目已有的约定，方便他人理解新增的代码
* 变量作用域：局部变量作用域在语句块内，全局变量则全局有效
* 使用全局变量要注意
* 变量类型注意符号，区分正负
* 选择正确的数据类型，以免发生溢出
* c++11标准引入固定宽度整型,[u]int16_t,[u]int32_t,[u]int64_t,使用时需要包含头文件`<cstdint>`
#### 3.1.1 缩窄操作
* 使用取值范围较大的变量来初始化取值范围较小的变量时，将面临出现缩窄转换错误的风险
* c++11引入列表初始化来禁止缩窄
```++
int num = 5000000;
short num2{num};   // error
int num3{num};     // ok
float num4{num};   // error,num可能会缩小
float num5{5000000}; // ok
```
#### 3.1.2 auto
* 自动推断类型 `auto flag = true`
* 编译器将根据auto修饰的变量初始值确定合适的类型，故此必须要对此变量初始化
### 3.2 常量
#### 3.2.1 常量
* 字面常量
* const声明的常量
* 使用constexpr声明的常量表达式(`constexpr double GetPi() {return 22.0 / 7;}`)
* enmu声明的枚举常量
* `#define`定义的常量（c++中不推荐使用）

#### 小结
* 变量名应该是描述性的，方便理解变量的含义
* 务必使用列表初始化来进行变量初始化

### 第四章 管理数组和字符串
#### 4.1 数组
```c++
// 定义
TYPE NAME[LEN]
// 定义并初始化为0
int number[5] = {}
```
* C 风格字符串作为输入的函数非常危险，因为它们寻找终止空字符(\0)，如果程序员没 有在字符数组末尾添加空字符，这些函数将跨越字符数组的边界。
* 使用 C++标准字符串都是更高效、更安全的方式。任何优秀的程序员都 应避免使用 C 风格字符串。
* 要使用 C++字符串，需要包含头文件 string

### 第五章 使用表达式、语句和运算符
#### 5.1 语句
* 所有的语句都以分号结尾
* 编译器通常不考虑空白，这包括空格、制表符、换行符、回车等，但字符串字面量中的 空格将导致输出不同

#### 5.2 运算符
* 赋值运算符：=
* 所有的左值都可用作右值，但并非所有的右值都可用作左值。
```c++
int daysInYear = 365;
/*
左值：通常是内存单元，如 daysInYear
右值：365
 */
```
#### 5.3 运算符
* 使用后缀运算符时，先将右值 赋给左值，再将右值递增或递减
* 使用前缀运算符时，先将右值递增或递减，再将结果赋给左值
* sizeof(…)看起来像函数调用，但它并不是函数，而是运算符。有趣的是，程序员不能定义这个运算符，因此不能重载它。
* 不要编写必须依靠运算符优先级表才能理解的 复杂表达式；应确保代码对人来说也易于理解。
* 不要将++Variable 与 Variable++混为一谈，以为 它们等效。用于赋值时，它们的效果不同

### 第六章 控制程序流程

#### 6.1 if
```c++
   if()
   {
    dosome;
   }
   else
   {
    dosome;
   }
```
#### 6.2 swich case
* 每个 case 标签都必须是常量
```c++
switch(expression) 
{ 
  case LabelA:
    DoSomething; 
    break;
  case LabelB:
    DoSomething; 
    break;
  default:
    dosome;
    break;
 }
```
* 三目运算符
`int max = (num1 > num2)? num1 : num2;`

### 第七章 使用函数组织代码
* 在同一个函数中使用多条 return 语句要谨慎。相对于有多个返回点的函数
* 函数重载：函数名称和返回类型相同，但参数不同的函数
```c++
// 第一个参数告诉函数，输入的数据是一个数组，而第二个参数指出了数组的长度，以免您使用数 组时跨越边界
void DisplayIntegers(int[] numbers, int Length);

```
#### 7.1内联函数
* 内联函数：为了解决一些频繁调用的小函数大量消耗栈空间（栈内存）的问题
* 内联函数是在函数原型的前面加上inline (内联)限定符
* 将函数声明为内联的可提高执行速度
* 将函数声明为内联的会导致代码急剧膨胀，尽可能少用关键字 inline
* 仅当函数非常简单，需要降低其开销时，才应使用该关键字

#### 7.2 自动推断返回类型
* 关键字 auto，使用它可让编译器根据赋给变量的初始值来推断变量的类型，从 C++14 起，这种做法也适用于函数
* 对于依赖于返回类型自动推断的函数，必须先定义（即实现）再调用。这是因为调用函 数时，编译器必须知道其返回类型。如果这种函数包含多条 return 语句，必须确保根据 它们推断出的返回类型都相同。另外，在递归调用后面，至少得有一条 return 语句

#### lambda函数
* lambda 函数是 C++11 引入的
* 语法：`[optional parameters](parameter list){ statements; }`

### 第八章 阐述指针和引用
#### 8.1 指针
* 指针是存储内存地址的变量，指针变量用于存储内存地址
* 除非对指针进行初始化，否则它包含的值将是随机的
* 在特定的系统中，存储地址所需的字节数是固定的，结果取决于编译程序时使用的编译器和针对的操作系统。
* 在初始化指针或释放指针后将其设置为 NULL，并在使用运算符*对 指针解除引用前检查它是否有效（将其与 NULL 比较）。
#### 8.2 动态内存分配
* new 表示请求分配内存，并不能保证分配请求总能得到满足，因为这取决于系统的状态 以及内存资源的可用性
```c++
// pointer to a block of 10 integers
int* pointToNums = new int[10];
// release memory
delete pointToNums;
```
* 对于使用 new[…]分配的内存块，需要使用 delete[]来释放；对于使用 new 为单个元素分 配的内存，需要使用 delete 来释放
#### 8.3 const修饰指针
* 指针包含的地址是常量，不能修改，但可修改指针指向的数据
```c++
int daysInMonth = 30;
int* const pDaysInMonth = &daysInMonth;
*pDaysInMonth = 31; // OK! Data pointed to can be changed 
int daysInLunarMonth = 28; 
pDaysInMonth = &daysInLunarMonth; // Not OK! Cannot change address!
```
* 指针指向的数据为常量，不能修改，但可以修改指针包含的地址，即指针可以指向其他地方
```c++
int hoursInDay = 24;
const int* pointsToInt = &hoursInDay;
int monthsInYear = 12;
pointsToInt = &monthsInYear; // OK!
*pointsToInt = 13; // Not OK! Cannot change data being pointed to 
int* newPointer = pointsToInt; // Not OK! Cannot assign const to non-const
```
* 指针包含的地址以及它指向的值都是常量，不能修改
```c++
int hoursInDay = 24; 
const int* const pHoursInDay = &hoursInDay; 
*pHoursInDay = 25; // Not OK! Cannot change data being pointed to 
int daysInMonth = 30; 
pHoursInDay = &daysInMonth; // Not OK! Cannot change address
```
### 第九章 类和对象
#### 类
* 构造函数：构造函数是一种特殊的函数，它与类同名且不返回任何值，可以重载
* 作用域解析运算符`::`：Human::date指的是在Human类中声明的变量date，而::date 表示全局作用域中的变量 date
```c++
// 初始化列表的构造函数:初始化列表由包含在括号中的参数声明后面的冒号标识，冒号后面列出了各个成员变量及其初始 值。初始值可以是参数（如 humansName），也可以是固定的值
class Human
{
private:
  string name;
  int age;
public:
   
   // 
  Human(string humanName, int humanAge)
        :name(hunmanName), age(humanAge) // 初始化列表
  {
    name = humanName;
    age = humanAge;
  }
  ...
};

```
* 析构函数：当对象不再在作用域内或通过 delete 被删除进而被销毁时，都将调用析构函数