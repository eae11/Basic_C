#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    /*把文件1的内容写到文件2*/
    FILE *f1, *f2;
//    f1 = fopen("..\\d1\\1.txt", "r+");//二进制打开的话写到s字符串里面换行符是\r\n 文本打开换行符是\n
    f1 = fopen("..\\d1\\1.txt", "rb+");//
    f2 = fopen("..\\d1\\2.txt", "wb+");
    fseek(f1, 0, SEEK_END);
    char *s;
    int len = ftell(f1);//文本打开的话文件会多算一个'\0' 二进制则不会
    printf("%d\n", len);
    s = malloc(len);

//    memset(s, 0, len);
    fseek(f1, 0, SEEK_SET);

    fread(s, 1, len, f1);
//    s[len - 1] = 'p';
//    fwrite(s, 1, len, f2);
    fwrite(s, 1, len, f2);

    fclose(f1);
    fclose(f2);


    /*把文件1的内容写到文件2*/
    FILE *a_file, *b_file;
    char c;
    // 写入 a.txt
    a_file = fopen("..\\d1\\a.txt", "w+");
    if (a_file == NULL) {
        printf("无法打开文件 a.txt\n");
        return 1;
    }
    printf("%d\n", ftell(a_file));
    fputs("I love you", a_file);

    printf("%d\n", ftell(a_file));
//    fseek(a_file,0,SEEK_SET);//与下面作用相同
    rewind(a_file);
    printf("%d\n", ftell(a_file));
    // 复制 a.txt 到 b.txt
    b_file = fopen("..\\d1\\b.txt", "w");
    if (a_file == NULL || b_file == NULL) {
        printf("无法打开文件 a.txt 或 b.txt\n");
        return 1;
    }
    while ((c = fgetc(a_file)) != EOF) {
        fputc(c, b_file);
    }
    fclose(a_file);
    fclose(b_file);

    FILE *f3;
    char s1[30];
    f3 = fopen("..\\d1\\1.txt", "r+");
    fgets(s1, 15, f3);//遇到/n停止
    printf("*%s*", s1);
    return 0;
}