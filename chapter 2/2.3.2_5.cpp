#include <iostream>
int main() {
    int ival = 1024;
    int *pi = 0;    // pi合法，是一个空指针
    int *pi2 = &ival;   // pi2是一个合法的指针，存放着ival的地址
    if (pi)
    {
        /* code */
    }
    if (pi2)
    {
        /* code */
    }
    
}


