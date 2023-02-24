#include <stdio.h>

int main() {
    int a = 0x12345678;
    int *p;
    int **q;//二级指针 可以保存int * 的地址
    int ***m;//三级指针 可以保存int ** 的地址
    p = &a;
    printf("%p\n", p);
    printf("%p\n", &a);

    q = &p;
    printf("%p\n", q);
    printf("%p\n", &p);

    m = &q;
    printf("%p\n", m);
    printf("%p\n", &q);

    printf("%x\n", *p);
    printf("%x\n", **q);
    printf("%x\n", ***m);
    return 0;
}