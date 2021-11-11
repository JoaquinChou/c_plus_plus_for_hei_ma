#include <iostream>
#include "circle.h"
#include "point.h"
using namespace std;

// 点和圆的关系案例
// // 点类
// class Point
// {
// private:
//     int m_X;
//     int m_Y;
// public:
//     // 设置点的坐标
//     void setX(int x)
//     {
//         m_X = x;
//     }
//     void setY(int y)
//     {
//         m_Y = y;
//     }
//     // 获取点的坐标
//     int getX()
//     {
//         return m_X;
//     }
//     int getY()
//     {
//         return m_Y;
//     }
    
// };

// 圆类
// class Circle
// {
// private:
//     Point m_Center;
//     int m_R;
//     // 设置圆心和半径
//     // 在类中可以让另一个类 作为本类的成员

// public:
//     void setCenter(Point center)
//     {
//         m_Center = center;
//     }
//     void setR(int r)
//     {
//         m_R = r;
//     }
//     // 获取圆心和半径
//     Point getCenter()
//     {
//         return m_Center;
//     }

//     int getR()
//     {
//         return m_R;
//     }

// };

// 全局函数判断点和圆的关系
void isInCircle(Point &p, Circle &c)
{
    int square_distance = (p.getX() - c.getCenter().getX()) * (p.getX() - c.getCenter().getX()) + 
                    (p.getY() - c.getCenter().getY()) * (p.getY() - c.getCenter().getY());

    int square_r = c.getR() * c.getR();
    // cout << "1 " << square_distance << endl;
    // cout << "2 " << square_r << endl;
    if (square_distance == square_r)
    {
        cout << "点在圆上" << endl;
    }
    else if (square_distance > square_r)
    {
        cout << "点在圆外" << endl;
    }
    else
    {
        cout << "点在圆内" << endl;
    }
}

int main()
{
    // 实例化一个圆
    Circle c;
    Point center;
    center.setX(10);
    center.setY(0);
    c.setCenter(center);
    c.setR(10);
    // 实例化一个点
    Point p;
    p.setX(10);
    p.setY(9);
    // 判断点和圆的关系
    isInCircle(p, c);
    return 0;
}