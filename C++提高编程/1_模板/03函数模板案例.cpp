#include<iostream>
using namespace std;

// 实现通用 对数组规则的排序
// 规则 从大到小
// 算法 选择
// 测试 int数组 char数组   

// 交换函数模板
template<typename T>
void mySwap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

// 函数模板定义选择排序函数
template<typename T>
void simpleSelectionSort(T *arr, int len) {
    for (int i = 0; i < len - 1; i++) {
        int max = i;
        for (int j = i + 1; j < len; j++) {
            if (arr[j] > arr[max]) {
                max = j;
            }
        }
        if (max != i) {
            mySwap(arr[i], arr[max]);
        }
    }
}

template<typename T>
void printArr(T *arr, int len) {
    for (int i = 0; i < len; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;
}
int main() {

    int intArr[] = {1 ,2, 3, 4, 5, 5, 8, 10, 9};
    char charArr[] = {'i', 'l', 'o', 'v', 'e', 'y', 'o', 'u'};

    int intLen = sizeof(intArr) / sizeof(intArr[0]);
    printArr(intArr, intLen);
    int charLen = sizeof(charArr) / sizeof(charArr[0]);
    printArr(charArr, charLen);

    // 排序后的结果
    simpleSelectionSort(intArr, intLen);
    printArr(intArr, intLen);
    
    simpleSelectionSort(charArr, charLen);
    printArr(charArr, charLen);
    return 0;
}