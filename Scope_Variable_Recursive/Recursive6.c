#include <stdio.h>
int func(int n) {
    if (n == 1) return 1;       // 기저조건: n이 1이면 1 반환
    int x = func(n - 1);        // 재귀 호출 결과를 x에 저장 → 대기
    return x * 2 + n;           // x에 2 곱하고 n 더해서 반환
}

int main(void) {
    printf("%d\n", func(4));    // func(4) 호출
    return 0;
}

// ── 스택 쌓이는 과정 (호출) ──────────────────
// func(4) → x = func(3)  대기
// func(3) → x = func(2)  대기
// func(2) → x = func(1)  대기
// func(1) → return 1     (바닥)

// ── 스택 꺼내지는 과정 (복귀 + 계산) ─────────
// func(1) = 1
// func(2) = x*2 + n = 1*2 + 2 =  4
// func(3) = x*2 + n = 4*2 + 3 = 11
// func(4) = x*2 + n = 11*2 + 4 = 26

// 실행 결과: 26