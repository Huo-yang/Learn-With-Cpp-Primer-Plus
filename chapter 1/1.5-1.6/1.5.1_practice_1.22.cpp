#include <iostream>
#include <vector>
#include "Unofficial_Sales_item.h"
int main(){
    std::vector<Sales_item> items;
    Sales_item temp, sum;
    while (std::cin>>temp)
    {
        if (items.empty()) {
            sum = temp;
        } else {
            sum = sum + temp;
        }
        items.push_back(temp);
    }
    std::cout << sum << std::endl;
    return 0;
}