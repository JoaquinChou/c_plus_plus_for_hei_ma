#include <iostream>
using namespace std;

// 空指针调用成员函数

class Person {
public:
    void showClassName() {
        cout << "This is a persion" << endl;
    }

    // 在类内有使用到成员变量时，类内都会解析为this->变量的形式。
    void showPersonAge() {
        // 报错的原因是因为传入了空指针
        // 解决方法：
        if (this == NULL)   return;
        cout << "age = " << m_Age << endl;
    }
    int m_Age;
};

void test01() {
    Person *p = NULL;
    p->showClassName();
    p->showPersonAge();
}
int main() {
    test01();
    return 0;
}