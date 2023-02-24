#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    //使用赋值时
    //1.字符数组使用scanf或者strcpy
    char buf[20] = "hello world";
//    buf = "hello kitty";//数组的名字是数组的首地址 不能用等号给常量赋值 错误
    strcpy(buf, "hello kitty");//正确
    scanf("%s", buf);//正确

    //2.指针指向文字常量区
    char *buf_point = "hello world";
    buf_point = "hello kitty";//正确,buf_point指向另一个字符串
//    strcpy(buf_point, "hello kitty");//错误 不能通过指针修改文字常量区的内容

    //3.指针指向堆区,堆区存放字符串
    char *buf_heap;
    buf_heap = (char *) malloc(20);
    strcpy(buf_heap, "hello aaa");//正确
//    scanf("%s", buf_heap);//正确
    return 0;
}