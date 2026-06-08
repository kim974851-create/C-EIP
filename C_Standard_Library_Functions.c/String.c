#include <stdio.h>
#include <string.h>
int main(void) {
    char str[] = "Hello, World!";
    printf("%d %d\n", strlen(str), strlen(str + 7));
    return 0;
}