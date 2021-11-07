#include <iostream>
using namespace std;

class Person
{

public: // 公有权限
    string m_Name;

protected:  // 保护权限
    string m_Car;

private:    // 私有权限
    int m_Password;

public: 
    void func()
    {
        m_Name = "zz";
        m_Car = "拖拉机";
        m_Password = 123456;
    }

};




int main()
{
    Person p;
    // 保护变量属性，类外无法访问
    // p.m_Car = "奔驰";
    // 私有变量属性，类外无法访问
    // p.m_Password = 333;
    p.func();
    return 0;
}