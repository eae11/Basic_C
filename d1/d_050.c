#include <stdio.h>

/*
 void*通用指针,任何类型的地址都可以给void*类型的指针变量赋值。32位下,4个字节
 void* q;
 int* p;
 q=p; //不用强制转换

 有个函数叫memset
void memset(void *s,int c,size_t n);
这个函数的功能是将s指向的内存前n个字节，全部赋值为c。
memset,可以设置字符数组、整型数组、浮点型数组的内容，所以第一个参数，就必须是个通用指针
它的返回值是s指向的内存的首地址，可能是不同类型的地址。所以返回值也得是通用指针

 */
int main() {
    char *p;
    p = NULL;
    printf("%p\n", p);
    return 0;
}