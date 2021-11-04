#include <iostream>
using namespace std;
// 1.结构体变量的定义：由几种基本数据类型组合成的用户自定义的类型。
struct Student
{
    string name;
    int age;
    int score;
} s3;

int main()
{
    // 2.结构体变量的三种创建方法
    // 2.1 结构体名 变量1
    Student s1;
    s1.name = "ZhangSan";
    s1.age = 10;
    s1.score = 100;
    cout << "Name:" << s1.name << "   Age:" << s1.age << "   Score:" << s1.score << endl;

    // 2.2 结构体名 变量2 = {...}
    Student s2 = {"LiSi", 13, 98};
    cout << "Name:" << s2.name << "   Age:" << s2.age << "   Score:" << s2.score << endl;

    // 2.3 在定义结构体的时候顺便创建结构体变量（尽量少用，可读性太差）
    s3.name = "WangWu";
    s3.age = 15;
    s3.score = 90;
    cout << "Name:" << s3.name << "   Age:" << s3.age << "   Score:" << s3.score << endl;
    return 0;
}