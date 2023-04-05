#include <stdio.h>

/*
typedef  关键字
volatile 关键字
 */
typedef int INT32;
typedef double D2;

int main() {
    D2 l = 3.1;
    INT32 a = 16;
    printf("%d\n", a);
    printf("%f\n", l);
    volatile int b = 16;//去主存里读
    return 0;

}