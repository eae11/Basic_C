#include <stdio.h>

/*
关键字 register
 */
int main() {
    //register在编译的时候告诉编译器这个变量是寄存器变量，尽量将其存储空间分配在寄存器中。
    //(1):定义的变量不一定真的存放在寄存器中。
    //(2): cpu取数据的时候去寄存器中拿数据比去内存中拿数据要快
    //(3):因为寄存器比较宝贵，所以不能定义寄存器数组
    //(4):register只能修饰字符型及整型的，不能修饰浮点型
    //(5):因为register修饰的变量可能存放在寄存器中不存放在内存中，所以不能对寄存器变量取地址。因为只有存放在内存中的数据才有地址
    register char ch;
    register short int b;
    register int c;
    register float d = 3.1f;//错误的

    register int a;
    int *p;
//    p = &a;//错误的
    printf("%f\n", d);
    return 0;
}