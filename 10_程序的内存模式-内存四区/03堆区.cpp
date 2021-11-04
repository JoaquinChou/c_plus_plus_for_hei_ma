#include <iostream>
using namespace std;

int * func()
{
    // 利用new关键字可以将开辟到堆区中的数据的地址返回
    int *p = new int(10);
    return p;
}

int main()
{
    // 在堆区中开辟数据
    int *p = func();
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;


}