#include <stdio.h>
int main(void) {
    int num = -3;
    if (num > 0) {
        printf("plus");
    }
    else if (num == 0) {
        printf("zero");
    }
    else {
        printf("minus");
    }
}