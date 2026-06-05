#include <stdio.h>
#include <stdio.h>

int add(int x) {
    x = x + 2;              // x = 3+2 = 5
    printf("%d, ", x);      // 출력: 5,  ← 쉼표+공백 추가
    return x;               // 5 반환
}

int calc(int a) {
    a = add(a);             // add(3) 호출 → 5 반환받음, a = 5
    a = a * 2;              // a = 5*2 = 10
    printf("%d, ", a);      // 출력: 10, ← 쉼표+공백 추가
    return a;               // 10 반환
}

int main() {
    int n = 3;
    int r = calc(n);        // calc(3) 호출 → 10 반환받음, r = 10
    printf("%d, %d\n", n, r); // 출력: 3, 10 ← 쉼표+공백 추가
    return 0;
}

// 최종 출력: 5, 10, 3, 10,