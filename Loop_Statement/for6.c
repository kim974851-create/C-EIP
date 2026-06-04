#include <stdio.h>
int main(void) {
    int sum = 0;
    for (int i = 1; i <= 15; i++) {
        if (i >= 5 && i <= 10) {
            sum += i;
        }
    }

    printf("%d\n", sum);
    return 0;
}


