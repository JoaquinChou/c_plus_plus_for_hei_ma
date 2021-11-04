# include<iostream>
using namespace std;
int main ()
{
    int a = 10, b = 10;

    // 1.const修饰指针——常量指针
    // 指针的指向可以修改，指向的内容不可以修改。
    const int *p1 = &a;
    p1 = &b;    //正确
    // *p1 = 100;  错误

    // 2.const修饰常量——指针常量
    // 指针的指向不可以修改，指向的内容可以修改。
    int * const p2 = &a;
    // p2 = &b;    错误
    *p2 = 100;  // 正确

     // 3.const既修饰指针，也修饰常量
    // 指针的指向不可以修改，指向的内容不可以修改。
    const int * const p3 = &a;
    //  p3 = &b;    错误
    // *p3 = 100;   错误

    return 0;

}
