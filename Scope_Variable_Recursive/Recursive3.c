#include<stdio.h>
int func(int n) {
    if (n <= 1)return 1;
    return n + func(n -2);
}
int main(void) {
    printf("%d\n", func(6));
    return 0;
}