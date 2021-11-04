#include <iostream>
using namespace std;

// 函数的默认参数
// 语法：返回类型 函数名（形参=默认值）{}
// 函数调用时有传入值，则使用传入值，否则使用默认值进行计算。

// 注意事项
// 1、如果某个位置已经有默认值，那么从这个位置往后，从左到右必须有默认值
int func1(int a, int b = 10, int c = 20)
{
    return a + b + c;
}
// 2、函数的声明有默认参数，则函数的实现不能有默认参数，这会使得编译器不知道按照哪个默认值来，从而产生二义性
// 声明和实现只能有一个默认参数
int func2(int a = 10, int b = 10, int c = 100);

// int func2(int a = 10, int b = 10, int c = 100)    错误

int func2(int a, int b, int c)  //  正确
{
    return a + b + c;

}
int main()
{
    cout << func1(10, 10, 10) << endl;
    cout << func2(108, 106) << endl;

    return 0;
}