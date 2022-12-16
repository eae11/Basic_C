#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void help() {
    printf("***************************************\n");
    printf("练习打字游戏按下任意键开始\n");
    printf("输错则以_表示\n");

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
        printf("准确率 %d %c\n", count * 100 / 50, '%');
        printf("用时%ld\n", end_time - start_time);
        printf("按下空格继续游戏,按esc退出\n");
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