#include<stdio.h>
int main(void) {
    int a = 10, b = 3;
    int result;
    result = (a > b) ? a - b : b -a;
    printf("%d\n", result);
    return 0;
}
