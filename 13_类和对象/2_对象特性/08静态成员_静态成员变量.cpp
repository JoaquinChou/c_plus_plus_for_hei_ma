# include<iostream>
using namespace std;

class Person {
    // 1、静态成员的特点
    public:
        // (1) 所有的对象共享一份数据
        // (2) 静态成员再编译时就分配内存
        // (3) 类内声明，类外初始化
        static int m_A;
    private:
        static int m_B;

};

// 类外初始化
int Person::m_A = 100;
int Person::m_B = 300;
void test01() {
    Person p;
    // 100
    cout << p.m_A << endl;
    Person p2;
    p2.m_A = 200;
    cout << p.m_A << endl;
}

// 2、静态成员的访问方式
// 静态成员变量所有的对象共享一份数据
// 访问方式为：
void test02() {
// (1) 通过对象访问；
    Person p;
    cout << p.m_A << endl;
// (2) 通过类名访问。
    cout << Person::m_A << endl;

}

// 3、静态成员也是有访问权限的  
void test03() {
    // cout << Person::m_B << endl;
}
int main() {
    // 测试修改静态成员的值的影响
    // test01();
    test02();
    return 0;
}