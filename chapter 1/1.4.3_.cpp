/*
    1.文件结束符  ctrl+z（Windows）
*/
#include <iostream>
int main(){
    int sum = 0, value = 0;
    // 读取数据直到遇到文件尾（文件结束符或错误输入），计算所有读入的值的和
    while (std::cin >> value)
        sum += value;
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}