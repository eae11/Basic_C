#include <stdlib.h>
#include <stdio.h>

int main() {
    FILE *fp = fopen("D:\\a.txt", "w+");

    if (!fp) {

        printf("can not open the file\n");

        return 0;

    }
//    fprintf(fp,"abcdefghijklmnopqrstuvwxyz");
    fputs("abcdefghijklmnopqrstuvwxyz", fp);
    int first = ftell(fp);
//    fseek(fp,0,SEEK_SET);
    rewind(fp);
    int second = ftell(fp);
    printf("First pointer is %d,after call the rewind() is %d\n", first, second);
    fclose(fp);
    return 0;
}