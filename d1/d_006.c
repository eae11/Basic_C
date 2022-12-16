#include <stdio.h>

/*强制类型转换*/
int main() {
    float x = 3.6f;
    int i = 0;
    i = (int) x;
    printf("%d\n", i);
    printf("%f\n", x);

    return 0;

}