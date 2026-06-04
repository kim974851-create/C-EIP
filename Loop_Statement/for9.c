#include<stdio.h>
int main(void) {
    for (int i = 1; i <= 6; i++) {
        if (i == 2 || i == 5)
            continue;
        printf("%d ", i);
    }
    return 0;
}