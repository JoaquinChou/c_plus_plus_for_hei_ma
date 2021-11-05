#include <iostream>
using namespace std;

// 设计一个学生类，属性有学号和姓名
// 可以给姓名和学号赋值，可以显示学生的姓名和学号

// 设计学生类
class Student
{
// 私有权限
private:
    // 属性
    string m_Name;
    string m_Id;

// 公有权限
public:
    // 行为
    void setName(string name)
    {
        this->m_Name = name;
    }
    void setId(string id)
    {
        this->m_Id = id;
    }

    string getName()
    {
        return this->m_Name;
    }
    string getId()
    {
        return this->m_Id;
    }

    void showStudentInfo()
    {
        cout << "学生姓名：" <<  getName() << "  " << "学生学号：" << getId() << endl;
    }
};

int main()
{
    // 通过类来实例化对象（通过类来创建对象）
    Student s1, s2;
    s1.setName("张三");
    s1.setId("2334455");
    s1.showStudentInfo();

    s2.setName("李四");
    s2.setId("24445");
    s2.showStudentInfo();
    return 0;
}