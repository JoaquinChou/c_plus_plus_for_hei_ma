#include <iostream>
using namespace std;

// 类模板与继承
template<class T>
class Base {
    T m;
};

// 错误
// 如果不指定父类的类型，继承的时候编译器根本不知道给子类分配多大的空间
// class Son : public Base {
class Son1 : public Base<int> {

};

void test01() {
    Son1 s1;
}

// 如果想灵活指定父类中的类型，子类也需要变成类模板
template<class T1, class T2>
class Son2 : public Base<T2> {
public:
    Son2() {
        cout << "T1的类型为 " << typeid(T1).name() << endl;
        cout << "T2的类型为 " << typeid(T2).name() << endl;
    }
    T1 obj;
};

void test02() {
    Son2<int, char> s2;
}
int main() {
    test02();
    return 0;
}