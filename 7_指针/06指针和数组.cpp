#include <iostream>
using namespace std;

// 值传递不会让形参修饰实参，地址传递可以让形参修饰实参
void swap01(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
void swap02(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 10, b = 100;
    swap01(a, b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    swap02(&a, &b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    return 0;
}
