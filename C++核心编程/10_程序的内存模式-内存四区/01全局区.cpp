#include <iostream>
using namespace std;

// 全局变量
int global_a = 10;
int global_b = 20;

// const修改全局变量
const int const_global_a = 10;
const int const_global_b = 20;
int main()
{
    // 全局区存放全局变量，静态变量和常量（包括字符串常量和const修饰的其他变量）

    // 创建普通的局部变量
    int a = 10;
    int b = 20;
    // 在64位的系统下，指针占8个字节的内存。
    cout << "局部变量a的地址为：" << (long long int)&a <<endl;
    cout << "局部变量b的地址为：" << (long long int)&b <<endl;

//全局区
    // 全局变量
    cout << "全局变量global_a的地址为：" << (long long int)&global_a <<endl;
    cout << "全局变量global_b的地址为：" << (long long int)&global_b <<endl;

    // 静态变量：普通变量前加static关键字
    static int static_a = 10;
    static int static_b = 20;
    cout << "静态变量static_a的地址为：" << (long long int)&static_a <<endl;
    cout << "静态变量static_b的地址为：" << (long long int)&static_b <<endl;

    // 常量
        // 字符串常量
    cout << "字符串常量Hello World1的地址为：" << (long long int)&"Hello World1" <<endl;
    cout << "字符串常量Hello World2的地址为：" << (long long int)&"Hello World2" <<endl;
        // const修饰的变量
            // const修饰的全局变量（全局常量）
            cout << "const修饰全局变量const_global_a的地址为：" << (long long int)&const_global_a <<endl;
            cout << "const修饰全局变量const_global_b的地址为：" << (long long int)&const_global_b <<endl;
            // const修饰的局部变量（局部常量）
            const int const_a = 10;
            const int const_b = 20;
            cout << "const修饰局部变量const_global_a的地址为：" << (long long int)&const_a <<endl;
            cout << "const修饰局部变量const_global_b的地址为：" << (long long int)&const_b <<endl;
     

    return 0;
}