/*
    1.条件语句中括号内为条件
    2.只要条件语句中的内容为真时，就会执行内部代码
    3.+=为复合幅值运算符
    4.++为前缀递增运算符
*/
#include <iostream>
int main()
{
    int sum = 0, val = 1;
    // 只要val的值小于等于10，while循环就会持续执行
    while (val <= 10)
    {
        sum += val; // 将sum + val 赋予 sum
        ++val;      // 将val加1
    }
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
    return 0;
}