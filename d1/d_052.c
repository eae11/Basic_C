#include <stdio.h>
#include <stdlib.h>

/*
 malloc函数
 void*malloc(unsigned int size);
在内存的动态存储区(堆区)中分配一块长度为size字节的连续区域,
 函数原型返回void*指针，使用时必须做相应的强制类型转换，分配的内存空间内容不确定，一般使用memset初始化。
 返回值:分配空间的起始地址(分配成功)
        NULL(分配失败)
        调用完malloc后,一定要判断一下,是否申请内存成功
        多次malloc申请的内存,第一次和第二次申请的内存不一定是连续的
 free函数
 void free(void*ptr);
 释放ptr指向的内存
 注意:ptr指向的内存必须是malloc calloc relloc动态申请的内存
 例
 char* p=(char*)malloc(100)
 free(p);
 (1)free后，因为没有给p赋值，所以p还是指向原先动态申请的内存。但是内存已经不能再用了，p变成野指针了
 (2)一块动态申请的内存只能free一次，不能多次free
 */
int main() {
    int *p;
    int n;
    printf("请输入你要申请的int数组的元素个数\n");
    fflush(stdout);
    scanf_s("%d", &n, 4);
    p = (int *) malloc(n * 4);
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