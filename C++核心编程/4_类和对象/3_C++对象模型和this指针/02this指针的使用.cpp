#include <iostream>
using namespace std;

class Person {
public:
    int age;
    Person(int age) {
        // age = age;
        // this是指向调用对象的指针
        this->age = age;
    }

    // 这里如果不是返回引用的话，会导致链式调用的时候因调用拷贝构造函数不断产生新的对象，造成不是对一个对象进行操作
    Person& PersonAddAge(Person &p) {
        this->age += p.age;
        // this是指向p2的指针，而*this指向的是p2这个对象的本体
        return *this;
    }

};
// 1、解决名称冲突问题
// (1)定义成员变量写成m_变量;
// (2)使用this指针指向被调用的成员函数所属的对象。
void test01() {
    // 谁调用有参构造，this就指向谁
    // 此时this指向p
    Person p(18);
    // 此时this指向p1
    Person p1(18);
    cout << "p的年龄为" << p.age << endl;
}

// 2、返回对象本身用*this
void test02() {
    Person p1(10);
    Person p2(10);
    // 链式编程的思想
    cout << "p1的年龄为" << p1.age << endl;
    p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
    cout << "p2的年龄为" << p2.age << endl;
}
int main() {
    test01();
    test02();
    return 0;
}