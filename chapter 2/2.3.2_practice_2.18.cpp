#include <iostream>
int main() {
    int a = 1, b = 2;
    int* p = &a;
    std::cout << "p = " << p << " *p = " << *p  << std::endl;
    p = &b;
    std::cout << "p = " << p << " *p = " << *p  << std::endl;
    *p = 3;
    std::cout << "p = " << p << " *p = " << *p  << std::endl;
    return 0;
}
