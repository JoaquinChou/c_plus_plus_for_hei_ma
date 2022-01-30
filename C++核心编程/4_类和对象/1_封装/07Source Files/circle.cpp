#include "circle.h"

void Circle::setCenter(Point center)
{
    m_Center = center;
}
void Circle::setR(int r)
{
    m_R = r;
}
// 获取圆心和半径
Point Circle::getCenter()
{
    return m_Center;
}

int Circle::getR()
{
    return m_R;
}

