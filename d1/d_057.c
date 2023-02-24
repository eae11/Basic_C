#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
 char* strcat(char *dest, const char *src);
 函数功能:strcat函数追加src字符串到dest指向的字符串的后面。追加的时候会追加'\0',会从dest的'\0'开始追加(覆盖)
 注意:保证 dest指向的内存空间足够大。

 char* strncat(char *dest, const char *src,size_t n);
 函数功能:strncat函数追加src指向的字符串的前n个字符，到dest指向的字符串的后面。
 注意:如果n大于src的字符个数，则只将src字符串追加到dest指向的字符串的后面 追加的时候会追加'\0'(覆盖)

 int strcmp(const char *s1, const char *s2);
 函数功能:逐个比较s1和s2指向的字符串的大小
 比较的方法:逐个字符比较ascii码
 返回值:
 s1大于s2返回1
 否则-1
 相等返回0

 int strncmp(const char *s1, const char *s2,size_t n);
 函数功能:比较s1和s2的前n个字符
 */
int main() {
    char str1[] = "aa\0bcdefghi";//从'\0'开始追加(覆盖) 追加完后aahello'\0'ghi'\0'
    char *str2 = "hello";
    strcat(str1, str2);//aahello'\0'ghi'\0'
    printf("%s\n", str1);//aahello
    printf("%s\n",str1+8);//ghi

    printf("%s\n", "----------------");

    char str3[] = "aa\0bbbll";//  追加完后 aahel'\0'll'\0'
    char *str4 = "hello";
    strncat(str3, str4, 3);
    printf("%s\n", str3);//aahel'\0'll'\0'
    printf("%s\n",str3+6);

    printf("%s\n", "----------------");

    char *str5 = "hello world";
    char *str6 = "hello kitty";
    int ret;
    ret = strcmp(str5, str6);
    printf("%d\n", ret);//1

    printf("%s\n", "----------------");
    char *str7 = "hello world";
    char *str8 = "hello kitty";
    printf("%d\n", strncmp(str7, str8, 6));//0
    printf("%d\n", strncmp(str7, str8, 7));//1

    return 0;
}