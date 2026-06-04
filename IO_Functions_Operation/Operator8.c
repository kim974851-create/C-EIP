#include <stdio.h>
int main(void) {
    int a = 3, b = 4;

    /*
     * a++ (후위 증가): 현재 값을 먼저 사용한 후 증가
     *   → 연산에 a = 3 사용, 이후 a = 4
     *
     * ++b (전위 증가): 먼저 증가한 후 사용
     *   → b = 5 로 먼저 증가, 연산에 b = 5 사용
     *
     * result = a++ * ++b
     *        = 3   *  5
     *        = 15
     *
     * 연산 후: a = 4, b = 5, result = 15
     */
    int result = a++ * ++b;

    printf("%d %d %d\n", a, b, result); // 4 5 15 출력
    return 0;
}

// 후위 (x++) : 쓰고 → 증감
// 전위 (++x) : 증감 → 쓰고