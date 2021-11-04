#include <iostream>
using namespace std;

// 设计一个学生类，属性有学号和姓名
// 可以给姓名和学号赋值，可以显示学生的姓名和学号
class Student
{
private:
    string m_Name;
    string m_Id;

public:
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
        cout << "学生姓名：" <<  m_Name << "  " << "学生学号：" << m_Id;
    }
};

int main()
{
    // 通过类来实例化对象（通过类来创建对象）
    Student s1;
    s1.setName("张三");
    s1.setId("2334455");
    s1.showStudentInfo();
    return 0;
}