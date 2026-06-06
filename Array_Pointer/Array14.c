#include <stdio.h>
int main(void) {
    int arr[3] = {10, 20, 30};  // [1] 배열 선언
    //     arr[0]=10, arr[1]=20, arr[2]=30

    // [2] printf 인자 해석
    //     arr[0]      → 배열 0번째       = 10
    //     *(arr + 1)  → arr 주소 + 1칸  = arr[1] = 20

    printf("%d %d\n", arr[0], *(arr + 1));  // 출력: 10 20

    return 0;
}