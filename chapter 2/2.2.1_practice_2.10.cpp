#include <iostream>
// 全局变量默认初始化为：""
std::string global_str;
// 默认初始化为0
int global_int;
int main() {
    // 具有未定义值（垃圾值）
    int local_int;
    // 由于string是类，默认初始化为：""
    std::string local_str;
}