#include <iostream>
using namespace std;

// 浅拷贝是由编译器提供的简单的等号赋值操作
// 深拷贝是指在堆区中重新申请内存
class Person1
{   
public:
    Person1()
    {
        cout << "调用默认构造函数" << endl;
    }
    Person1(int age, int height)
    {
        cout << "调用有参构造函数" << endl;
        m_Age = age;
        m_Height = new int(height);
    }

    // 自己实现拷贝构造函数，解决浅拷贝的问题
    Person1(const Person1 &p)
    {
        cout << "Person1调用拷贝构造函数" << endl;
        // 编译器提供的浅拷贝如下
        // m_Age = p.m_Age;
        // m_Height = p.m_Height;

        // 修改后的深拷贝如下
        m_Age = p.m_Age;
        m_Height = new int(*p.m_Height);
    }

    ~Person1()
    {
        // 析构代码，将堆区开辟的数据进行释放操作
        if (m_Height != nullptr)
        {
            delete m_Height;
            m_Height = nullptr;
        }
        cout << "调用析构函数" << endl;
    }

    int m_Age;
    int *m_Height;
   
};

void test01()
{
    Person1 p1(18, 160);
    cout << "p1的年龄为" << p1.m_Age << "身高为" << *p1.m_Height << endl; 
    Person1 p2(p1);
    // 这里使用浅拷贝虽然没有报错，但是析构函数只调用了一次，存在内存的重复释放问题
    cout << "p2的年龄为" << p2.m_Age << "身高为" << *p2.m_Height << endl; 

}

int main()
{
    test01();
    return 0;
}