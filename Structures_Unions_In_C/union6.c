#include<stdio.h>
struct info {
    char c;
    int x;
    short s;
};
int main(void) {
    printf("%zu\n", sizeof(struct info));
    return 0;
}

