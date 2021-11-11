#include <iostream>
using namespace std;
// 1、构造函数的分类
// 按参数分，分为   无参构造和有参构造
// 按类型分，分为   普通构造和拷贝构造
class Person{
public:
        // 无参构造
        Person()
        {
            cout << "无参构造函数调用！" << endl;
        }
        // 有参构造
        Person(int age)
        {
            m_age = age;
            cout << "有参构造函数调用！" << endl;
        }

        // 拷贝构造函数的定义是const加上对象的引用
        Person(const Person &p)
        {
            m_age = p.m_age;
            cout << "拷贝构造函数调用！" << endl;
        }

        // 析构函数
        ~Person()
        {
            cout << "析构函数调用！" << endl;
        }

        int m_age;

};
int main()
{
    // 2、构造函数的调用
    // 括号法:
    // 不要使用Person p();因为编译器会理解为函数的声明
    // Person p1;
    // Person p2(10);
    // Person p3(p1);

    // 显示法:通过匿名对象赋值的形式
    // Person p4;
    // Person p5 = Person(10);
    // Person p6 = Person(p4);
    // 匿名对象在该行结束后，由系统回收其资源
    // Person(10);
    // 不要用拷贝构造函数初始化匿名对象,因为Person(p) === Person p，可能发生重命名的冲突。
    // Person(p4);

    // 隐式转换法:可理解为转换为显示法
    Person p5 = 10;
    Person p6 = p5;

    return 0;
}