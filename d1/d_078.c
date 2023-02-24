#include <stdlib.h>
#include <stdio.h>

/*
 * FILE*fopen(const char*path, const char*mode);
 * path绝对路径或者相对路径,mode  r  w  a   可读可写追加  带"+"就是可读可写,带b就是以二进制形式打开
 *
 * fclose() 关闭一个流
 */
int main() {
    FILE *f1;
    f1 = fopen("d:\\c.txt", "w+");
    if (f1 == NULL) {
        perror("fopen");
        return 0;
    }
    printf("打开成功\n");
    int ret;
    ret = fclose(f1);
    if (ret == 0) {
        printf("关闭成功\n");
    } else {
        printf("关闭失败\n");
    }
    return 0;
}