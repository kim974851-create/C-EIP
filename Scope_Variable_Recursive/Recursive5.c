#include <stdio.h>
int calc(int n) {
    if (n == 0) return 0;          // 기저조건: n이 0이면 0 반환

    if (n % 2 == 0)
        return calc(n - 1) + n;    // n이 짝수면 더함
    else
        return calc(n - 1) - n;    // n이 홀수면 뺌
}

int main(void) {
    printf("%d\n", calc(5));       // calc(5) 호출
    return 0;
}

// ── 스택 쌓이는 과정 (호출) ──────────────────
// calc(5) → calc(4) - 5   대기  (5는 홀수 → 빼기)
// calc(4) → calc(3) + 4   대기  (4는 짝수 → 더하기)
// calc(3) → calc(2) - 3   대기  (3는 홀수 → 빼기)
// calc(2) → calc(1) + 2   대기  (2는 짝수 → 더하기)
// calc(1) → calc(0) - 1   대기  (1은 홀수 → 빼기)
// calc(0) → return 0      (바닥)

// ── 스택 꺼내지는 과정 (복귀 + 계산) ─────────
// calc(1) = 0  - 1 = -1
// calc(2) = -1 + 2 =  1
// calc(3) = 1  - 3 = -2
// calc(4) = -2 + 4 =  2
// calc(5) = 2  - 5 = -3

// 실행 결과: -3