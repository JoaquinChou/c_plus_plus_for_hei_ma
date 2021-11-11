#include <iostream>
using namespace std;

// 对象的初始化和清理
class Person
{

public:
    // 1、构造函数
    // 无返回值
    // 函数名和类名相同
    // 构造函数可以有参数并且可以重载
    // 创建对象时，构造函数由编译器调用，且只会调用一次
    Person()
    {
        cout << "Person构造函数调用！" << endl;
    }

    // 1、析构函数  进行对象的清理
    // 无返回值
    // 函数名和类名相同，在名称前加~
    // 构造函数不可以有参数，不可以重载
    // 创建对象时，构造函数由编译器调用，且只会调用一次
    ~Person()
    {
        cout << "Person析构函数调用！" << endl;
    }

};

// 构造函数和析构函数必须是要实现的，如果我们不提供，由编译器自动提供
void test01()
{
    Person p;
}

int main()
{
    test01();   //  在栈上的进行内存的分配和销毁
    Person p;
    return 0;
}