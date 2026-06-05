#include <stdio.h>
void printDown(int n) {
    if (n < 0) return;  // 기저조건: n이 음수면 종료
    printf("%d ", n);   // 현재 n 출력
    printDown(n-1);     // n-1로 재귀 호출
}

int main(void) {
    printDown(3); // 3부터 시작
    return 0;
}

// 호출 흐름:
// printDown(3) → 출력: 3 → printDown(2)
// printDown(2) → 출력: 2 → printDown(1)
// printDown(1) → 출력: 1 → printDown(0)
// printDown(0) → 출력: 0 → printDown(-1)
// printDown(-1) → n < 0 → return (종료)

// 실행 결과: 3 2 1 0