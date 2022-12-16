#include <stdio.h>

/*在函数外部定义的变量 普通全局变量 不赋初值默认为0
生命周期:程序运行的整个过程一直存在,直到程序结束
*/
int num = 100;//如果在别的.c里想用  用extern int num; 声明

extern void m1();

int main() {
    m1();
    return 0;
}

