#include <stdio.h>

int add(int a, int b) {
    int c = a + b;          // c = a + b
    printf("%d\n", c);      // c 출력
    return c;               // c 반환
}

int calc(int x) {
    int s1 = add(x, 1);    // add(3, 1) 호출 → c=4 출력, s1 = 4
    int s2 = add(x, 2);    // add(3, 2) 호출 → c=5 출력, s2 = 5
    printf("%d %d\n", s1, s2); // 4 5 출력
    return s1 + s2;         // 4 + 5 = 9 반환
}

int main() {
    int n = 3;
    int r1 = calc(n);           // calc(3) 호출
    //   → add(3,1): 4 출력
    //   → add(3,2): 5 출력
    //   → 4 5 출력
    //   → r1 = 9 반환받음
    int r2 = add(n, r1);        // add(3, 9) 호출 → 12 출력, r2 = 12
    printf("%d %d %d\n", n, r1, r2); // 3 9 12 출력
    return 0;
}

// 출력 순서:
// 4        ← add(3,1)
// 5        ← add(3,2)
// 4 5      ← calc printf
// 12       ← add(3,9)
// 3 9 12   ← main printf