#include <stdio.h>

/*定义宏用define去定义
宏是在预编译的时候进行替换。
  #define PI 3.14
    在预编译的时候如果代码中出现了PI就用3.14去替换。
    宏的好处:只要修改宏定义，其他地方在预编译的时候就会重新替换。
    作用范围:从定义的地方到文件末尾 如果想终止宏的定义范围
    #undef PI//终止PI的作用
*/
# define PI 3.14

int main() {

    printf("%f\n", PI);
#undef PI;
#define PI 3.145

    printf("%f\n", PI);
    return 0;
}

