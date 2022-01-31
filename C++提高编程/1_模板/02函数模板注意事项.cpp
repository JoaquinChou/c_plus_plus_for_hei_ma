#include <iostream>
using namespace std;

// 函数模板注意事项
// typename可以用class替换
template<typename T>
void mySwap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

// 1、自动类型推导，必须推导出一致的数据类型才可以使用
void test01() {
    int a = 10;
    int b = 20;
    char c = 'c';
    mySwap(a, b);
    // 错误
    // mySwap(a, c);    推导不出一致的T类型
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
}

// 2、模板必须指定T的数据类型，才可以使用
template<typename T>
void func() {
    cout << "func调用" << endl;
}
 
void test02() {
    // 对于无参构造函数，T的数据类型随便给他指定
    func<int>();
}
int main() {
    test01();
    test02();
    return 0;
}