#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void help(void) {
    printf("*************************\n");
    printf("* ��������޷��˳�\n");
    printf("* �밴������ĸ�û�����\n");
    printf("* ���������ʼ����,��������ĸ��ʼ��ʱ!\n");
    printf("* �����������_��ʾ\n");
    printf("*************************\n");
}

int main() {
    char ch;
    char str[51] = "";//�ַ�����,����ÿ��Ԫ����26����ĸ֮һ  50�����һ����'\0'
    int i;
    int count;
    time_t start_time, end_time;
    while (1) {
        system("cls");
        help();
        fflush(stdout);
        ch = _getch();//�������ⰴ��
        srand(time(NULL));
        for (int i = 0; i < 50; ++i) {
            str[i] = rand() % 26 + 'a';//��֤���ɵ��������26����ĸ
        }
        str[50] = '\0';
        printf("%s\n", str);//�����ɵ���ĸ��ӡ����
        count = 0;
        for (int i = 0; i < 50; ++i) {
            ch = _getch();
            if (i == 0) {
                start_time = time(NULL);//��ӡ��һ����ĸ��ʼ��ʱ
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
        printf("��ȷ�� %d %c\n", count * 100 / 50, '%');
        printf("��ʱ%ld��\n", end_time - start_time);
        printf("���ո�����һ��,��esc�˳�\n");
        //����һ����Ϸ�����ѭ�� ���ո�����һ��,��esc�˳�
        while (1) {

            ch = _getch();
            if (ch == ' ') {
                break;//�������ѭ��
            }
            if (ch == 27)//esc
            {
                return 0;
            }

        }

    }

    return 0;
}
