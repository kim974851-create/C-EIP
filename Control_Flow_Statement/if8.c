#include<stdio.h>
int main(void) {
    int a = 12;
    if (a % 3 == 0) {
        if (a % 2 == 0) {
            printf("A");
        }
        else {
            printf("B");
        }
    }
    else {
        printf("C");
    }
    return 0;
}
