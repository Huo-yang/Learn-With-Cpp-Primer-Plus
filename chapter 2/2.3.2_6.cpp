#include <iostream>
/*
    void*是一种特殊的指针类型，可以存放任意对象的地址。
*/
int main() {
    double obj = 3.14, *pd = &obj;
    // 正确：void*能存放任意类型对象的地址
    void *pv = &obj;    // obj可以是任意类型的对象
    pv = pd;    // pv可以存放任意类型的指针
    return 0;
}
