#include <stdio.h>

void fun1(char *q) {//形参q指向hello world
    q = "hello kitty";//q指向hello kitty 并没有影响到p
}

void fun2(char **q) {//q指向p   为什么形参是char **类型,因为原本 是char *类型,取地址就是char **类型
    *q = "hello kitt";// 通过*q访问到了p, *q就是p, 让p现在指向hello kitt
}

int main() {
    char *p = "hello world";
    fun1(p);
    printf("%s\n", p);//hello world
    fun2(&p);//想改变p的指向,必须传p的地址
    printf("%s\n", p);//hello kitty
    return 0;
}
/*总结一句话,想要改变主调函数变量的值,必须传变量地址,然后通过*+地址去赋值无论这个变量是什么类型的*/