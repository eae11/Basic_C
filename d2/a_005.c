#include <stdio.h>

int main() {
    char p = 0xff;
    printf("%d\n", p);//-1
    printf("%x\n", p);//ffffffff    高位补1   %x打印unsigned int

    unsigned char o = 0xff;//unsigned char转更长字节的类型比如unsigned int，因为是无符号数（总是大于等于0的数）转换，则在高位补0即可
    printf("%d\n", o);//255
    printf("%x\n", o);//ff  (000000ff)

    char l = 0b01111111;
    printf("%x\n", l);//7f (0000007f)
    return 0;
}
