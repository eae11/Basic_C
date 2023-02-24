#include <stdlib.h>
#include <stdio.h>

typedef struct stu {
    int num;
    char name[20];
    float score;
} STU;

int main() {
    STU edu[3] = {
            {101, "lucy", 78},
            {102, "lucq", 79},
            {103, "lucw", 80}
    };
    for (int i = 0; i < sizeof(edu) / sizeof(edu[0]); ++i) {
        printf("%d %s %f\n",edu[i].num,edu[i].name,edu[i].score);
    }
    return 0;
}