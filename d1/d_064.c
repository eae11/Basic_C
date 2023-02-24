#include <stdlib.h>
#include <stdio.h>

int strlen(const char *s) {
    int i = 0;
    while (*s != '\0') {
        s++;
        i++;
    }
    return i;
}

char *strcpy(char *dest, const char *src) {
    char *p1 = dest;
    const char *p2 = src;
    while (*p2 != '\0') {
        *p1 = *p2;
        p2++;
        p1++;
    }
    *p1 = '\0';
    return dest;

}

int atoi(const char *str) {
    int i = strlen(str);//先拿到长度
    int n = 0;//最终数
    int temp = 0;
    while (*str != '\0') {
        temp = (*str - '0');
        for (int j = 0; j < i - 1; ++j) {//从最高位开始乘以i-1次10 将每位的结果保存在temp里
            temp = temp * 10;
        }
        n += temp;
        str++;
        i--;
    }
    return n;
}

int atoi2(const char *str) {
    int n = 0;
    while (*str != '\0') {
        n = n * 10 + (*str - '0');
        str++;
    }
    return n;
}

int main() {
    char p[] = "helloworld";
    int num;
    num = strlen(p);
    printf("%d\n", num);//10

    char p2[10];
    strcpy(p2, "dadada");
    printf("%s\n", p2);


    num = atoi("123");
    printf("%d\n", num);

    num = atoi2("123");
    printf("%d\n", num);
    return 0;
}