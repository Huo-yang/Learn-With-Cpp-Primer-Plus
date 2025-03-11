#include <iostream>
int main() {
    int ival = 1024;
    // 引用，即将两个变量绑定在了一起
    int &refVal = ival;
    std::cout << "refVal = " << refVal << std::endl;
    refVal = 2;
    std::cout << "ival = " << ival << std::endl;
    int i = refVal;
    std::cout << "i = " << i << std::endl;
    return 0;
}