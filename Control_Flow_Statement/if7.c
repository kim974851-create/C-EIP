#include <stdio.h>
int main(void) {
    int day = 6;
    if (day == 6 || day == 7) {
        printf("Weekend");
    }
    else {
        printf("Weekday");
    }
    return 0;
}