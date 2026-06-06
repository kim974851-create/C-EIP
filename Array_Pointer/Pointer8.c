#include<stdio.h>
int main(void) {
    int a = 10, b = 20, c = 30;
    int* arr[3] = { &a, &b, &c};
    arr[0] = &c;
    arr[2] = &a;
    printf("%d %d %d\n", *arr[0], *arr[1], *arr[2]);
    return 0;
}