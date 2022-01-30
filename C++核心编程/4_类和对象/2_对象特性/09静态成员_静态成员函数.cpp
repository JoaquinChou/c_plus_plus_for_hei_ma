#include <iostream>
using namespace std;

// 1、静态成员函数属性
// (1)所有的对象共享一个函数
// (2)静态成员函数只能访问静态成员变量

class Person {
public:
    // 静态成员函数
    static void func() {
        // 静态成员函数可以访问静态成员变量
        m_A = 100;
        // m_B= 200;       报错，因为非静态成员变量无法区分到底是哪个对象的
        cout << "This is a static function!" << endl;
    }
    
    // 静态成员变量
    static int m_A;
    // 非静态成员变量
    int m_B;
};
int Person::m_A = 0;

void test01() {
    // 2、两种访问方式
    // (1)对象访问
    Person p;
    cout << p.m_A << endl;
    p.func();
    // (2)类名直接访问
    Person::func();
    cout << Person::m_A << endl;
}


int main() {
    test01();
    return 0;
}