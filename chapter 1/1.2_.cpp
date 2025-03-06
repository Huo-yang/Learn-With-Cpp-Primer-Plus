// 头文件
#include <iostream> // 标准输入输出库 & 标准库
int main()
{
    /*  
        1.std为命名空间
        2.cout为ostream类型的对象->标准输出对象
        3.<< 为输出运算符
        4.endl为换行操纵符 与/n相比它会刷新缓冲区 刷新缓冲会将内存中所有等待输出的内容全部写入到输出流
        5.>> 为输入运算符
    */
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
    return 0;
}