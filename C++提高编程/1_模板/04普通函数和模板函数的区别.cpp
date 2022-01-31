#include <iostream>
using namespace std;

// 普通函数和函数模板的区别

// 1、普通函数调用时可以发生隐式类型转换；
// 2、函数模板 用自动类型推导时，不可以发生隐式类型转换
// 3、函数模板 用显示指定时，可以发生隐式类型转换

// 普通函数
int myAdd01(int a, int b) {
    return a + b;
}

// 函数模板
template<typename T>
int myAdd02(T a, T b) {
    return a + b;
}

void test01() {
    int a = 10;
    int b = 20;
    char c = 'c';
    // ACSII码 c--99
    cout << myAdd01(a, c) << endl;

    // 会报错，自动类型推导时，函数模板不会自动把整型转为字符型
    // cout << myAdd02(a, c) << endl;

    // 显示指定类型
    cout << myAdd02<int>(a, c) << endl;
}

int main() {
    test01();
    return 0;
}