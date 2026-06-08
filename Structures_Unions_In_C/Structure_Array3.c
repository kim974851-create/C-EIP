#include<stdio.h>
struct Exam {
    int score;
};
int main(void) {
    struct Exam e[4] = {10, 20, 30, 40};
    int i;
    int total = 0;
    for (i = 0; i < 4; i++) {
        total = total + e[i].score;
    }
    printf("total=%d\n", total);
    printf("avg=%d\n", total /4);
    return 0;
}