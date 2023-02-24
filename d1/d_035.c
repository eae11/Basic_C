#include <stdio.h>

int main() {
    int *p[5];//指针数组  数组里面保存的都是地址
    int a = 100;
    int b[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    printf("sizeof(p)=%d\n", sizeof(p));//20
    p[0] = &a;
    p[1] = &b[1];
    printf("%p\n", p[0]);
    printf("%d\n", *p[0]);
    printf("%d\n", *p[1]);
    printf("%d\n", *(*(p + 1)));
    return 0;
}