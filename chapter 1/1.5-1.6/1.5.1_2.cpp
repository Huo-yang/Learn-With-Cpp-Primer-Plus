#include <iostream>
#include "Unofficial_Sales_item.h"
int main(){
    Sales_item item1, item2;
    // 读入ISBN号、售出的册数以及销售价格
    std::cin >> item1 >> item2;
    // 写入ISBN号、售出的册数、总销售额和平均价格
    std::cout << item1 + item2 << std::endl;
    return 0;
}