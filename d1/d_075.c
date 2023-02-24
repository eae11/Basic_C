#include <stdlib.h>
#include <stdio.h>

/*
 一、位段
在结构体中，以位为单位的成员，称之为位段(位域)
位段的存储单元:
(1): char型位段存储单元是1个字节
(2): short int型的位段存储单元是2个字节
(3):int的位段，存储单元是4字节
(4): long int的位段，存储单元是4字节

struct stu{
 unsigned int a:2;
 unsigned int b:6;
 unsigned int c:4;
 unsigned int d:4;
 unsigned int i;
}data;

注意:不能对位段成员取地址因为可能不够1字节

1、对于位段成员的引用如下:
data.a =2
赋值时，不要超出位段定义的范围;
如段成员a定义为2位，最大值为3,即11
data.a =5，就会取5的低两位进行赋值101
2、位段成员的类型必须指定为整型或字符型
3、一个位段必须存放在一个存储单元中，不能跨两个单元
第一个单元空间不能容纳下一个位段，则该空间不用，
而从下一个单元起存放该位段

4、位段的长度不能大于存储单元的长度
(1): char型位段不能大于8位
(2): short int型位段不能大于16位
(3): int 的位段，位段不能大于32位
(4): long int的位段，位段不能大于32位


struct stu{
char a:7;
char b:7;
char c:2:
}temp;//占3字节，b不能跨存储单元存储

5、如一个段要从另一个存储单元开始，可以定义:
unsigned char a:1;
unsigned char b:2;
unsigned char :0;
unsigned char c:3;(另一个单元)
由于用了长度为0的位段，其作用是使下一个位段从下一个存储单元开始存放
将a、b存储在一个存储单元中，c另存在下一个单元

6、可以定义无意义位段,如
unsigned a:1;
unsigned : 2;
unsigned b:3;

 */

struct stu {
    unsigned int a: 2;
    unsigned int b: 6;
    unsigned int c: 4;
    unsigned int d: 4;
    unsigned int i;
};
struct stu2 {
    char a: 7;
    char b: 7;
    char c: 2;
};


//struct stu3{
//    char a:9;//不能大于8
//    char b:7;
//    char c:2;
//};

struct stu4 {
    unsigned char a: 1;
    unsigned char b: 2;
    unsigned char : 0;
    unsigned char c: 3;
};

int main() {
    struct stu s1;
    printf("%d\n", sizeof(s1));//8字节
    printf("%p\n", &s1);//000000f6531ff8d8
    printf("%p\n", &s1.i);//000000f6531ff8dc  相差4字节

    s1.a = 2;
    printf("%u\n", s1.a);
    s1.a = 5;
    printf("%u\n", s1.a);

    struct stu2 s2;
    printf("%d\n", sizeof(s2));//3


    struct stu4 s4;
    printf("%d\n", sizeof(s4));//2
    return 0;
}