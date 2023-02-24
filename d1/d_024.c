#include <stdio.h>

#define AAA

int main() {
    /*如果定义了AAA就编译代码段1 否则代码段2*/
#ifdef AAA
    printf("AAA\n");//代码段1
#else
    printf("BBB\n");//代码段2
#endif
    /*如果没有定义AAA就编译代码段3 否则代码段4*/
#ifndef AAA
    printf("CCC\n");//代码段3
#else
    printf("DDD\n");//代码段4
#endif
    return 0;
}

