#include <stdio.h>
int main(void) {
    int a = 10, b = 20, c = 30;       // [1] a=10, b=20, c=30 선언

    int* arr[3] = { &a, &b, &c };     // [2] 포인터 배열 선언
    //     arr[0] = &a → a의 주소
    //     arr[1] = &b → b의 주소
    //     arr[2] = &c → c의 주소

    *arr[1] = *arr[1] + 5;            // [3] *arr[1] = *(&b) = b
    //     b = 20 + 5 = 25
    //     → b 원본이 직접 변경됨

    printf("%d %d\n",
        b,        // [4] b = 25  (변경된 원본)
        *arr[1]   // [5] *arr[1] = *(&b) = b = 25  (같은 곳을 가리킴)
    );
    // 출력: 25 25

    return 0;
}