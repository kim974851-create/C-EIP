#include <stdio.h>
#define SQR(x) (x * x)   // SQR(x)를 (x * x)로 바꿔치기

int main() {
    printf("%d", SQR(3+1));
    //           ↓ 바꿔치기 발생!
    //           (3+1 * 3+1)
    //
    // 계산 순서 (곱셈이 덧셈보다 먼저!)
    // (3 + 1*3 + 1)
    //  3 +  3  + 1  = 7
    //
    // 출력 결과: 7

    return 0;
}