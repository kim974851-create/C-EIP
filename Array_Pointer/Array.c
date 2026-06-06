#include <stdio.h>
int main(void) {
    int a[5] = {5, 10, 20, 25, 30};
    a[2] = a[2] + 10;
    printf("%d\n", a[2]);
    return 0;
}
