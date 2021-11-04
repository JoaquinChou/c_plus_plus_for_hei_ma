# include "swap.h"
# include <iostream>
using namespace std;

int main()
{
    int a = 1, b = 2;
    // 值传递
    swap_value(a, b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    // 引用传递
    a = 1, b = 2;
    swap_actual_parameter_address(a, b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

     // 指针传递
    a = 1, b = 2;
    swap_pointer(&a, &b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    return 0;
}