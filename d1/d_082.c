#include <stdlib.h>
#include <stdio.h>

struct stu {
    char name[10];
    int num;
    int age;
} boya[2], boyb[2];

int main() {
    FILE *f1;
    f1 = fopen("..\\d1\\3.txt", "wb+");
    if (!f1) {
        perror("fopen");
        return 1;
    }
    for (int i = 0; i < 2; ++i) {
        printf("请输入第%d个结构体的name num age\n", i);
        fflush(stdout);
        scanf("%s %d %d", boya[i].name, &boya[i].num, &boya[i].age);
    }

    fwrite(boya, sizeof(boya[0]), 2, f1);
    rewind(f1);
    fread(boyb, sizeof(boya[0]), 2, f1);



    printf("%s %d %d\n", boya[0].name, boya[0].num, boya[0].age);
    printf("%s %d %d\n", boya[1].name, boya[1].num, boya[1].age);
    printf("%s %d %d\n", boyb[0].name, boyb[0].num, boyb[0].age);
    printf("%s %d %d\n", boyb[1].name, boyb[1].num, boyb[1].age);
    fclose(f1);
    return 0;
}