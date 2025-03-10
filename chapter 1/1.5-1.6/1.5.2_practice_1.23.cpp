#include <iostream>
#include <vector>
#include <algorithm>
#include "Unofficial_Sales_item.h"

bool contains(const std::vector<std::string>& vec, const std::string& str) {
    return std::find(vec.begin(), vec.end(), str) != vec.end();
}

int main(){
    std::vector<Sales_item> items;
    Sales_item temp, sum;
    while (std::cin>>temp)
    {
        if (items.empty()) {
            sum = temp;
        } else if (sum.isbn() == temp.isbn()) {
            sum = sum + temp;
        }
        items.push_back(temp);
    }
    std::cout << sum << std::endl;
    std::vector<std::string> cal_isbn;
    cal_isbn.push_back(sum.isbn());
    int index = 1;
    while (index < items.size()) {
        Sales_item sum;
        if (!contains(cal_isbn, items[index].isbn()))
        {
            for (int i = index + 1; i < items.size(); i++)
            {
                sum = items[index];
                if (sum.isbn() == items[i].isbn())
                {
                    sum = sum + temp;
                }
            }
            std::cout << sum << std::endl;
        }
        index++;
    }
    return 0;
}