#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int msg_deal(char *msg_src, char *msg_done[], char *str) {
    int i = 0;
    msg_done[i] = strtok(msg_src, str);
    while (msg_done[i] != NULL) {
        i++;
        msg_done[i] = strtok(NULL, str);
    }
    return i;
}

int main() {
    char str[100] = "+GMGR:REC UNREAD,+8613466630259,98/10/01,18:22:11+00,AEDADA";
    char *p[5];
    int num = 0;
    num = msg_deal(str, p, ",");
    printf("%d\n", num);
    /*for (int i = 0; i < num; ++i) {
        printf("%s\n", p[i]);
    }*/
    printf("手机号:%s\n", p[1] + 3);
    printf("日期:%s\n", p[2]);
    *(p[3] + 8) = '\0';
    printf("时间:%s\n", p[3]);
    printf("内容:%s\n", p[4]);
    return 0;
}