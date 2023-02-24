#include <stdlib.h>
#include <stdio.h>

enum week {
    monday = 3, tuesday, wednesday, thursday, friday = 4, saturday, sunday
};

/*
枚举值是常量,不能在程序中用赋值语句再对它赋值例如: sun=5; mon=2; sun=mon;都是错误的.

枚举元素本身由系统定义了一个表示序号的数值默认是从0开始顺序定义为0，1，2…
如在week中，mon值为0，tue值为1，…,sun值为6

可以改变枚举值的默认值:如
enum week
{
mon=3，tue，wed，thu，fri=4，sat,sun
};
mon=3 tue=4,以此类推fri=4以此类推


 */
int main() {
    enum week workday;
    workday = monday;
//    workday=abd;//错误
    printf("%d\n", monday);
    printf("%d\n", tuesday);
    printf("%d\n", wednesday);
    printf("%d\n", thursday);
    printf("%d\n", friday);
    printf("%d\n", saturday);
    printf("%d\n", sunday);

    workday = 100;//虽然可以但尽量不要这样,一般都用枚举常量去赋值
    printf("%d\n", workday);

    return 0;
}