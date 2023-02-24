#include <stdio.h>

int main() {
    int a = 0x12345678, b = 0xabcdef66;
    char *p1, *p2;
    printf("%x %x\n", a, b);
    p1 = (char *) &a;//只取一个字节
    p2 = (char *) &b;//只取一个字节
    printf("%x %x\n", *p1, *p2);// 78 66
    /*
     指针++，取几个字节，由指针类型决定的指针为字符指针则取一个字节，指针为整型指针则取4个字节，指针为double型指针则取8个字节。
指针++指向下个对应类型的数据
字符指针++，指向下个字符数据，指针存放的地址编号加1,整型指针++,指向下个整型数据，指针存放的地址编号加4

     */
    p1++;
    p2++;
    printf("%x %x\n", *p1, *p2);// 56 ffffffef(原本是有符号 char  ef 转成int 高位补1) %x打印unsigned int
    //如果只想打印ef
    printf("%x %x\n", *p1, 0xff & *p2);//56 ef    *p2已经是int 类型 跟0xff&把高位屏蔽掉


    return 0;
}

