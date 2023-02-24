#include <stdio.h>
#include <stdlib.h>

/*
   calloc函数
   函数定义:void* calloc(size_t nmemb,size_t size);
   size_t 实际是无符号整型，它是在头文件中，用typedef定义出来的。
    函数的功能:在内存的堆中，申请nmemb块，每块的大小为size个字节的连续区域
    函数的返回值:
    返回申请的内存的首地址（申请成功)
    返回NULL（申请失败)
malloc申请的内存，内存中存放的内容是随机的，不确定的，而calloc函数申请的内存中的内容为0
 */


int main() {
//    char *p = (char *) calloc(3, 100);//在堆中申请3块,每块大小为100个字节,即300个字节连续的区域
    int *p;
    int n;
    printf("请输入你要申请的int数组的元素个数\n");
    fflush(stdout);
    scanf_s("%d", &n, 4);//获取长度上限4个字节
    p = (int *) calloc(n, 4);
    if (p == NULL) {
        printf("申请失败\n");
    }
    for (int i = 0; i < n; ++i) {
//        *(p + i) = i;
        p[i] = i;
    }
    for (int i = 0; i < n; ++i) {
//        printf("%d\n", *(p + i));
        printf("%d\n", p[i]);
    }

    free(p);
    return 0;
}