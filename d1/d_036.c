#include <stdio.h>

int main() {
    //数组里存放的都是这些字符串的首地址  字符串存放在文字常量区
    char *name[5] = {"hello", "beijing", "shanghai", "guangdong", "nihao"};
    int i;
    for (int i = 0; i < 5; ++i) {
        printf("%s\n", name[i]);
    }
    return 0;
}