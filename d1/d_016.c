#include <stdio.h>

static int num;//默认初值0 静态全局变量只能在自己的.c里使用除此之外和普通全局变量一样
int main() {
    printf("%d\n", num);
    num = 100;
    printf("%d\n", num);
    return 0;
}

