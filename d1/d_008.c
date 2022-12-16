#include <stdio.h>

/*
自增自减运算符
 */
int main() {
    int i = 3;
    int num;
    num = (++i) + (++i) + (++i);// 5+5+6(gcc)  不同编译器采取的策略不一样, visual studio 6+6+6
    printf("%d %d\n", num, i);//16 6

    int k = 3;
    int num2 = (k++) + (k++) + (k++);//4+4+4
    printf("%d %d\n", num2, k);//12 6
    return 0;
}
