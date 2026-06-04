#include<stdio.h>
int main(void) {
    int x = 0;
    int y = 3;

    // x == 1 → 거짓 (x는 0이므로)
    if (x == 1)
        y++;    // 중괄호 없으면 이 한 줄만 if에 속함 → 건너뜀
    y += 2; // if와 무관! 항상 실행 → y = 3 + 2 = 5

    printf("%d\n", y); // 5 출력
    return 0;
}