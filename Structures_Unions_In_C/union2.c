#include<stdio.h>
union Data {
    int i;
    char c;
};
int main(void) {
    union Data d;
    d.i = 100;
    printf("%d ", d.i);
    d.c = 'A';
    printf("%c\n", d.c);
    return 0;
}

