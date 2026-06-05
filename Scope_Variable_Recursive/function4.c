
#include<stdio.h>
void inc(int a) {
    a++;
    printf("%d,", a);

}

void dec(int a) {
    a--;
    printf("%d,", a);
}

int main() {
    int a = 5;
    inc(a);
    dec(a);
    printf("%d\n", a);
    return 0;
}