/**
 * 案例描述：
 * 设计一个英雄的结构体，包括成员姓名，年龄，性别；创建结构体数组，数组中存放5名英雄，
 * 通过冒泡排序，将数组中的5名英雄进行升序排序，最终打印排序后的结果。
 */
#include <iostream>
using namespace std;

// 1.设计英雄结构体
struct Hero
{
    string name;
    int age;
    string gender;
};

void heroBubbleSort(Hero hero_arr[], int len)
{
    Hero temp;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (hero_arr[j].age > hero_arr[j + 1].age)
            {
                temp = hero_arr[j + 1];
                hero_arr[j + 1] = hero_arr[j];
                hero_arr[j] = temp;
            }
        }
    }
}
void printInfo(Hero *h, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "Hero Name:" << h->name << "\tHero Age:" << h->age << "\tHero Gender:" << h->gender << endl;
        h++;
    }
}

int main()
{
    // 2.创建5名英雄的结构体数组，同时赋值
    Hero heros_array[5] = {
        {"LiuBei", 23, "male"},
        {"GuanYu", 22, "male"},
        {"ZhangFei", 20, "male"},
        {"ZhaoYun", 20, "male"},
        {"DiaoChan", 19, "female"}};
    
    // 整个数组在栈中的大小除以一个元素占栈空间的大小
    int len = sizeof(heros_array) / sizeof(heros_array[0]);

    // 3.将5名英雄的年龄进行升序的冒泡排序
    heroBubbleSort(heros_array, len);

    // 4.将排序后5名英雄的信息打印出来
    printInfo(heros_array, len);

    return 0;
}
