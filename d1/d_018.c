#include <stdio.h>

void m1() {
    int a;
    static int b;
    printf("%d\n", a);//随机值
    printf("%d\n", b);//0
}

void m2() {
    static int num = 3;//静态局部变量不赋初值默认0,第一次调用函数赋初值,函数结束后不释放,以后再调用不赋初值,用原来的值 作用范围:自己代码块
    num++;
    printf("num=%d\n", num);
}

int main() {


    m2();
    m2();
    m2();

    m1();
    return 0;
}

