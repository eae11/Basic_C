#include <stdio.h>

void fun(void) {
    printf("fun\n");
}
static void fun2(void){//只能在定义的.c中使用
    printf("fun2\n");
}
