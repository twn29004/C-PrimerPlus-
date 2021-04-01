# C++程序的模块叫什么
C++程序的模块被称为函数

# 下面的预处理器编译命令是做什么用的 
```cpp
#include<iostream>
```
该编译器指令将导致预处理器将iostream文件的内容加到程序中。这是一种典型的预处理器操作：在源文件被编译之前，替换或添加文本。
#include将导致源文件的内容和iostream的文件内容一起被发送到编译器中。iostream文件中的内容将取代`#include<iostream>`这行代码，原始文件没有被修改。

# 下面的语句是做什么用的。
```cpp
using namespace std;
```
在源程序中引入std这个命令空间。

# 打印“hello,world”,然后开始新的一行
```cpp
cout<<"hello,world"<<endl;
printf("hello,world\n");
```
```cpp
// 5 
int cheeses;
// 6
cheeses = 32;
// 7
cin>>cheeses;
// 8
cou<<"We have "<<cheeses<<" varieties of cheeses."<<endl;
```

# 下列函数原型关于函数的信息
```cpp
int froop(double t); // 参数需要是double类型的，会返回一个整形
void rattle(int t); // 输入参数是一个整形，无返回值
int prune(void); // 没有输入参数，返回一个整形
```


