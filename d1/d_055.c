#include <stdio.h>
#include <stdlib.h>

/*
 内存泄露的概念:
 申请的内存，首地址丢了，找不了，再也没法使用了，也没法释放了，这块内存就被泄露了。
 */
void fun() {
    char *p;//局部变量,用完找不到了
    p = (char *) malloc(100);
    //free(p);//记得释放
}

char *fun2() {
    char *p;
    p = (char *) malloc(100);
    return p;
}

int main() {
    //例1
    char *p;
    p = (char *) malloc(100);
    p = "hello";//p指到别的地方去了
    //例2
    fun();
    fun();
    //避免内存泄漏
    char *q;
    q = fun2();
    free(q);
    return 0;
}