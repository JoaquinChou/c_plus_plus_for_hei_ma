#include <iostream>
using namespace std;

// 1、new的基本语法
void test01()
{
    int *p = new int(10);
    cout << *p << endl;
    cout << *p << endl;
    // 释放该内存
    delete p;
    cout << *p << endl;


}
// 2、在堆区中利用new开辟数组
void test02()
{
    // 堆区中创建长度为10的整型数组
    int *arr = new int[10];
    // 给10个元素赋值100-109
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 100 + i;
    }
    // 查看赋值的结果
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] <<endl;
    }

    // 释放堆区数组,释放时要加[]
    delete[] arr;
}
int main()
{
    // test01();
    test02();
    return 0;
}