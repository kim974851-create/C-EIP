#include<stdio.h>
int main(void) {
    int arr[5] = {2, 4, 6, 8, 10};
    int *p = arr;
    printf("%d %d %d\n", p[0], p[2], p[4]);
    return 0;
}