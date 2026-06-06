#include<stdio.h>
int main() {
    int a[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int r_sum = 0;
    int c_sum = 0;
    for (int j = 0; j < 3; j++) {
        r_sum += a[0][j];
    }
    for (int i = 0; i < 2; i++) {
        c_sum += a[i][1];
    }
    printf("%d, %d\n", r_sum, c_sum);
    return 0;
}
