# include <iostream>
using namespace std;
int main ()
{
    // 输出指针所占的内存空间大小
    int a = 10;
    int *p = &a;

    // 在32位操作系统下，不管是什么类型的数据，指针都是占4个字节的大小。
    // 在64位操作系统下，不管是什么类型的数据，指针都是占8个字节的大小。
    cout << "sizeof (int *) = " << sizeof(int *) << endl;
    cout << "sizeof (float *) = " << sizeof(float *) << endl;
    cout << "sizeof (double *) = " << sizeof(double *) << endl;
    cout << "sizeof (char *) = " << sizeof(char *) << endl;

}
