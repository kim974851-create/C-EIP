#include<stdio.h>
int add(int n){
    return n + 5;
}

int mul(int n) {
    n = add(n);
    return n * 2;
}

int calc(int n) {
    n = mul(n);
    return n - 3;
}

int main() {
    int n = 4;
    printf("%d\n", calc(n));
    return 0;
}
