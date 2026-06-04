#include<stdio.h>
int main(void) {
    for (int i = 1; i<= 4; i++) {
        for (int j = 1; j <=4; j++) {
            if (j == 2)
                continue;
            if (i == 3 && j == 3)
                break;
            printf("(%d, %d) ", i, j);
        }
        printf("\n");
    }
    return 0;
}