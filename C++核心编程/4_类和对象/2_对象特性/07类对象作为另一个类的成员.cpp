# include<iostream>
using namespace std;

// 手机类
class Phone
{
public:
    string m_PName;
    Phone(string name)
    {
        cout << "调用Phone类的构造函数！" << endl;
        m_PName = name;
    }
    ~Phone()
    {
        cout << "调用Phone类的析构函数！" << endl;
    }
};

// 人类
// 类对象作为另一个类的成员
class Person
{
public:

    // 姓名
    string m_Name;
    // 手机
    Phone m_Phone;
    // 通过初始化列表赋值   隐式转换法 Phone phone = pName
    Person(string name, string pName):m_Name(name), m_Phone(pName)
    {
        cout << "调用Person类的构造函数！" << endl;
    }
    ~Person()
    {
        cout << "调用Person类的析构函数！" << endl;
    }
};


void test01()
{
    Person p("张三", "苹果MAX");
    cout << p.m_Name << "拿着   " << p.m_Phone.m_PName << endl;
}




int main()
{
    test01();
    return 0;
}