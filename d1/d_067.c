#include <stdlib.h>
#include <stdio.h>

struct date {
    int year;
    int month;
    int day;
};
struct stu {
    int num;
    char name[20];
    char sex;
    struct date birthday;
};

int main() {
    struct stu boy = {
            101, "lycy",
            'f', .birthday.year=100, .birthday.month=200, .birthday.day=30
    };
    printf("%d\n",boy.birthday.year);
    printf("%d\n",boy.birthday.month);
    printf("%d\n",boy.birthday.day);
    boy.birthday.year = 2000;
    boy.birthday.month = 3;
    boy.birthday.day = 1;
    printf("%d\n",boy.birthday.year);
    printf("%d\n",boy.birthday.month);
    printf("%d\n",boy.birthday.day);
    return 0;
}