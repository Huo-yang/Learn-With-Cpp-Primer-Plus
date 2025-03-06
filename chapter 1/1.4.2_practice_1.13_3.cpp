#include <iostream>
int main(){
    int a, b;
    std::cout << "Enter two numbers:" << std::endl;
    std::cin >> a >> b;
    for (int i = a > b ? a : b; i >= (a < b ? a : b); i--)
    {
        std::cout << i << std::endl;
    }
    return 0;
}