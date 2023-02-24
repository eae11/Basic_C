#include <stdio.h>

void swap1(int x, int y) {
    int temp;
    temp = x;//x和y都是临时的局部变量,并不会影响a,b
    x = y;
    y = temp;
}

void swap2(int *x, int *y) {
    int temp;
    temp = *x;//通过指针直接操作的是内存中a,b的值
    *x = *y;
    *y = temp;
}

int main() {
    int a = 10, b = 20;
    swap1(a, b);
    printf("%d %d\n", a, b);//10 20
    swap2(&a, &b);
    printf("%d %d\n", a, b);//20 10
    return 0;
}