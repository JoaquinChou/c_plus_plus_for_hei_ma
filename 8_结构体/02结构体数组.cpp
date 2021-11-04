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
    // 2.创建结构体数组
    Student std_array[3] = {
        {"ZhangSan", 15, 90},
        {"LiSi", 70, 58},
        {"WangWu", 80, 60}
        };

    // 3.修改结构体数组的值
    std_array[2].name = "ZhaoLiu";
    std_array[2].age = 10;
    std_array[2].score = 100;

    // 4.遍历结构体数组
    for (int i = 0; i < sizeof(std_array) / sizeof(std_array[0]); i++)
    {
        cout << "Name:" << std_array[i].name << "   Age:" <<  std_array[i].age
         << "   Score:" <<  std_array[i].score << endl;

    }

    return 0;
}