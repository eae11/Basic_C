#include <stdio.h>

int main() {
    int a[5] = {0, 1, 2, 3, 4};
    int *p;
    p = a;
    printf("a[2]= %d\n", a[2]);
    printf("p[2]= %d\n", p[2]);
    printf("*(p + 2)= %d\n", *(p + 2));
    printf("*(a + 2)= %d\n", *(a + 2));
    printf("%p\n", p);
    printf("%p\n", p + 2);//相差8个字节

    return 0;
}

