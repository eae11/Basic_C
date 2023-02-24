#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
  int sprintf(char *__stream, const char *__format, ...)
  输出到__stream指定的内存区域
  int sscanf(const char *__source, const char *__format, ...)
  从__source指定的内存区域读取数据

 */
int main() {
    char buf[100];
    sprintf(buf, "%d:%d:%d", 2013, 10, 1);
    printf("%s\n", buf);//2013:10:1

    int a, b, c;
    sscanf(buf, "%d:%d:%d", &a, &b, &c);
    printf("%d %d %d\n", a, b, c);

    char p[20];
    memset(p, ' ', 20);

    int num = 0;
    sscanf("1234 5678", "%*d %s", p);//*表示跳过这个数据  跳过1234 然后隔一个空格获取字符串
    printf("%s\n", p);//5678

    sscanf("1234 5678", "%*d %d", &num);
    printf("%d\n", num);//5678

    sscanf("1234 5678", "%*s %d", &num);
    printf("%d\n", num);//5678

    sscanf("1234 5678", "%s", p);//sscanf和scanf遇到空格、制表符或换行符等空白字符默认停止获取
    printf("%s\n", p);


    sscanf("12345678", "%4s", p);//读取指定宽度数据
    printf("%s\n", p);//1234

    sscanf("1234578", "%3d", &num);
    printf("%d\n", num);//123

    sscanf("agcd32DajfDdFF", "%[a-z]", p);//匹配a-z中的任意字符,尽可能多的匹配
    printf("%s\n", p);

    sscanf("32adaDajfDdFF", "%[^a-z]", p);//匹配非a-z中的任意字符,贪婪
    printf("%s\n", p);

    sscanf("agcd32DajfDdFF", "%[aBc]", p);//匹配aBc中的一员  贪婪
    printf("%s\n", p);

    sscanf("gcd32DajfDdFF", "%[^aBc]", p);//匹配非aBc中的一员  贪婪
    printf("%s\n", p);


    sscanf("1234 5678", "%[^\n]", p);//除去换行符其他都读进来
    printf("%s\n", p);//"1234 5678"
    //获取#@号之间的字符串 abc#def@ghi
    char l[10];
    sscanf("abc#def@ghi", "%*[^#]%*c%[^@]", l);
    printf("%s\n", l);

    int min = 0, sec = 0;
    sscanf("[02:06.85]", "[%2d:%2d", &min, &sec);
    printf("%02d %02d\n",min,sec);
    return 0;
}