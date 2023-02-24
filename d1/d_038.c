#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    /*字符串就是以'\0'结尾的若干字符的集合
     1.字符串存放在数组中  内容可修改
     普通全局数组,内存分配在静态全局区
     普通局部数组,分配在栈区
     静态数组(静态全局数组,静态局部数组)分配在静态全局区
     */
    char s[100] = "I love A";
    printf("%s\n", s);
    /*
     2.字符串存放在文字常量区   内容不可修改
     字符串首地址赋给指针变量
     */
    char *str = "I love C";
    printf("%s\n", str);
//    *str = 'y';//错误
//    printf("%s\n", str);
    /*
     3.字符串存放在堆区 内容可修改
     使用malloc等函数在堆区申请空间,将字符串拷贝到堆区
     */
    char *str2 = (char *) malloc(20);//动态申请20个字节  返回一个地址强制转换成char *   首地址给str2赋值 str2指向了那块内存
    strcpy(str2, "I love C");//将 字符串拷贝到指向的内存
    printf("%s\n", str2);
    *str2 = 'b';
    printf("%s\n", str2);
    return 0;
}