#include <stdio.h>
int add(int x, int y) {
    x = x + y;
    return x;
}

int main() {
    int x = 4, y = 7;
    int r = add(x, y);
    printf("%d %d %d\n", x, y, r);
    return 0;
}