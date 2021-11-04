#include<iostream>
using namespace std;
int main()
{
    // 1、引用必须初始化
    int a = 10;
    // 2、引用初始化后，不可以改变
    // int &b;  错误使用
    int &b = a;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    int c = 300;
    // 在此之后做的更改。不是更改引用，而是赋值操作
    b = c;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << "c=" << c << endl;
    return 0;
}