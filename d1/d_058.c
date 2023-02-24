#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
 char *strchr(const char *s,int c)
 功能:在s字符串中找首次出现ascii码为c的字符返回首次出现的字符的地址 找不到返回NULL

 char *strrchr(const char *s,int c)
 功能:末次匹配
 */
int main() {
    char *str1 = "hellowawdadadaopggapojgop";
    char *p;
    p = strchr(str1, 'w');
    if (p != NULL) {
        printf("%s\n", p);//wawdadadaopggapojgop
        printf("%d\n", p - str1);//5  两个指针相减 说明w在索引为5的地方(0开始)
    }
    printf("%s\n", "-------------------");
    p = strrchr(str1, 'o');
    if (p != NULL) {
        printf("%s\n", p);//op
        printf("%d\n", p - str1);//23  o索引为23
    }

    printf("%d\n", str1 - p + strlen(str1) - 1);//1   o在索引倒数第1的地方(0开始)

    //统计helloworldhelloworldhelloworld字符串中字符w的个数以及位置
    char *str = "helloworldhelloworldhelloworld";
    int num = 0;
    char *p2 = str;
    int index = 0;
    while (*p2 != '\0') {
        if (*p2 == 'w') {
            num++;
            printf("第%d个w的位置%d\n", num, index);
        }
        index++;
        p2++;
    }
    printf("w的个数%d\n", num);
    return 0;
}