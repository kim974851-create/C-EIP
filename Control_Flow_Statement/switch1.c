#include<stdio.h>
int main(void) {
    char ch = 'C';
    switch (ch) {
        case 'A':
            printf("A");
            break;
        case 'B':
            printf("B");
            break;
        default:
            printf("Other");
    }
    return 0;
}
