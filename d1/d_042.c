#include <stdio.h>

int main() {
    int a[10];
    printf("%p\n", a);//整型指针   int *p
    printf("%p\n", a + 1);//相差4个字节
    /*数组名字取地址 变成数组指针
     */
    printf("%p\n", &a);//一维数组指针   int(*p) [10]
    printf("%p\n", &a + 1);//相差40个字节

    int b[4][5];
    printf("%p\n", b);//一维数组指针  int(*p) [5]
    printf("%p\n", b + 1);//相差20个字节

    printf("%p\n", &b);//二维数组指针  int(*p) [4][5]
    printf("%p\n", &b + 1);//相差80个字节

    int *p;
    p = a;
    printf("%p\n", &p);//指针的指针  (整型指针)
    printf("%p\n", &p + 1);//相差4个字节

    return 0;
}