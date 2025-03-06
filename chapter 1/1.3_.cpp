/*
    1.多行注释不能嵌套
    2.单行注释中的所有内容都将被忽略
*/
#include <iostream>
/*
简单主函数：
    读取两个数，求他们的和
*/
int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;     // 保存我们读入的输入数据的变量
    std::cin >> v1 >> v2;   // 读取输入数据
    std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
    return 0;
}