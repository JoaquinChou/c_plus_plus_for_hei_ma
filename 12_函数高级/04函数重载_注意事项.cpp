#include <iostream>
using namespace std;

// 函数重载的注意事项
// 1、引用作为函数重载的条件

void func(int &a)
{
    cout << "func(int &a)调用" << endl;
}
void func(const int &a)
{
    cout << "func(const int &a)调用" << endl;
}

// 2、函数重载碰到默认参数
void func2(int a)
{
    cout << "func2(int a)调用" << endl;
}
void func2(int a, int b = 10)
{
    cout << "func2(int a, int b = 10)调用" << endl;
}
int main()
{
    // 加const和不加const的区别
    // 对于变量，由于变量是可读可写的，会直接调用不加const的函数
    int a = 10;
    func(a);
    // 对于常量，由于常量是只读的，会调用加const的函数
    func(10);

    // 当函数重载碰到默认参数会出现二义性，所以当写函数重载时尽量避免使用默认参数
    // func2(10);

    return 0;
}