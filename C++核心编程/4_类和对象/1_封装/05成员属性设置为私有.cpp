#include <iostream>
using namespace std;


// 成员属性设置为私有
// 1、 可以自己控制读写权限；
// 2、 对于写权限，我们可以检测数据的有效性。

// 设置人类
class Person
{
private:
    // 姓名 可读可写
    string m_Name;
    // 年龄 只读
    int m_Age;
    // 情人 只写
    string m_Lover;

public:
    // 可读可写
    // 设置姓名
    void setName(string name)
    {
        m_Name = name;
    }

    // 获取姓名 
    string getName()
    {
        return m_Name;
    }

    // 可读可写
    // 设置年龄
    void setAge(int age)
    {  
        if (age < 0 || age > 150)
        {
            cout << "输入年龄有误！" << endl;
            return;
        }
        m_Age = age;


    }
    // 获取年龄    
    int getAge()
    {
        return m_Age;
    }
    // 只写
    // 设置情人
    void setLover(string lover)
    {
        m_Lover = lover;
    }
};


int main()
{
    // 实例化对象
    Person p;
    p.setName("张三");
    cout << "姓名：" << p.getName() << endl;
    p.setAge(18);
    cout << "年龄：" << p.getAge() << endl;
    p.setLover("xl");
    return 0;
}