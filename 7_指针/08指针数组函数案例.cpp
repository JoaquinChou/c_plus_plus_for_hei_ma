#include <iostream>
using namespace std;

// 冒泡排序
void bubbleSort(int *arr, int len)
{
    int temp;
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// 输出结果
void printArr(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << *arr << endl;
        arr++;
    }
}
int main()
{
    // 需求：封装一个函数，实现冒泡排序，实现整形数组的升序排序
    // 1.定义一个数组
    int arr[10] = {5, 4, 2, 1, 7, 9, 10, 3, 6, 8};

    // 2.获取数组长度
    int len = sizeof(arr) / sizeof(arr[0]);

    // 3.进行冒泡排序
    bubbleSort(arr, len);

    // 4.对冒泡排序的结果进行输出
    printArr(arr, len);
    return 0;

}
