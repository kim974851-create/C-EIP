#include <stdio.h>
int main(void) {
    int arr[5] = {2, 4, 6, 8, 10};  // [1] 배열 선언
    //     arr[0]=2, arr[1]=4, arr[2]=6, arr[3]=8, arr[4]=10

    int *p = arr;                     // [2] p → arr[0] 주소 (배열 첫 칸을 가리킴)

    for (int i = 0; i < 5; i++) {
        // [3] *(p+i) → arr[i]와 동일
        //     *(p+i) + arr[i] → arr[i] + arr[i] → arr[i] * 2

        printf("%d ", *(p + i) + arr[i]);
    }
    return 0;
}