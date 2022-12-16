#include <stdio.h>
#include "link_014_1.h"
#include "link_014_2.h"

//上面这种方式或者下面这种方式
//extern int max(int x, int y);
//extern int min(int x, int y);
int main() {
    int num1, num2;
    num1 = max(3, 5);
    num2 = min(1, 2);
    printf("%d\n", num1);
    printf("%d\n", num2);
    return 0;
}

