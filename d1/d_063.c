#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    //const修饰普通变量
    const int a = 1;//初始化的时候赋值,后面就不能再次赋值了

    //const修饰指针
    /*
     const char *str
    const写前面
    str指向的内存的内容不能通过str来修改
    但是str的指向别的地方

     char * const str
     const写后面
     str不能指向别的地方，
     但是str指向的内存的内容可以修改的

     */
    char buf[20] = "helloworld";
    const char *str = buf;
//    strcpy(str, "hellokitty");//虽然修改成功了但是有警告
//    *str = "w";//直接报错
    printf("%s\n", buf);

    printf("%s\n", "-----------------");

    char buf2[20] = "helloworld";
    char *const str2 = buf2;
//    str2 = "dadad";//不能指向别的地方
    *str2 = 'w';
    printf("%s\n", str2);

    const char *const str3;//不能指向别的地方也不能修改

    return 0;
}