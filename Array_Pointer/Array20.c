#include<stdio.h>
int main() {
    int a[2][3] = {
        {10, 20, 30},
        {40, 50, 60},
    };
    int (*p)[3] = a;
    printf("%d\n", p[0][1]);
    printf("%d\n", (*(p+1))[2]);
    printf("%d\n",*(*(p + 1)+ 0));
    return 0;

}
