#include <stdio.h>
int main(void) {
    int a = 10, b = 20, c = 30;       // [1] a=10, b=20, c=30 선언

    int* arr[3] = { &a, &b, &c };     // [2] 포인터 배열 선언
    //     arr[0] = &a → a의 주소
    //     arr[1] = &b → b의 주소
    //     arr[2] = &c → c의 주소

    printf("%d %d %d\n",
        *arr[0],   // [3] *arr[0] = *(&a) = a = 10
        *arr[1],   // [4] *arr[1] = *(&b) = b = 20
        *arr[2]    // [5] *arr[2] = *(&c) = c = 30
    );
    // 출력: 10 20 30

    return 0;
}