#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
 char *strtok(char *_Str, const char *_Delim)
 其中，第一个参数 str 是要分割的字符串，第二个参数 delim 是用于分割字符串的一个或多个分隔符。
 strtok() 函数会将字符串 str 中的第一个分隔符替换为 '\0'，并返回指向第一个子字符串的指针。
 在第一次调用时，可以将要分割的字符串作为参数传递给 strtok() 函数，以后每次调用时可以将第一个参数设置为 NULL，
 表示继续处理上次未处理的字符串。

    注意如果str字符串中出现了连续的几个delim中的字符则只将第一个字符变成03

 */
int main() {
    char str[] = "hello,world!How are you";
    char *token = strtok(str, ",! ");// 以逗号、感叹号和空格为分隔符
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, ",! ");
    }
    printf("%s\n", str);//hello\0world\0How\0are\0you\0
    printf("%s\n", "------------------");

    char str2[100]="xiaoming:21,,,.男.女,北京:haidian";//xiaoming\021\0,,.男\0女\0北京\0haidian\0
    char *p[7];
    int i = 0;
    p[i] = strtok(str2, ":,.");
    while (p[i] != NULL) {
        printf("%s\n", p[i]);
        i++;
        p[i] = strtok(NULL, ":,.");
    }

    return 0;
}