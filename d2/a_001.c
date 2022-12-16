#include <stdio.h>

int main() {
    /*char c;
    scanf("%c", &c);
    printf("%d\n", c);

    scanf("%c", &c);
    printf("%d\n", c);*/
/*
 可以看出，第二个scanf函数执行了，并从缓冲区中得到了值（其实，这个值不是我们想要的），
 那么我们如何把缓冲区这个“马桶”里面的值冲掉呢？用fflush函数就可以了。如下：
 */
    char c;
    scanf("%c", &c);
    printf("%d\n", c);
    fflush(stdout);
    scanf("%c", &c);
    printf("%d\n", c);
    return 0;
}
