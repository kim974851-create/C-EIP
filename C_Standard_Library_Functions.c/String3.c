#include <stdio.h>
#include <string.h>
int main(void) {
    char str[20] = "Hello";
    strcat(str, "!");
    strcat(str, "C");
    printf("%s\n", str);
    return 0;
}
