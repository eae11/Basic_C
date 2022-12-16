#include <stdio.h>

int main() {
    int buf[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year, mouth, day;
    printf("please input year month day\n");
    fflush(stdout);
    scanf_s("%d %d %d", &year, &mouth, &day);
    int sum = 0;
    for (int i = 0; i < mouth - 1; ++i) {
        sum += buf[i];
    }
    sum += day;
    //闰年天数+1
    if ((mouth > 2) && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) {
        sum = sum + 1;
    }
    printf("%d\n", sum);
    return 0;

}
