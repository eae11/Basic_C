#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *src;
    char buffer[1024];
    src = fopen("..\\d1\\4.txt", "r+");
    if (src == NULL) {
        printf("无法打开文件\n");
        return 1;
    }

    int n=2;//插入位置
    int insert_pos = n*3;  // 实际插入点位置
    char insert_str[] = "打到啤酒";  // 插入字符串

    // 定位到插入点位置
    fseek(src, insert_pos, SEEK_SET);

    // 读取插入点后面的内容指针到最后了
    int size = fread(buffer, 1, sizeof(buffer), src);

    // 重新将指针移动到需要插入的位置
    fseek(src, insert_pos, SEEK_SET);

    //写入要插入的内容
    fputs(insert_str, src);

    // 将缓冲区中的内容写入文件
    fwrite(buffer, 1, size, src);
    // 关闭文件
    fclose(src);

    return 0;
}
