#include <stdio.h>

/*
 一维数组指针配合二维数组来用
 */
void fun(int (*p)[5]) {
    p[2][1] = 200;
    printf("%d\n", p[2][1]);
    printf("%d\n", *(*(p + 2)+1));
}
//如果非要用二维数组指针来接受的话
void fun2(int (*p)[3][5]) {
    printf("%d\n", *(*(*(p) + 2)+1));
    printf("%d\n", p[0][2][1]);
}

/*
二维数组指针配合三维数组来用 依次类推
int (*p) [4][5]

int a[3][4][5]
int b[4][4][5]
int c[6][4][5]

 p=a;
 p=b;
 p=c;
 */
int main() {
    int a[3][5] = {{1,  2, 3, 4, 5},
                   {0,  0, 0, 0, 0},
                   {11, 6, 7, 8, 10}};
//    int k = 3;
//    int m = 5;
//    for (int i = 0; i < k; ++i) {
//        for (int j = 0; j < m; ++j) {
//            printf("%d\n", a[i][j]);
//        }
//    }
    printf("%d\n", a[1][2]);//0
    printf("%d\n", a[2][1]);//6
    fun(a);//一维数组指针

    fun2(&a);//二维数组指针
    return 0;
}