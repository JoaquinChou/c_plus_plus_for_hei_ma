#include <iostream>
using namespace std;
// 1.定义结构体
struct Student
{
    string name;
    int age;
    int score;
};

void printStudent(const Student *p)
{
    // p->age = 200;
    cout << "In subfunction   "
         << "Name:" << p->name << "   Age:" << p->age << "   Score:" << p->score << endl;
}

int main()
{
    // 2.创建结构体变量
    Student s = {"ZhangSan", 15, 90};

    // 3.地址传递
    printStudent(&s);


    return 0;
}