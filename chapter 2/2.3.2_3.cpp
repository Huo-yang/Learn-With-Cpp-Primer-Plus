#include <iostream>
#include <cstdlib>
int main() {
    int *p1 = nullptr;  // 等价于int *p1 = 0
    int *p2 = 0;    // 直接将p2初始化为字面常量0
    int *p3 = NULL; // 等价于int *p3 = 0
}