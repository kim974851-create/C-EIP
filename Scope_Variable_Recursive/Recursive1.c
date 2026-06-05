#include <stdio.h>
void printUp(int n) {
    if (n < 0) return;   // 기저조건: n이 음수면 종료 (스택 해제 시작)
    printUp(n - 1);      // [먼저] 재귀 호출 → 스택에 쌓임 (printf는 아직 실행 안 됨)
    printf("%d ", n);    // [나중] 재귀 복귀 후 출력 → 스택에서 꺼내지며 실행
}

int main(void) {
    printUp(3);  // 호출 시작
    return 0;
}

// ── 스택 쌓이는 과정 (호출) ──────────────────
// printUp(3) 호출 → printUp(2) 호출
// printUp(2) 호출 → printUp(1) 호출
// printUp(1) 호출 → printUp(0) 호출
// printUp(0) 호출 → printUp(-1) 호출
// printUp(-1) → n < 0 → return (바닥)

// ── 스택 꺼내지는 과정 (복귀 + 출력) ─────────
// printUp(0) 복귀 → printf(0)
// printUp(1) 복귀 → printf(1)
// printUp(2) 복귀 → printf(2)
// printUp(3) 복귀 → printf(3)

// 실행 결과: 0 1 2 3