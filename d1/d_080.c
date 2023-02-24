#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
char *fgets(char *s, int n, FILE *stream);
功 能:  从流中读取一字符串
参 数：  char *s        保存读取数据的字符串
             int n          读n-1个字符;
             FILE *stream   要获取字符串的文件流
返回值： 成功s所指的字符串 ，失败出错或遇到文件结束返回NULL
补 充：从流stream读n-1个字符，或遇换行符为止，把读出的内容，存入s中。与gets不同，fgets在s未尾保留换行符\n。

int fputs(char *str, FILE *stream);送一个字符串到一个流中 把str所指的以'\0'结尾的字符串送入流中，不加换行符'\n'，不拷贝串结束符'\0'。
 str    要输出的字符串
 stream  要输出的流

int fwrite(void *ptr, int size, int nitems, FILE *stream);
 参 数：void *ptr       要写入的内容
        int size       每块数据大小,以字节为单位
        int nitems     写入多少块数据
        FILE *stream   要写入的文件流
返回值：实际写入的块数

int fread(void *ptr, int size, int nitems, FILE *stream);
  void *ptr     存放读取的数据的空间
   int size      每块数据大小,以字节为单位
   int nitems    读多少块
   FILE *stream  读取的数据流
返回值：实际读到的块数

int fseek(FILE *stream, long int offset, int whence);
stream 是一个指向 FILE 结构的指针，它代表了将要移动指针的文件。
offset 是一个长整型值，表示文件指针将要被移动的字节数。
whence 是一个整数值，指定了 offset 的含义和相对位置。它可以有以下值：
SEEK_SET：从文件开头偏移 offset 个字节
SEEK_CUR：从当前位置偏移 offset 个字节
SEEK_END：从文件末尾偏移 offset 个字节
fseek() 函数返回值为 0 表示移动成功，非 0 表示移动失败。
例如，如果你想将文件指针移动到文件开头后的第 100 个字节处，你可以使用以下代码：
 fseek(file, 100, SEEK_SET);

 * */
int main() {
    FILE *stream;

    char string[] = "This is a test";

    char msg[20] = {"\0"};

    stream = fopen("..\\d1\\2.txt", "w+");

    fwrite(string, strlen(string), 1, stream);  //将字符串写入文件中

    fseek(stream, 0, SEEK_SET);  //将文件的句柄定位到文件头部
    //从流中读取字符串
    fgets(msg, strlen(string) + 1, stream);

    //从文件流中获取字符串，并将读取的字符串保留在msg中
    printf("%s\n", msg);


    char *s2 = "dada";
    fputs(s2, stdout);
    fclose(stream);


    return 0;
}