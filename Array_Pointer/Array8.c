#include <stdio.h>
int main(void) {
    int arr[4] = {4, 8, 12, 16};  // [1] 배열 선언
    //     arr[0]=4, arr[1]=8, arr[2]=12, arr[3]=16

    int *p = arr;                  // [2] p → arr[0] 주소 (배열 첫 칸을 가리킴)

    // [3] printf 인자 해석
    //     *p        → *(p+0) = arr[0] = 4
    //     *(p+2)    → arr[2]          = 12
    //     p[3]      → *(p+3) = arr[3] = 16

    printf("%d %d %d\n", *p, *(p + 2), p[3]);  // 출력: 4 12 16

    return 0;
}