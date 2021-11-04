# include "swap.h"
// 值传递
void swap_value(int a, int b)
{
    int temp = b;
    b = a;
    a = temp;
}

// 引用传递
void swap_actual_parameter_address(int &a, int &b)
{
    int temp = b;
    b = a;
    a = temp;
}

// // 指针传递
void swap_pointer(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}