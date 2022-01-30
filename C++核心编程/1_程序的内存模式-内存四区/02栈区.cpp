#include <iostream>
using namespace std;

// 1、栈区存放局部变量和形参
// 2、栈区的数据由编译器进行分配和释放
// 3、不要返回局部变量的地址
int* fun()
{
    // 局部变量存放在栈区，栈区数据在函数执行结束后自动释放
    // 返回局部变量的地址
    int a = 10;
    return &a;
}
int main()
{
    // 第一次可以打印正确的数据，因为编译器做了保留
    // 但是第二次这个数据就不在保留了
    int *p = fun();
    cout << *p << endl;
    cout << *p << endl;

    return 0;
}