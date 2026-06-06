#include <stdio.h>

int main() {
    // [1] 2행 3열 2차원 배열 선언
    // a[0] → {1, 2, 3}
    // a[1] → {4, 5, 6}
    int a[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // [2] sizeof() → 메모리 크기(바이트) 를 알려주는 연산자
    //
    // sizeof(a)        → 배열 전체 크기
    //                    int 4바이트 × 원소 6개 = 24
    //
    // sizeof(a[0])     → 1행(a[0])의 크기
    //                    int 4바이트 × 원소 3개 = 12
    //
    // sizeof(a[0][0])  → 원소 1개의 크기
    //                    int = 4
    //
    // %zu → sizeof 결과 출력할 때 쓰는 서식 지정자
    printf("%zu %zu %zu\n", sizeof(a), sizeof(a[0]), sizeof(a[0][0]));

    return 0;
}