#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct stu {
    int num;
    char name[20];
    char sex;
    char *addr;
};

int main() {
    //可以初始化一部分必须得按前后顺序
    struct stu boy = {
            100,
            "lilei",
    };
    struct stu lucy = {
            101,
            "lucy",
            'm',
            "北京"
    };

    struct stu bob;
    bob.num = 100;
    printf("%d\n", bob.num);
//    bob.name = "bbb";//错误因为数组名是个常量
    strcpy(bob.name, "bob");
    printf("%s\n", bob.name);
//    strcpy(bob.addr, "shanghai");//不要这样 因为bob.addr是个野指针
    bob.addr = "shanghai";
    printf("%s\n", bob.addr);

    printf("%d\n", sizeof(bob));//字节对齐
    printf("%d\n", sizeof(bob.num));
    printf("%d\n", sizeof(bob.name));
    printf("%d\n", sizeof(bob.sex));
    printf("%d\n", sizeof(bob.addr));



    return 0;
}