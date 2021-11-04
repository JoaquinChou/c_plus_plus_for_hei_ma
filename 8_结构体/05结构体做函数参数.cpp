#include <iostream>
using namespace std;
// 1.定义结构体
struct Student
{
    string name;
    int age;
    int score;
};

void printStudent1(Student s)
{
    s.age = 200;
    cout << "In subfunction_1   "
         << "Name:" << s.name << "   Age:" << s.age << "   Score:" << s.score << endl;
}

void printStudent2(Student *p)
{
    p->age = 200;
    cout << "In subfunction_1   "
         << "Name:" << p->name << "   Age:" << p->age << "   Score:" << p->score << endl;
}

int main()
{
    // 2.创建结构体变量
    Student s = {"ZhangSan", 15, 90};

    // 3.值传递
    printStudent1(s);
    
    cout << "In main_function   "
         << "Name:" << s.name << "   Age:" << s.age << "   Score:" << s.score << endl;

    // 4.地址传递
    printStudent2(&s);


    return 0;
}