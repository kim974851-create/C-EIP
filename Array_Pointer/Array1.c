# include <stdio.h>
int main(void) {
    int a[5];
    int i;
    for (i = 0; i < 5; i++) {
        a[i] = i * 2;
    }
    printf("%d\n", a[3]);
    return 0;
}