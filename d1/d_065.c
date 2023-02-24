#include <stdlib.h>
#include <stdio.h>

int main() {
    //1.先定义结构体类型，再去定义结构体变量
    struct stu {
        int num;
        char name[20];
        char sex;
    };
    struct stu lucy, bob, lilei;

    //2.在定义结构体类型的时候顺便定义结构体变量，以后还可以定义结构体变量
    struct stu1 {
        int num;
        char name[20];
        char sex;
    } tom, jack, pink;

    //3.在定义结构体类型的时候，没有结构体类型名，顺便定义结构体变量，因为没有类型名，所以以后不能再定义相关类型的数据了
    struct {
        int num;
        char name[20];
        char sex;
    } luci, toa;

    //4.
    typedef struct stu3{
        int num;
        char name[20];
        char sex;
    } STU;
    STU kkk,lll;//STU kkk和struct stu3 kkk是等价的

    return 0;
}