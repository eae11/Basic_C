#include <stdio.h>

int main() {
    //数据类型 * 指针变量名
    int *p;//在定义指针变量的时候*是用来修饰变量的，说明变量p是个指针变量。
    int a = 1;
    p = &a;//&是取地址符,把a的地址给p赋值

    int num;
    num = *p;//*代表取值   *p就是p指向的变量,即a
    printf("num=%d\n", num);
    /*
     注意定个多个指针int *p,*q,每个前面都要*来修饰
     */
    char *p1;
    short int *p2;
    int *p3;
    long int *p4;
    float *p5;
    double *p6;
    printf("%d\n", sizeof(p1));//64位下指针全是8字节  32位4字节
    printf("%d\n", sizeof(p2));
    printf("%d\n", sizeof(p3));
    printf("%d\n", sizeof(p4));
    printf("%d\n", sizeof(p5));
    printf("%d\n", sizeof(p6));


    int b = 3;
    int *q;
    q = &b;
    printf("%p\n", &b);
    printf("%p\n", q);
    /*
     指针类型
     char *p; 只能保存char型变量的地址 下面同理
     short *p;
     int *p;
     long *p;
     float *p;
     double *p;
     函数指针;
     结构体指针;
     指针的指针;
     数组指针;
     通用指针void * 可以保存任何类型的地址
     */
    return 0;
}

