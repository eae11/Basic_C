#include <stdio.h>

/*
三目运算符  逗号运算符
 */
int main() {
    int a;
    a = (3 < 5 ? 8 : 9);//三目运算符
    printf("%d\n", a);

    int num;
    num = (5, 6);//逗号运算符 结果是后面表达式的结果
    printf("%d\n", num);
    return 0;
}
