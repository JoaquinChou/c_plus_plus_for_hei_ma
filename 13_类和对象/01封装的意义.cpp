#include <iostream>
using namespace std;

// 定义一个圆类，求圆的周长
const double PI = 3.14;
class Circle
{
public:
    // 属性：半径
    double r;
    // 行为：获取圆的周长
    double getPerimeter()
    {
        return 2 * PI * r;
    }
};

int main()
{
    // 通过类来实例化对象（通过类来创建对象）
    Circle c1;
    c1.r = 4;
    cout << "圆的周长为：" <<c1.getPerimeter() << endl;
    return 0;
}