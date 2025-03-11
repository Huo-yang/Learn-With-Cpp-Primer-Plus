#include <iostream>
int main() {
    int ival = 42;
    int *p = &ival; // p存放变量ival的地址，或者说p是指向变量ival的指针
    std::cout << *p << std::endl;   // 由符号*得到指针p所指的对象，输出42

    *p = 0; // 由符号*得到指针p所指的对象，即可经由p为变量ival幅值
    std::cout << *p;    //输出0
}