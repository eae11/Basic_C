#include <stdlib.h>
#include <stdio.h>

/*
 字节对齐
(1): char 1字节对齐﹐即存放char型的变量,内存单元的编号是1的倍数即可。
(2): short int 2字节对齐﹐即存放 short int型的变量，起始内存单元的编号是2的倍数即可。
(3): int 4字节对齐﹐即存放int 型的变量，起始内存单元的编号是4的倍数即可
(4): long int在32位平台下，4字节对齐﹐即存放long int 型的变量，起始内存单元的编号是4的倍数即可
(5): float 4字节对齐，即存放float型的变量起始内存单元的编号是4的倍数即可
(6): double
a.vc6.0和Visual Studio环境下
 8字节对齐，即存放double型变量的起始地址，必须是8的倍数，double变量占8字节
b.gcc环境下
 4字节对齐，即存放double型变量的起始地址，必须是4的倍数，double变量占8字节。
注意3:当结构体成员中出现数组的时候，可以看成多个变量。
注意4:开辟内存的时候，从上向下依次按成员在结构体中的位置顺序开辟空间

 */
struct stu {
    char a;
    short b;
    int c;
};
struct stu2 {
    char a;
    int c;
    short b;
};
struct stu3 {
    char buf[10];
    int a;
};
struct stu4 {
    char a;
    double b;
};
int main() {
    struct stu temp;
    printf("%d\n", sizeof(temp));//8
    printf("%p\n", &temp.a);//00000001495ffaec
    printf("%p\n", &temp.b);//00000001495ffaf0
    printf("%p\n", &temp.c);//00000001495ffaf4

    struct stu2 s2;
    printf("%d\n", sizeof(s2));//12
    printf("%p\n", &s2.a);//00000072417ff64c
    printf("%p\n", &s2.c);//00000072417ff650
    printf("%p\n", &s2.b);//00000072417ff654

    struct stu3 s3;
    printf("%d\n", sizeof(s3));//16
    printf("%p\n", &s3.buf);//000000a2275ffd00
    printf("%p\n", &s3.a);//000000a2275ffd0c

    struct stu4 s4;
    printf("%d\n", sizeof(s4));//16
    printf("%p\n", &s4.a);//000000d961dffae0
    printf("%p\n", &s4.b);//000000d961dffae8
    return 0;
}