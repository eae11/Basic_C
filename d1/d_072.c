#include <stdlib.h>
#include <stdio.h>

/*
 规则1:以多少个字节为单位开辟内存
给结构体变量分配内存的时候，会去结构体变量中找基本类型的成员
 哪个基本类型的成员占字节数多，就以它大大小为单位开辟内存，
 在gcc.中出现了double类型的，例外
(1):成员中只有char 型数据，以1字节为单位开辟内存。
(2):成员中出现了short int类型数据，没有更大字节数的基本类型数据。以2字节为单位开辟内存
(3):出现了int float没有更大字节的基本类型数据的时候以4字节为单位开辟内存。
(4):出现了double类型的数据
 情况1:在vc6.0和Visual Studio 中里，以8字节为单位开辟内存。
 情况2:在Linux环境gcc里，以4字节为单位开辟内存。
 注意:
 如果在结构体中出现了数组，数组可以看成多个变量的集合。
 如果出现指针的话，没有占字节数更大的类型的，以4字节为单位开辟内存。
 在内存中存储结构体成员的时候，按定义的结构体成员的顺序存储。

 */
struct stu1 {
    char sex;
};
struct stu2 {
    short c;
    char sex;
};
struct stu3 {
    float c;
    char sex;
};
struct stu4 {
    double d;
    char sex;
};

int main() {
    struct stu1 boy;
    struct stu2 boy2;
    struct stu3 boy3;
    struct stu4 boy4;
    printf("%d\n", sizeof(boy));
    printf("%d\n", sizeof(boy2));
    printf("%d\n", sizeof(boy3));
    printf("%d\n", sizeof(boy4));
    return 0;
}