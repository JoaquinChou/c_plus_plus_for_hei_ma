#include <iostream>
using namespace std;

class Person
{
public:
    int m_Age;
    Person()
    {
        cout << "默认构造函数的调用！" << endl;
    }
    Person(int age)
    {
        m_Age = age;
        cout << "有参构造函数的调用！" << endl;
    }
    Person(const Person &p)
    {
        cout << "拷贝构造函数的调用！" << endl;
    }
    ~Person()
    {
        cout << "析构函数的调用！" << endl;
    }
};



// 1、使用一个已经创建完毕的对象初始化一个新对象
void test01()
{
    Person p1(20);
    Person p2(p1);

}
// 2、值传递的方法给函数参数传值
void doWork1(Person p)
{

}
void test02()
{
    Person p1;
    doWork1(p1);
}
// 3、值方式返回局部对象
Person doWork2()
{
    Person p;
    cout << (int *)&p << endl;
    return p;
}
void test03()
{
    Person p1 = doWork2();
    cout << (int *)&p1 << endl;
}
int main()
{
    // test01();
    // test02();
    // 在C++11标准后增加了复制省略，减少不必要的拷贝，所以没有调用拷贝构造函数
    test03();
    return 0;
}


