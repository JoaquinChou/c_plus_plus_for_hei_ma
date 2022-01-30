#include <iostream>
using namespace std;

// 函数模板

// 交换两个整型的函数
void swapInt(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// 交换两个浮点型的函数
void swapDouble(double &a, double &b) {
    double temp = a;
    a = b;
    b = temp;
}

// 函数模板
// 声明一个模板,告诉编译器T是一个通用的数据类型
template<typename T>
void mySwap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

void test01() {
    int a = 10;
    int b = 20;

    double c = 1.1;
    double d = 2.2;

    // swapInt(a, b);
    // 有两种方式使用函数模板
    // 1、自动类型推导：编译器自动推导类型
    mySwap(a, b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    // swapDouble(c, d);
    // 2、显示指定类型
    mySwap<double>(c, d);
    cout << "c=" << c << endl;
    cout << "d=" << d << endl;

}

int main() {
    test01();
    return 0;
}