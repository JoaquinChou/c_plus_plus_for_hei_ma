#include<iostream>
using namespace std;

// 交换函数
// 1、值传递，形参不会修饰实参
void swap01(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
// 2、地址传递，形参会修饰实参
void swap02(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// 3、引用传递，形参会修饰实参
void swap03(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10, b = 200;
    cout << "a=" << a <<endl;
    cout << "b=" << b <<endl;
    swap01(a, b);
    cout << "a=" << a <<endl;
    cout << "b=" << b <<endl;
    // swap02(&a, &b);
    cout << "a=" << a <<endl;
    cout << "b=" << b <<endl;
    swap03(a, b);
    cout << "a=" << a <<endl;
    cout << "b=" << b <<endl;
   
    
   
    return 0;
}