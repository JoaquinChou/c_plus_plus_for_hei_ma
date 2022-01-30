// 防止头文件重复包含子头文件
#pragma once
#include "point.h"
class Circle
{
private:
    Point m_Center;
    int m_R;
    // 设置圆心和半径
    // 在类中可以让另一个类 作为本类的成员

public:
    void setCenter(Point center);
    void setR(int r);
    // 获取圆心和半径
    Point getCenter();
    int getR();

};