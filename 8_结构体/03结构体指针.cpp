#include <iostream>
using namespace std;
// 1.定义结构体
struct Student
{
    string name;
    int age;
    int score;
};
int main()
{
    // 2.创建结构体变量
    Student s = {"ZhangSan", 15, 90};

    // 3.通过结构体指针指向结构体变量
    Student *p = &s;
    // 4.通过结构体指针访问结构体成员
    cout << "Name:" << p->name << "   Age:" << p->age << "   Score:" << p->score << endl;

    return 0;
}