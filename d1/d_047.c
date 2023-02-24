#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *fun() {
    //返回局部数组的地址,函数完就已经释放,要加个static
//    static char str[100] = "hello world";
    //返回文字常量区的地址   文字常量区内容一直存在的
//    char *str = "hello world";
    //返回堆内存的地址
    char *str;
    str = (char *) malloc(20);
    strcpy(str, "hello world");
    return str;
}

int main() {
    char *p;
    p = fun();
    printf("%s\n", p);
    free(p);
    return 0;
}