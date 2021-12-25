#include <iostream>
using namespace std;

//常函数

class Person {
public:
    // 1、常函数
        // this指针的本质  是指针常量  指针指向的内容可以修改  指针的指向不可以修改
        // 相当于const Person * const p;
        // 在成员函数后加const，修饰的是this指针，指针指向的内容也不可以修改了
    void showPerson() const {
        // m_A = 100;
        m_B = 200;
    }

    void func() {

    }
    int m_A = 0;
    mutable int m_B = 0;    // 特殊变量，即使在常函数中也可以修改值
};

void test01() {
    Person p;
    p.showPerson();

}

// 2、常对象
void test02() {
    const Person p;
    // p.m_A = 100;     
    p.m_B = 100;    // m_B是特殊的变量，可以修改属性值

    // 常对象只能调用常函数
    p.showPerson();
    // p.func();    不可以调用普通的成员函数，因为普通的成员函数可以修改属性

}

int main() {
    test02();
    return 0;
}