#include <stdio.h>
union Data {
    int i;
    char ch;
};
int main(void) {
    union Data d[2];
    d[0].i = 10;
    d[1].i = 20;
    d[0].ch ='A';
    printf("%d %d\n", d[1].i, d[0].i);
    printf("%c\n", d[0].ch);
    return 0;

}

