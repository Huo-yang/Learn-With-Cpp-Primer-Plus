#include <iostream>
int main() {
    int *ip1, *ip2; // ip1和ip2都是指向int型对象的指针
    double dp, *dp2;    // dp2是指向double型对象的指针，dp是double对象

    int ival = 42;
    int *p = &ival; // p存放变量ival的地址，或者说p是指向变量ival的指针

    double dval;
    double *pd = &dval; // 正确：初始值是double型对象的地址
    double *pd2 = pd;   // 正确：初始值是指向double对象的指针
}