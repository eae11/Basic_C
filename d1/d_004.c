#include <stdio.h>

/*printf 格式化输出*/
int main() {
    char a = 'a';
    int b = 101;
    float c = 3.14f;
    double d = 1.23;
    int e = 0x3d;
    float f = 0.01234f;
    double g = 123456;
    char *p = "hello world";
    printf("a=%c\n", a);//字符
    printf("b=%d\n", b);//十进制有符号
    printf("b=%u\n", b);//十进制无符号
    printf("c=%f\n", c);//float浮点
    printf("d=%lf\n", d);//double浮点
    printf("e=%x\n", e);//无符号十六进制
    printf("e=%d\n", e);
    printf("f=%e\n", f);//指数形式的浮点数
    printf("g=%e\n", g);//指数形式的浮点数
    printf("%s\n", p);//字符串

    printf("**%3d**\n", 1);//不足三位前面空格补
    printf("**%-3d**\n", 1);//不足三位后面空格补
    printf("**%03d**\n", 1);//不足三位前面0补
    printf("**%-5.2f**\n", 0.542);//占5位保留两位小数后面空格补

    return 0;

}