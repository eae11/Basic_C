#include <stdio.h>
#include <process.h>

/*
字符数组
 */
int main() {
    char c1[] = {'c', ' ', 'p', '\0', 'p'};
    char c2[] = "c p";//用字符串方式赋值会自动在结尾加个'\0'
    printf("%d\n", sizeof(c1));//5
    printf("%d\n", sizeof(c2));//4
    printf("%s\n", c1);//遇到'\0停止打印'
    printf("%s\n", c2);//把c2首地址传进去遇到'\0停止打印'
    fflush(stdout);
    char str[15];
    scanf("%s", &str);
    printf("%s\n", str);
    return 0;
}
