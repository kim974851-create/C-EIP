#include <stdio.h>
int main(void) {
    int i = 1;
    int sum = 0;
    do {
        sum += i;
        i++;
    }while (i <= 5);
    printf("%d\n", sum);
    return 0;
}