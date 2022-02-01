#include <iostream>
using namespace std;

// 类模板中成员函数的创建时机
// 类模板中的成员函数创建时才调用
class Person1 {
public:
    void showPerson1() {
        cout << "Person1 show" << endl;
    }
};

class Person2 {
public:
    void showPerson2() {
        cout << "Person2 show" << endl;
    }
};

template<class T>
class MyClass{
public:
    T obj;
    void func1() {
        obj.showPerson1();
    }
    void func2() {
        obj.showPerson2();
    }
};

void test01() {
    MyClass<Person1> p1;
    MyClass<Person2> p2;
    p1.func1();
    p2.func2();
}

int main() {
    test01();
    return 0;
}