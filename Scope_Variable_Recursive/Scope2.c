#include<stdio.h>
int main() {
    int x = 3;
    {
        printf("%d ", x);
    }
    {
        int x = 9;
        printf("%d ", x);
    }
    printf("%d\n", x);
    return 0;
}