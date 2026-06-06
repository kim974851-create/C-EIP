#include<stdio.h>
int main(void) {
    int arr[3] = {5, 7, 9};
    int *p = arr + 1;
    printf("%d %d\n", *p, *(p - 1));
    return 0;
}