#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void help(void) {
  printf("*************************\n");
  printf("* 输入过程无法退出\n");
  printf("* 请按所给字母敲击键盘\n");
  printf("* 按任意键开始测试,按下首字母开始计时!\n");
  printf("* 输入出错则以_表示\n");
  printf("*************************\n");
}

int main() {
  char ch;
  char str[51] = "";//字符数组,里面每个元素是26个字母之一  50个最后一个放'\0'
  int i;
  int count;
  time_t start_time, end_time;
  while (1) {
    system("cls");
    help();
    fflush(stdout);
    ch = _getch();//输入任意按键
    srand(time(NULL));
    for (int i = 0; i < 50; ++i) {
      str[i] = rand() % 26 + 'a';//保证生成的随机数是26个字母
    }
    str[50] = '\0';
    printf("%s\n", str);//把生成的字母打印出来
    count = 0;
    for (int i = 0; i < 50; ++i) {
      ch = _getch();
      if (i == 0) {
        start_time = time(NULL);//打印第一个字母开始计时
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
    printf("正确率 %d %c\n", count * 100 / 50, '%');
    printf("用时%ld秒\n", end_time - start_time);
    printf("按空格再玩一次,按esc退出\n");
    //玩完一次游戏后进入循环 按空格再玩一次,按esc退出
    while (1) {

      ch = _getch();
      if (ch == ' ') {
        break;//继续外层循环
      }
      if (ch == 27)//esc
      {
        return 0;
      }

    }

  }

  return 0;
}