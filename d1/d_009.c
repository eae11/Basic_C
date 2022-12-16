#include <stdio.h>

/*
控制语句
 */
int main() {
    //if
    printf("请输入成绩\n");
    fflush(stdout);
    float score = 0;
    scanf("%f", &score);
    if (score < 0 || score > 100) {
        printf("请输入正确的数\n");
    } else if (score < 60) {
        printf("不及格\n");
    } else if (score >= 60 && score < 80) {
        printf("良好\n");
    } else {
        printf("优秀\n");
    }

    //switch (表达式) 表达式只能是字符型和整型
    int n;
    printf("请输入一个1~7的数\n");
    fflush(stdout);
    scanf_s("%d", &n);
    switch (n) {
        case 1:
            printf("星期一\n");
            break;
        case 2:
            printf("星期二\n");
            break;
        case 3:
            printf("星期三\n");
            break;
        case 4:
            printf("星期四\n");
            break;
        case 5:
            printf("星期五\n");
            break;
        case 6:
            printf("星期六\n");
            break;
        case 7:
            printf("星期天\n");
            break;
        default:
            printf("输入错误\n");
            break;
    }
    //for
    /*
    for(表达式1;表达式2;表达式3)
     {//循环体

     } 第一次进入循环的时候执行表达式1,表达式1只执行一次,表达式2为真执行循环体,否则不执行,循环体执行完了执行表达式3
     */
    int q;
    for (q = 0; q < 10; ++q) {
        if (q == 5) {
            printf("-----\n");
        }
    }
    printf("%d\n", q);

    // while 循环
    int o = 0;
    int sum = 0;
    while (o < 100) {
        o++;
        sum += o;
    }
    printf("%d\n", sum);

    //do while循环
    int o2 = 0;
    int sum2 = 0;
    do {
        o2++;
        sum2+=o2;
    } while (o2 < 100);
    printf("%d\n", sum2);
}

