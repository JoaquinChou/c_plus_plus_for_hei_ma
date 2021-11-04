/**
 * 案例描述：
 * 学校正在做毕设项目，每名老师带5个学生，总共有3个老师，需求如下：
 * 设计学生和老师的结构体，其中在老师的结构体中，有老师的姓名和一个存放5名学生的数组作为成员；
 * 学生的成员有姓名和考试分数，创建数组存放三名老师，通过函数给每个老师及所带的学生赋值；
 * 最终打印老师的数据以及老师所带的学生的数据。
 */
#include <iostream>
#include <ctime>
using namespace std;

struct Student
{
    string name;
    int score;
};

struct Teacher
{
    string name;
    Student std_array[5];
};

void allocateSpace(Teacher *t, int len)
{
    string name = "ABCDE";
    for (int i = 0; i < len; i++)
    {
        t->name = "Teacher_";
        t->name += name[i];
        for (int j = 0; j < 5; j++)
        {
            t->std_array[j].name = "Student_";
            t->std_array[j].name += name[j];

            // 成绩随机
            int random = rand() % 41 + 60;
            t->std_array[j].score = random;
        }
        t++;
    }
}

void printInfo(Teacher *t, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "Teacher Name:" << t->name << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "\tStudent Name:" << t->std_array[j].name << 
            "  scores:" << t->std_array[j].score << endl;
        }
        t++;
    }
}
int main()
{
    // 利用随机种子使得程序每次结果都不一样
    srand((unsigned int)time(NULL));
    // 1.创建三名老师的结构体数组
    Teacher tea_array[3];
    int t_len = sizeof(tea_array) / sizeof(tea_array[0]);
    // 2.给老师和老师所带的学生信息赋值
    allocateSpace(tea_array, t_len);
    // 3.将学生和老师的信息打印出来
    printInfo(tea_array, t_len);

    return 0;
}
