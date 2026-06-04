#include<stdio.h>
int main(void) {
    int v = 2;
    switch(v) {
        case 1:
        case 2:
        case 3:
            printf("Small");
            break;
        case 4:
            printf("Medium");
            break;
        default:
            printf("Large");
    }
    return 0;
}


