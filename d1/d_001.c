#include <stdio.h>

/*
数据类型
 */
int main() {
    char a = -1;//-2^7~2^7-1
    short b = "11";//-2^16~2^16-1
    int c = 6;//-2^31~2^31-1
    long d = 7;//-2^31~2^31-1
    float e = 3.14159261111f;//-3.4x10^-38 ~ 3.4x10^38
    double f = 3.14159261111;//-1.7x10^-308 ~ 1.7x10^308
    long long g = 10;// -2^63~2^63-1
    long double h = 3.14159261111;//-1.2x10^-4932~1.2x10^4932
    unsigned char i = 45;//0到2^8-1
    unsigned short j = 12;//0到2^16-1
    unsigned int k = 12;//0到2^32-1
    unsigned long l = 12;//0~2^32-1
    unsigned long long m = 13;//0~2^64-1
    printf("char占几字节%d\n", sizeof(a));//1
    printf("short占几字节%d\n", sizeof(b));//2
    printf("int占几字节%d\n", sizeof(c));//4
    printf("long占几字节%d\n", sizeof(d));//4
    printf("float占几字节%d\n", sizeof(e));//4
    printf("double占几字节%d\n", sizeof(f));//8
    printf("long long占几字节%d\n", sizeof(g));//8
    printf("long double占几字节%d\n", sizeof(h));//16
    printf("unsigned char占几字节%d\n", sizeof(i));//1
    printf("unsigned short 占几字节%d\n", sizeof(j));//2
    printf("unsigned int占几字节%d\n", sizeof(k));//4
    printf("unsigned long占几字节%d\n", sizeof(l));//4
    printf("unsigned long long占几字节%d\n", sizeof(m));//8

    printf("e->%f\n", e);
    /*
     %f 单精度，%lf双精度，两者默认型都是保留6位小数
     printf里的%f和%lf没区别，都是把变量值当成double处理
     scanf里的%f表示接收的变量是float*，%lf则是double*
     */

    printf("f->%f\n", f);//double 和 float都用%f输出
    printf("h->%Lf\n", h);//long double 用%Lf输出
    printf("h->%.2Lf\n", h);//保留2位小数
    printf("e->%.5f\n", e);//保留5位小数
    /*for (int i = 0; i < 255; ++i) {
           printf("%c", i);

       }
       printf("\n");
       for (int i = 0; i < 255; i++) {
           printf("%d ", i);
       }*/
    return 0;
}