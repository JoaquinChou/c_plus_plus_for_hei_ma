#include <iostream>
using namespace std;

// 1、常量引用修饰形参可防止误操作
void showValue(const int &v)
{
    // v = 1000;
    cout << v << endl;
}
int main()
{
    // 2、常量引用可使用于引用常量值
    // 引用本身需要一个合法的内存空间
    const int &ref = 10;    // 相当于int temp = 10; const int &ref = temp;
    cout << ref << endl;

    int a = 10;
    showValue(a);

    return 0;
}