#include <stdio.h>
union Info {
    int count;
    char name[10];
};
int main(void) {
    printf("%u\n", sizeof(union Info));
    return 0;
}

