#include <stdio.h>
int main(void) {
    int age = 15;
    int height = 140;
    if (age >= 14 && height >= 150) {
        printf("A");
    }
    else if (age >= 14 || height >= 150) {
        printf("B");
    }
    else {
        printf("C");
    }
    return 0;
}
