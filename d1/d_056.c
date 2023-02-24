#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)

/*
 size_t strlen(const char *s);
 函数功能:
 测字符指针s指向的字符串中字符的个数，不包括'\O’
 返回值:字符串中字符个数

 char *strcpy(char *dest,const char *src)
 功能:拷贝src指向的字符串到dest指针指向的内存,'\0'也会拷贝
 返回值:目的内存的地址
 注意:必须保证dest指向的内存足够大,否则会覆盖后面的内存

 char *strncpy(char *dest,const char *src,size_t n)
 功能:将src指向的字符串前n个字节，拷贝到dest指向的内存中
 返回值:目的内存的首地址
 注意:
 1.不拷贝'\0'
 2.如果n比src中的字符个数还要多,则在dest后面填充n-strlen(src)个'\0'

 */
int main() {
    char str1[20] = "hello";
    char *str2 = "hello";
    printf("%d\n", strlen(str1));//5
    printf("%d\n", strlen(str2));//5

    char str3[100] = "abcdefghijklmn";
    strcpy(str3, "z");//'\0'也会拷贝过去
    //z'0'cdefghijklmn
    printf("%s\n", str3);//z
    printf("%s\n", str3 + 1);//无
    printf("%s\n", str3 + 2);//cdefghijklmn


    char str4[100] = "123456789";
    strncpy(str4, "helloworld", 5);//拷贝前5个字符过去
    //hello6789
    printf("%s\n", str4);//hello6789
    printf("%s\n", str4 + 5);//6789

    char *p;
    char str5[100] = "123456789";
    p = strncpy(str5, "hello", 7);//前5个字符拷贝过去后,再补两个'\0'
    //hello'0''0'89WW4R
    printf("%s\n", str5);//hello
    printf("%s\n", str5 + 7);//89

    return 0;
}