#include<stdio.h>
typedef struct {
    char name[10];
    int score;
} Subject;
int main(void) {
    Subject sub[3] = { {"C", 70}, {"DB", 80}, {"OS", 90}};
    int total = 0;
    total = total + sub[0].score;
    total = total + sub[1].score;
    total = total + sub[2].score;
    printf("%d\n", total);
    return 0;

}

