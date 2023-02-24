#include <stdlib.h>
#include <stdio.h>

/*
 *  int fgetc(FILE *stream);从流中读取字符
 *  int putc(int ch, FILE *stream);输出一字符到指定流中
 *  int fgetchar(void);从标准输入流中读取字符
 *   int fputchar(char ch); 送一个字符到标准输出流(stdout)中，送一个字符到屏幕。等价于fputc(c,stdout);
 * */
int main() {
    FILE *f1, *f2;
    char ch;
    f1 = fopen("D:\\c.txt", "r+");
    if (f1 == NULL) {
        perror("fopen");
        return 0;
    }

    f2 = fopen("D:\\c2.txt", "w+");
    if (f2 == NULL) {
        perror("fopen");
        fclose(f1);
        return 0;
    }
    while ((ch = fgetc(f1)) != EOF) {
        fputc(ch, stdout);
        fputc(ch, f2);
    }

    fclose(f2);
    fclose(f1);
    return 0;
}
