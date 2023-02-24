#include <stdio.h>

/*
#if 表达式
    程序段一
#else
    程序段二
#endif
如果表达式为真，编译第一段代码，否则编译第二段代码

选择性编译都是在预编译阶段干的事情。
*/
#define AAA 0 //可以改变AAA的值来决定编译哪块内容

int main() {
    int num = 6;
#if AAA
    printf("aaa\n");
#else
    printf("bbb\n");
#endif
    return 0;
}

