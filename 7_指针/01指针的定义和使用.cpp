# include <iostream>
using namespace std;
int main ()
{
    // 1.指针的定义
    int a = 10;
    int *p;
    p = &a;
    cout << "the address of a is " << &a << endl;
    cout << "the value of p is " << p << endl;

    // 2.指针的使用：可通过解引用符号 `*` 使用对地址内数据的访问
    *p = 1000;
    cout << "the value of *p is " << *p << endl;
    cout << "the value of a is " << a << endl;

    return 0;
}
