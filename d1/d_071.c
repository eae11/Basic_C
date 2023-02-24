#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct stu {
    int num;
    char name[20];
    double score;
} STU;

void fun(STU *p) {
    p->num = 101;
    strcpy(p->name, "李四");
    p->score = 88.1f;

}

void fun2(STU *p, int n) {
    for (int i = 0; i < n; ++i) {
        printf("%d %s %f\n", p[i].num, p[i].name, p[i].score);
    }
}

int main() {
    STU girl;
    fun(&girl);
    printf("%d %s %f\n", girl.num, girl.name, girl.score);

    STU edu[3] = {
            {101, "lucy",  88.3f},
            {102, "bob",   78.6f},
            {103, "lilei", 93.7f}

    };
    fun2(edu, sizeof(edu) / sizeof(edu[0]));

    printf("%p\n", &girl);//STU *
    printf("%p\n", &girl.num);//int *


    return 0;
}