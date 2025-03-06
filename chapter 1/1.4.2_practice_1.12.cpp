#include <iostream>
int main(){
    int sum = 0, i = 50;
    for (int i = 50; i < 100; i++)
    {
        sum += i;
        i++;
    }
    std::cout << "The sum of 50 to 100 is " << sum << std::endl;
    return 0;
}