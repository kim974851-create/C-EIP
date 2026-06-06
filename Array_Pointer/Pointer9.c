#include<stdio.h>
int main(void) {
    int x[3] = {5, 10, 15};
    int *p[3] = {&x[0], &x[1], &x[2] };
    *p[0] += 5;
    *p[1] += 5;
    *p[2] += 5;
    for (int i = 0; i < 3; i++) {
        printf("%d ", x[i]);
    }
    return 0;
}