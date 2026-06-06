#include<stdio.h>
int main() {
    int a[2][3] = { {1, 2, 3}, {4, 5, 6}};
    int *p = &a[0][0];
    printf("%d ", p[1]);
    printf("%d ", p[3]);
    printf("%d\n", *(p + 4));
    return 0;
}
