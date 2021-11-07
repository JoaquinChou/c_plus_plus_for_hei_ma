#include <iostream>
using namespace std;

// 立方体类设计
// 1、创建立方体类
// 2、设计属性
// 3、设计行为 获取长方体的面积和体积
// 4、分别利用全局函数和成员函数 判断两个立方体是否相同
class Cube
{
private:
    int m_L;
    int m_W;
    int m_H;

public:
    void setL(int l)
    {
        m_L = l;
    }

    int getL()
    {
        return m_L;
    }
    void setW(int w)
    {
        m_W = w;
    }

    int getW()
    {
        return m_W;
    }
    void setH(int h)
    {
        m_H = h;
    }

    int getH()
    {
        return m_H;
    }

    // 获取长方体的面积
    int caculateS()
    {
        return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
    }

    // 获取立方体体积
    int caculateV()
    {
        return m_L * m_W * m_H;
    }
    // 利用成员函数判断 两个立方体是否相等
    bool isSameCube(Cube &c)
    {
        if (c.getL() == m_L && c.getW() == m_W && c.getH() == m_H)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

// 利用全局函数判断 两个立方体是否相等
bool isSameCube(Cube &c1, Cube &c2)
{
    if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
        return true;
    else
        return false;
}

int main()
{
    // 实例化对象
    Cube c1, c2;
    c1.setL(10);
    c1.setW(10);
    c1.setH(10);
    cout << "立方体的面积为" << c1.caculateS() << endl;
    cout << "立方体的体积为" << c1.caculateV() << endl;

    c2.setL(10);
    c2.setW(10);
    c2.setH(20);
    cout << "通过全局函数判断两个立方体是否相同：" << endl;
    if (isSameCube(c1, c2))
    {
        cout << "两个立方体相同！" << endl;
    }
    else
    {
        cout << "两个立方体不相同！" << endl;
    }
    cout << "利用成员函数判断两个立方体是否相等：" << endl;
    if (c1.isSameCube(c2))
    {
        cout << "两个立方体相同！" << endl;
    }
    else
    {
        cout << "两个立方体不相同！" << endl;
    }
    return 0;
}