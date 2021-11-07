#include <iostream>
using namespace std;

class C1
{
    // 默认权限是公有的
    int m_A;

};

struct C2
{
    // 默认权限是私有的
    int m_A;
};


int main()
{
    // struct和class的区别；
    // class的默认权限是私有的
    C1 c1;
    // 报错
    // c1.m_A = 10;


    // struct的默认权限是公有的
    C2 c2;
    c2.m_A = 100;
    return 0;
}