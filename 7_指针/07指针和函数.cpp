# include<iostream>
using namespace std;
void printArr(int *p, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << *p << endl;
        p++;
    }
}
int main ()
{
    int arr[10] = {3, 4, 5, 6, 7, 8, 10, 11, 16, 34};
    int arr_len = sizeof(arr) / sizeof(arr[0]);
    printArr(arr, arr_len);
    return 0;

}
