

#include <stdio.h>

/*自动类型转换*/
int main() {
    /*当表达式中出现了char . short int . int 类型中的一种或者多种，没有其他类型了
参加运算的成员全部变成int类型的参加运算，结果也是int类型的
*/
    printf("%d\n", 5 / 2);

    printf("%f\n", 5.0 / 2);//当表达式中出现了带小数点的实数，参加运算的成员全部变成double类型的参加运算，结果也是double型。

    /*C语言中有符号数和无符号数进行运算（包括逻辑运算和算术运算）默认会将有符号数看成无符号数进行运算，其中算术运算默认返回无符号数，逻辑运算当然是返回0或1了。
     注:上述规则对比int小的数据类型不成立
      因为会先转成int 而且会以带符号数来看待
*/
    int a = -8;//这里方便运算假设8位 -8补码1111 1000
    unsigned int b = 7;    //7补码0000 0111
    if (a + b > 0) {  //两者相加结果为 1111 1111 按正常来讲是-1的补码(会被当成负数来看待) 这里会当成无符号数来看待也就是 ff (大于0)
        printf("a+b>0\n");//走这里
    } else {
        printf("a+b<0\n");
    }
    printf("%x\n", (a + b));//无符号打印ffffffff
    printf("%d\n", (a + b));//按有符号来看待就是-1
    //--------------------------------
    char k = -8;
    unsigned char l = 7;
    if (k + l > 0) {  //以有符号数来看待
        printf("k + l >0\n");
    } else {
        printf("k + l <0\n");//走这里
    }
    printf("%x\n", (k + l));//无符号打印ffffffff
    printf("%d\n", (k + l));//按有符号来看待就是-1
    /*
     如果按照上面unsigned int和int进行运算的逻辑，这里unsigned char和char进行运算，应该也会打印p+q>0,实际却不会
     因为会转成int 而且会以有符号数来看待
     如果是unsigned的类型转换成int类型，高位补0
     如果是signed的类型转换成int类型，如果原来最高位是1则补1，如果是0则补0。
     */
    char p = -16;//转为int后 补码1111 1111 1111 1111 1111 1111 1111 0000
    unsigned char q = 14;//转为int后 补码0000 0000 0000 0000 0000 0000 0000 1110

    if (p + q > 0) {//会以有符号数来看待
        printf("p+q>0\n");
    } else {
        printf("p+q<0\n");//走这里
    }

    printf("p+q=%x\n", (p + q));//ffff fffe
    printf("p+q=%d\n", (p + q));//-2


    unsigned char m = -16; //转为int后高位补0  补码 0000 0000 0000 0000 0000 0000 1111 0000
    char s = 14;//补码                            0000 0000 0000 0000 0000 0000 0000 1110
    if (m + s > 0) {//会以带符号数来看待
        printf("m+s>0\n");//走这里
    } else {
        printf("m+s<0\n");
    }
    printf("m+s=%x\n", (m + s));//这里结果是fe  0000 00fe(前面0被省略了)
    printf("%d\n", sizeof(m + s));//4 证明转成了int
    printf("m+s=%d\n", (m + s));//254

    unsigned char x = -1;
    char v = 3;
    char ai = 0;
    ai = x + v;
    printf("%d\n", sizeof(x));//1
    printf("%d\n", sizeof(x + v));//4
    printf("%d\n", sizeof(ai));//1


    //在赋值语句中等号右边的类型自动转换为等号左边的类型
    int c;
    float f = 5.8f;
    a = f;
    printf("%d", a);//5
    return 0;

}

