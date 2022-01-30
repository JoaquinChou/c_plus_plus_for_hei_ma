#include<iostream>
using namespace std;
// 1、函数返回值时不要返回局部变量的引用
// int& test01()
// {
//     int a = 10;
//     return a;
// }

// 2、函数的调用是引用，该引用可作为左值
int& test02()
{
    static int b = 10;
    return b;
}

int main()
{
    // int &ref = test01();
    // 因为局部变量存储在栈中，函数调用结束后栈销毁，返回则报错。
    // cout << "&ref=" << ref << endl;
    // cout << "&ref=" << ref << endl;

     int &ref2 = test02();
    cout << "&ref2=" << ref2 << endl;
    test02() = 1000;
    cout << "&ref2=" << ref2 << endl;

    return 0;
}