// #include "person.h"

// 类模板分文件编写问题以及如何解决
// 第一种解决方法：直接包含源文件
// #include "person.cpp"    一般不会这么做

// 第二种解决方法：将.h和.cpp内容写到一起，将后缀改为.hpp
#include "person.hpp"

void test01() {
    Person<string, int> p("Jerry", 18);
    p.showPerson();
}


int main() {

    test01();
    return 0;
}