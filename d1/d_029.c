#include <stdio.h>

/*
动态库文件制作
gcc -shared link_028.c -o liblink_028.so
gcc d_028.c liblink_028.so -o d_028
//可以指定头文件以及库文件的路径
gcc d_028.c -o d_028 -L ..\test -l link_028 -I ..\test
-L 是指库文件的路径
-l 指定找哪个库,指定的只要库文件后面lib后面.a前面的部分
-I 指定头文件的路径
 */
int main() {

    return 0;
}

