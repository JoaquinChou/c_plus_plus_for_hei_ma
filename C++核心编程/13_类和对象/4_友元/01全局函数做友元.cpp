#include <iostream>
using namespace std;


// 1、如何让某个全局函数作为友元？
// 在类中用friend声明该函数即可。
// 建筑物类
class Building {
    // goodGay全局函数是Building类的好朋友
    friend void goodGay(Building &building);
public:
    string m_SittingRoom;
    Building() {
        m_SittingRoom = "客厅";
        m_BedRoom = "卧室";
    }

private:
    string m_BedRoom;
};

// 全局函数
void goodGay(Building &building) {
    cout << "好基友的全局函数 正在访问:" << building.m_SittingRoom << endl;
    cout << "好基友的全局函数 正在访问:" << building.m_BedRoom << endl;
}

void test01() {
    Building building;
    goodGay(building);
}

int main() {

    test01();
    return 0;
}