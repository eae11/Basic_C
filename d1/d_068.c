#include <stdlib.h>
#include <stdio.h>

struct stu {
    int num;
    char name[20];
    char sex;
};

int main() {
    struct stu boy = {
            101, "lilei",
            'm'
    };
    struct stu boy2;
    boy2 = boy;//结构体类型相同才能赋值
    printf("%d %s %c\n", boy2.num, boy2.name, boy2.sex);
    return 0;
}