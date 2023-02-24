#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
void *memset(void *_Dst, int _Val, size_t _Size)
 函数功能:将dst指向的内存的 size个字节全部赋值为value参数
 返回值:dst
int atoi(const char *_Str)
 功能:将字符串转成整型并返回,如果无法转换返回值为0
 long atol(const char *_Str) 转成long
 double atof(const char *_String) 转成double
 */
int main() {
    char p[100] = "helloworld";
    memset(p, 'a', 5);
    printf("%s\n", p);//aaaaaworld

    char str[100];
    memset(str, '\0', 100);//一般用来初始化

    int num;
    num = atoi("123");
    printf("%d\n",num);
    return 0;
}