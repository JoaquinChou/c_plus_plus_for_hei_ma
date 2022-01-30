#include <iostream>
using namespace std;
// 成员变量和成员函数分开存储
class Person {
    static int m_A;     // 静态成员变量 不属于类对象上，对象占用字节数不变
    int m_B;            // 非静态成员变量 属于类对象上，对象占用字节数+4
    void func() {       // 非静态成员函数 不属于类对象上，对象占用字节数不变
        
    }
    static void func2() {   // 静态成员函数 不属于类对象上，对象占用字节数不变

    }


};
int Person::m_A = 0;

void test01() {
    Person p;
    // 1、空对象占内存多大字节？
    // 空对象占用内存的空间是1
    // C++编译器为了区分空对象占内存的位置，会给空对象也分配一个字节的空间。
    // 因为每个空对象都应该有个独一无二的内存地址
    cout << "size of p is " << sizeof(p) << endl;
}
void test02() {
    // 2、类中定义一个非静态成员变量，对象占内存多大字节？
    // 4，因为非静态成员变量属于类的对象上。
    Person p;
    cout << "size of p is " << sizeof(p) << endl;
}
int main() {

    test01();
    return 0;
}