# include <iostream>
using namespace std;
int main ()
{
    // 1.空指针指向内存中编号为0的空间，空指针可用于初始化变量.
    int *p = NULL;
    // 2.因为内存编号0~255为系统占用，所以空指针不能进行访问。
    *p = 1000;

}
