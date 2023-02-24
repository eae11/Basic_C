#include <stdlib.h>
#include <stdio.h>

typedef struct stu1 {
    int a;
    int b;
    int c;
} Stu1;
/*
共用体所有成员占有同一段地址空间
共用体的大小是其占内存长度最大的成员的大小

 共用体的特点:
1、同一内存段可以用来存放几种不同类型的成员，但每一瞬时只有一种起作用
2、共用体变量中起作用的成员是最后一次存放的成员，在存入一个新的成员后原有的成员的值会被覆盖
3、共用体变量的地址和它的各成员的地址都是同地址
4、共用体变量的初始化union data a={123};初始化共用体只能为第一个成员赋值,不能给所有成员都赋初值

*/
typedef union stu2 {
    int a;
    int b;
    int c;
} Stu2;

typedef union stu3 {
    unsigned char a;
    unsigned int b;
} Stu3;

int main() {
    Stu1 s1;
    Stu2 s2;
    printf("%d\n", sizeof(s1));//12
    printf("%d\n", sizeof(s2));//4
    printf("%p\n", &s2.a);//00000092db3ffb50
    printf("%p\n", &s2.b);//00000092db3ffb50
    printf("%p\n", &s2.c);//00000092db3ffb50

    Stu3 s3;
    s3.b = 0xffffffff;
    printf("%x\n",s3.b);
    printf("%x\n",s3.a);
    s3.a=0x0d;
    printf("%x\n",s3.a);
    printf("%x\n",s3.b);
    return 0;
}