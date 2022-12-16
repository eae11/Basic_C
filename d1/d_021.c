#include <stdio.h>

extern int funB(void);

extern int funA(void);

int num = 3;

int main() {
    int num = 5;
    printf("%d\n", num);//5
    printf("funA=%d\n", funA());//11
    printf("funB=%d\n", funB());//8
    return 0;
}


