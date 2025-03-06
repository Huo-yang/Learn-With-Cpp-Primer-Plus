#include <iostream>
int main(){
    int a, b;
    std::cout << "Enter two numbers:" << std::endl;
    std::cin >> a >> b;
    int i = a > b ? a : b;
    while (i >= (a < b ? a : b))
    {
        std::cout << i << " ";
        i--;
    }
    return 0;
}