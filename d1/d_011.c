#include <stdio.h>

/*
数组
 */
int main() {
    int a[5];//定义数组长度为5,不初始化 5个随机数(野指针)
    int b[] = {1, 6, 9, 3};//直接给出数据
    printf("%d\n", sizeof(a));//20字节
    printf("%d\n", sizeof(b));//16字节
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); ++i) {
        printf("%d\n", a[i]);
    }
    for (int i = 0; i < sizeof(b) / sizeof(b[0]); ++i) {
        printf("%d\n", b[i]);
    }
    int d[5] = {2, 4, 3};//初始化赋值不够后面补0
    //建议这样初始化
    //int d[5] ={0};
    for (int i = 0; i < sizeof(d) / sizeof(d[0]); ++i) {
        printf("%d\n", d[i]);
    }
    //二维数组
    int c[3][2] = {//3行2列
            {1, 3},
            {4, 5},
            {7, 9}
    };
    printf("%d\n", sizeof(c));//24字节
    printf("%d\n", sizeof(c[0]));//8字节
    int m = sizeof(c) / sizeof(c[0]);
    int n = sizeof(c[0]) / sizeof(c[0][0]);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("c[%d] [%d]=%d\n", i, j, c[i][j]);
        }
        printf("\n");
    }

}
