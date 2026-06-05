#include <stdio.h>
int sum(int n) {
    if (n == 0) return 0;        // 기저조건: n이 0이면 0 반환 (스택 해제 시작)
    return n + sum(n - 1);       // n + 아래 단계의 합을 반환 (재귀)
}

int main(void) {
    printf("%d\n", sum(5));      // sum(5) 호출
    return 0;
}

// ── 스택 쌓이는 과정 (호출) ──────────────────
// sum(5) → 5 + sum(4)  대기
// sum(4) → 4 + sum(3)  대기
// sum(3) → 3 + sum(2)  대기
// sum(2) → 2 + sum(1)  대기
// sum(1) → 1 + sum(0)  대기
// sum(0) → return 0    (바닥)

// ── 스택 꺼내지는 과정 (복귀 + 계산) ─────────
// sum(1) = 1 + 0  = 1
// sum(2) = 2 + 1  = 3
// sum(3) = 3 + 3  = 6
// sum(4) = 4 + 6  = 10
// sum(5) = 5 + 10 = 15

// 실행 결과: 15