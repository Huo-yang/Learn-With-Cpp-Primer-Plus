#include <iostream>
#include "Unofficial_Sales_item.h"
int main(){
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    std::cout << item1 << std::endl;
    std::cout << item2 << std::endl;
    std::cout << item1 + item2 << std::endl;
    return 0;
}