#include<stdio.h>
int main(void) {
    int a = 3, b = 5;                    // a=3, b=5 초기화
    printf("%d\n", a > 2 && b < 10);    // 3>2(참) && 5<10(참) → 1 출력
    printf("%d\n", a == 4 || b == 5);   // 3==4(거짓) || 5==5(참) → 1 출력
    return 0;

}