#include<stdio.h>
int main() {
    int a[5]= {7, 3, 9, 2, 8};
    int i;
    int max = a[0];
    for (i = 1; i < 5; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    printf("%d\n", max);
    return 0;

}