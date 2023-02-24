#include <stdio.h>

int main() {
    int a[5] = {0, 1, 2, 3, 4};
    int *p, *q;
    p = &a[1];
    q = &a[4];
    /*两个相同类型的指针指向同一个数组,比较大小才有意义
     后面元素的地址大于前面的*/
    if (p > q) {
        printf("p>q\n");
    } else {
        printf("q>p\n");//走这里
    }
    /*两个相同类型的指针指向同一个数组,做减法才有意义*/
    p = &a[0];
    q = &a[3];
    printf("%d\n", q - p);//3  中间相隔三个元素
//    printf("%d\n",q);
//    printf("%d\n",p);
//    printf("%x\n",q);
//    printf("%p\n",q);

    /*两个相同类型的指针才可以相互赋值(void *类型除外)
     * 类型不同想要相互赋值,必须进行强转*/
    return 0;
}

