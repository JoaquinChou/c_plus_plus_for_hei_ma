#include <iostream>
using namespace std;

class Building;

class GoodGay {
public:
    GoodGay();
    
    void visit();    // visit函数，访问Building中的属性
    void visit2();    // visit2函数，不能访问Building中的属性
    Building *building;
};

class Building {
// 告诉编译器  GoodGay类下visit成员函数是本类的好朋友，可以访问私有成员
friend void GoodGay::visit();
public:
    string m_SittingRoom;
    Building();
private:
    string m_BedRoom;
};


// 类外写成员函数
Building::Building() {
    m_SittingRoom = "客厅";
    m_BedRoom = "卧室";
}
GoodGay::GoodGay() {
    building = new Building;
}

void GoodGay::visit() {
    cout << "visit函数 正在访问:" << building->m_SittingRoom << endl;
    cout << "visit函数 正在访问:" << building->m_BedRoom << endl;
}

void GoodGay::visit2() {
    cout << "visit2函数 正在访问:" << building->m_SittingRoom << endl;
}

void test01() {
    GoodGay gg;
    gg.visit();
    gg.visit2();
}
int main() {

    test01();
    return 0;
}