#include <iostream>
using namespace std;

// 占位参数
// 返回值类型 函数名(数据类型){}
// void func(int a, int)
void func(int a, int = 10)
{
    cout << "This is a func!" << endl;
}

// 目前阶段的占位参数还用不到
// 占位参数可以有默认参数

int main()
{
    func(10, 1);
    return 0;
}

