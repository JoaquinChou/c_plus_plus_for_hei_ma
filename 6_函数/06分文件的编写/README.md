# 06 函数的分文件编写
## 1. 四个步骤
1. 创建.h后缀的头文件;
2. 创建.cpp后缀的源文件;
3. 头文件中编写函数的声明;
4. 源文件中编写函数的定义。

问题一：C++中的双引号""和<>有什么区别？<br>
答：使用<>这种方式，编译器查找的时候，会在<font color='red'>编译器的安装目录的标准库</font>中开始查找；
""这种方式，会在<font color='red'>当前的工程所在的文件夹</font>开始寻找，也就是你的源程序所在的文件夹。
<br><br>

问题二：C++中头文件中函数的声明如何找到源文件中函数的定义？<br>
答：通过`include<*.h>`的方式。
<br><br>
问题三：C++编译后产生的.o文件是什么？<br>
答：.o后缀是目标文件，是指C++编译后未进行链接的中间文件，在进行链接后可生成可执行文件。
<br><br>

问题四：C++编译含自定义文件的cmd代码？
``` shell
# 一次编译生成exe
g++ -o main main.cpp *.cpp
# 指定编译生成的.o文件名称
g++ -C swap swap.cpp
```

["undefined reference to" 问题汇总及解决方法](https://blog.csdn.net/weixin_34381666/article/details/89376726?utm_medium=distribute.pc_relevant_t0.none-task-blog-2%7Edefault%7ECTRLIST%7Edefault-1.no_search_link&depth_1-utm_source=distribute.pc_relevant_t0.none-task-blog-2%7Edefault%7ECTRLIST%7Edefault-1.no_search_link)<br><br>

# 2.值传递，引用传递和指针传递
对于值传递的形参函数而言，形参函数中的形参重新开辟了内存，不存在对原始内存地址中的值的改变。<br>

对于引用传递的形参函数而言，形参函数中的形参定义后值就初始化为实参的地址，对可以直接对实参的地址进行修改。（修改实参地址）<br>

对于指针传递的形参函数而言，形参函数中的形参定义后重新开辟了内存，指针变量内存存放的是实参的地址，`*指针变量`可以修改地址中对应的内存。（修改实参内容）
