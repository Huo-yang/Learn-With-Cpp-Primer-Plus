#include <iostream>
#include <string>
class Sales_item
{
private:
    struct book
    {
        std::string isbn;
        int quantity;
        double price;
        double sales;
    } data;
    
public:
    /*
    1.friend 允许非成员函数访问类的私有成员
    2.&取地址符
    3.operator操作符
    4.const表示不可修改的变量
    */
    friend std::istream& operator>>(std::istream& is, Sales_item& p);
    friend std::ostream& operator<<(std::ostream& os, const Sales_item& p);
    std::string isbn();
    
    Sales_item operator+(const Sales_item& b) const;
    // 构造函数，创建初始化变量
    Sales_item();
    // 构析函数，对象被销毁时自动调用
    ~Sales_item();
};
