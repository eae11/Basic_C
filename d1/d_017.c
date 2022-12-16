#include <stdio.h>

void m1(int x) {
    x++;
    printf("%d\n", x);//6
}

int main() {
    int n = 5;//普通局部变量   函数内部定义  不赋初值,值是随机的  作用范围 自己的代码块里  生命周期:函数结束就释放
    {
        int l;
    }
    m1(n);
    printf("%d\n", n);//5
    return 0;
}

