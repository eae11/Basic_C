#include <stdio.h>
//自己定义的用""包起来会先在当前目录找头文件找不到再去系统指定目录 ,库函数的用<>,
#include "link_013_3.h"

#include "link_013_2.h" //(间接声明)在头文件里使用extern声明 包含头文件

void fun(void);//没有函数体 声明函数 无参数void可省略

fun2() {//不写返回值默认int
    printf("我是函数fun2\n");
}

extern int max(int x,int y);//(直接声明)当函数在不同.c文件中使用extern声明


int main() {
    int num = 0;
    fun();//如果fun定义在main下面必须在前面声明 编译器从上往下编译 如果定义在前面,可以不用声明
    fun2();
    fun3();//函数声明在link_013_3.h头文件里
    num = max(3,7);//不在同一个.c外部函数
    num = max2(5,9);//不在同一个.c外部函数
    return 0;
}

void fun(void) {
    printf("我是函数fun\n");
}

void fun3() {
    printf("我是函数fun3\n");
}