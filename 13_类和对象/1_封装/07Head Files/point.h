// 防止头文件重复包含子头文件
#pragma once
// 点类
class Point
{
private:
    int m_X;
    int m_Y;
public:
    // 设置点的坐标
    void setX(int x);
    void setY(int y);
    // 获取点的坐标
    int getX();
    int getY();
};