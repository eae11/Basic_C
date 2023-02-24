#include <stdlib.h>
#include <stdio.h>
/*
指定对齐原则:
使用#pragma pack改变默认对齐原则
格式:
#pragma pack (value)时的指定对齐值value。
 注意:
1.value只能是:1 2 4 8等 2^n
2.指定对齐值与数据类型对齐值相比取较小值
说明:指定一个value
以多少个字节为单位开辟内存
结构体成员中，占字节数最大的类型长度和value比较,取较小值，为单位开辟内存

 */
#pragma pack(2)
//#pragma pack(1)

struct stu {
    char a;
    int b;
};

int main() {
    struct stu s1;
    printf("%d\n", sizeof(s1));
    printf("%p\n", &s1.a);
    printf("%p\n", &s1.b);
    return 0;
}