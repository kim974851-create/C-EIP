#include <stdio.h>
int main(void) {
    int n = 3;
    do {
        printf("%n", n);
        n--;
    }while (n > 0);
    return 0;
}