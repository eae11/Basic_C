#include <stdio.h>

/*
 函数指针数组
 由若干个相同类型的函数指针变量构成的集合
 函数指针数组定义:返回值类型 (*数组名[元素个数]) (形参列表)
 int(*p[5])(int,int);
 定义了一个函数指针数组,数组名是p
元素p[0]~p[4]，每个元素都是函数指针变量，
每个函数指针变量指向的函数，必须有整型的返回值，两个整型参数。

 */


int max(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

int min(int x, int y) {
    if (x < y) {
        return x;
    } else {
        return y;
    }
}

int add(int x, int y) {
    return x + y;
}

int sub(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

int process(int(*p)(int, int), int x, int y) {
    int num;
    num = (*p)(x, y);
    return num;
}

int main() {
    int (*p[5])(int, int) ={max, min, add, sub, multiply};
    int num;
    num = (*p[0])(5, 10);
    printf("%d\n", num);//10
    num = (*p[1])(5, 10);
    printf("%d\n", num);//5
    num = (*p[2])(5, 10);
    printf("%d\n", num);//15
    num = (*p[3])(5, 10);
    printf("%d\n", num);//-5
    num = (*p[4])(5, 10);
    printf("%d\n", num);//50

    num = process(p[0], 6, 9);//函数指针作为参数,要用哪个函数就传哪个函数进去
    printf("%d\n", num);//9

    return 0;
}