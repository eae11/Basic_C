#include <stdio.h>

void fun1(int *p) {//形参写成 int p[]也可以  编译器都认为是int *的指针
    printf("%d\n", p[0]);//1
    *(p + 1) = 100;
}

void fun2(int (*p)[4], int x, int y) {//形参写成 int p[][4] 都认为是int (*)[4]类型的指针
    printf("%d\n", p[1][2]);//3
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            printf("%d", p[i][j]);//*(*(p+i)+j)    *(p+i)可理解为先是一维数组指针降级成了整型指针然后+j  再降级成了整型
        }
        printf("\n");
    }
}


void fun3(char **q, int x) {//形参写成char *q[] 都认为是char **q
//void fun3(char *q[], int x) {
    for (int i = 0; i < x; ++i) {
//        printf("%s\n", *(q + i));
        printf("%s\n", q[i]);
    }

}

int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};//数组每个元素是整型的所以函数的形参是整型指针
    fun1(a);//或者写成&a[0]    a[0]是int类型   &a[0]则是int *类型
    printf("%d\n", a[1]);//100

    int b[3][4] = {{6, 6, 6, 6},//数组每个元素是一维数组所以函数的形参是一维数组指针
                   {1, 2, 3, 4},
                   {5, 6, 7, 8}};
    fun2(b, 3, 4);//b是一维数组指针

    char *p[3] = {"hello", "world", "kitty"};//数组每个元素是char *类型,所以函数的形参是指针的指针
    fun3(p, 3);//p 就是 &p[0] p[0]是char *类型  &p[0]则是char**

    return 0;
}