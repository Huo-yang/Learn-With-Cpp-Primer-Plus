#include <iostream>
int main() {
    int i = 42;
    int *pi = 0;    // pi被初始化，但没有指向任何对象
    int *pi2 = &i;  // pi2被初始化，存有i的地址
    int *pi3;   // 如果pi3定义于块内，则pi3的值是无法确定的

    pi3 = pi2;  // pi3和pi2指向同一个对象i
    pi2 = 0;    // 现在pi2不指向任何对象了

    int ival = 42;
    pi = &ival; // pi的值被改变，现在pi指向了ival
    *pi = 0;    // ival的值被改变，指针pi并没有改变
}