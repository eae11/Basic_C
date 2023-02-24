#include <stdlib.h>
#include <stdio.h>

struct stu {
    int num;
    char name[20];
};

int main() {
    struct stu boy = {101, "lilei"};
    struct stu *p;
    p = &boy;
    printf("%d\n", sizeof(p));
    printf("%d\n", boy.num);
    printf("%d\n", (*p).num);
    printf("%d\n", p->num);
    return 0;
}