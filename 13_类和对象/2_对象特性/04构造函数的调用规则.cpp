#include <iostream>
using namespace std;

// 1、创建一个类时，编译器会给每个类添加3个函数。
// - 默认构造（空实现）
// - 析构函数（空实现）
// - 拷贝构造（值拷贝）
class Person
{


// 2、用户自定义构造函数优先级
// - 如果用户定义有参构造函数，编译器将不提供默认构造函数，但是会提供默认拷贝构造函数；
// - 如果用户定义拷贝构造函数，编译器将不提供其他默认的构造函数。
public:
    // Person()
    // {
    //     cout << "调用默认构造函数" << endl;
    // }
    Person(int age)
    {
        cout << "调用有参构造函数" << endl;
        m_Age = age;
    }
    Person(const Person &p)
    {
        cout << "调用拷贝构造函数" << endl;
        m_Age = p.m_Age;
    }

    ~Person()
    {
        cout << "调用析构函数" << endl;
    }

    int m_Age;
   
};

// void test01()
// {
//     Person p;
//     p.m_Age = 18;
//     Person p1(p);
// }
void test02()
{
    Person p(18);
    Person p1(p);
}

int main()
{
    // test01();
    test02();
    return 0;
}