#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void help() {
    printf("***************************************\n");
    printf("��ϰ������Ϸ�����������ʼ\n");
    printf("�������_��ʾ\n");

}

int main() {
    int ch;
    int count = 0;
    time_t start_time, end_time;
    char str[51];
    while (1) {
        system("cls");
        help();
        ch = _getch();
        srand(time(NULL));
        count = 0;
        for (int i = 0; i < 50; ++i) {

            str[i] = rand() % 26 + 'a';
        }
        str[50] = '\0';
        printf("%s\n", str);
        for (int i = 0; i < 50; ++i) {
            ch = _getch();
            if (i == 0) {
                start_time = time(NULL);
            }
            if (ch == str[i]) {
                count++;
                printf("%c", ch);
            } else {
                printf("_");
            }
        }
        end_time = time(NULL);
        printf("\ncount=%d\n", count);
        printf("׼ȷ�� %d %c\n", count * 100 / 50, '%');
        printf("��ʱ%ld\n", end_time - start_time);
        printf("���¿ո������Ϸ,��esc�˳�\n");
        while (1) {
            ch = _getch();
            if (ch == ' ') {
                break;
            }
            if (ch == 27) {
                return 0;
            }
        }

    }

    return 0;
}