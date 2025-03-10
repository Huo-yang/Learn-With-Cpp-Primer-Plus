#include "Unofficial_Sales_item.h"

std::istream& operator>>(std::istream& is, Sales_item& item) {
    is >> item.data.isbn >> item.data.quantity >> item.data.price;
    item.data.sales = item.data.quantity * item.data.price;
    return is;
}

std::ostream& operator<<(std::ostream& os, const Sales_item& item) {
    os << item.data.isbn << " " << item.data.quantity << " " 
       << item.data.sales << " " << item.data.price;
    return os;
}

Sales_item Sales_item::operator+(const Sales_item& b) const {
    if (this->data.isbn == b.data.isbn) {
        Sales_item item;
        item.data.isbn = this->data.isbn;
        item.data.quantity = this->data.quantity + b.data.quantity;
        item.data.sales = this->data.sales + b.data.sales;
        item.data.price = item.data.sales / item.data.quantity;
        return item;
    } else {
        std::cerr << "Error: ISBN mismatch!" << std::endl;
        return *this;
    }
}

std::string Sales_item::isbn() {
    return data.isbn;
}

// 构造和析构函数
Sales_item::Sales_item() : data{"", 0, 0.0, 0.0} {}
Sales_item::~Sales_item() {}