#include <stdlib.h>
#include <stdio.h>

int main() {
    FILE *f1;
    char buffer[1024];
    int insert_pos = 2; // 在第2个字符后面插入
//    f1 = fopen("..\\d1\\c.txt", "a+");//注意追加模式一开始指针就到末尾了 是移动不了指针的
//    f1 = fopen("..\\d1\\c.txt", "w+");//最好使用r+移动移动指针 w+会清空内容向前移动不了指针向后会前面的位置就是'\0'

    f1 = fopen("..\\d1\\c.txt", "r+");

    // 将文件指针移动到需要插入的位置
    printf("%d\n", fseek(f1, insert_pos, SEEK_SET));

    //将后面的内容读入到缓冲区 指针也在往后走
    int len = fread(buffer, 1, sizeof(buffer), f1);//一字节一字节的读

    printf("%d\n", len);//成功读的块数

    // 重新将指针移动到需要插入的位置
    fseek(f1, insert_pos, SEEK_SET);

    //写入要插入的内容
    fputs("aa", f1);

    // 将缓冲区中的内容写入文件
    fwrite(buffer, 1, len, f1);
    fclose(f1);
    return 0;
}