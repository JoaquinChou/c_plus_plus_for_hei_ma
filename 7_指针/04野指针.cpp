# include <iostream>
using namespace std;
int main ()
{
    // 野指针：指针变量指向非法的空间（不是我们申请的）
    int *p = (int *)0x1100;
    // 访问野指针
    cout << *p << endl;

    return 0;

}
