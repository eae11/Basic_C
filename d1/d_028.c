#include <stdio.h>
#include <process.h>
#include "link_028.h"

/*
注意:linux下
静态库:lib库名.a
动态库:lib库名.so(shared object)
windows下
静态库:lib库名.lib
动态库:lib库名.dll(dynamic link library)
 */


/*静态库文件制作
 *
gcc -c link_028.c -o link_028.o  //先将link_028.c打包成二进制
ar rc liblink_028.a link_028.o  //制作静态库 link_028.a
gcc -static d_028.c liblink_028.a -o d_028  //静态编译 生成d_028.exe

 //可以指定头文件以及库文件的路径
gcc -static d_028.c -o d_028 -L ..\test -l link_028 -I ..\test
-L 是指库文件的路径
-l 指定找哪个库,指定的只要库文件后面lib后面.a前面的部分
-I 指定头文件的路径

 //动态编译 生成d_028.exe
gcc d_028.c link_028.c -o d_028
*/
int main() {
    int a = 10, b = 20, num1 = 0, num2 = 0;
    num1 = max(a, b);
    num2 = min(a, b);
    printf("%d\n", num1);
    printf("%d\n", num2);
    system("pause");
    return 0;
}

