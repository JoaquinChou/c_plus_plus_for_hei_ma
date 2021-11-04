#include <iostream>
using namespace std;

// 函数重载
// 可以让函数名相同，提高复用性

// 函数重载的条件
// 1、同一个作用域下
// 2、函数名称相同
// 3、函数参数类型不同，或者参数个数不同，或者参数顺序不同
void func(int a)
{
    cout << "func(int a)调用" << endl;
}
void func(double a)
{
    cout << "func(double a)调用" << endl;
}

int main()
{
    func(1);
    func(3.14);
    return 0;
}


// [注] 函数的返回值不能作为函数重载的条件，否则会使得函数的调用产生二义性