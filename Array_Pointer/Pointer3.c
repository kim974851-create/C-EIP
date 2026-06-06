#include <stdio.h>

// [1] swap 함수 정의
//     → int *x, int *y : 주소를 받음 (원본 직접 접근 가능)
void swap(int *x, int *y) {
   int t = *x;   // t = 3   (*x → x가 가리키는 주소의 값 = main의 x)
   *x = *y;      // *x = 5  (main의 x를 5로 변경)
   *y = t;       // *y = 3  (main의 y를 3으로 변경)
}                 // 함수 종료 → 포인터 x, y 소멸 / 원본은 이미 변경됨

int main(void) {
   int x = 3, y = 5;    // [2] 원본 선언: x=3, y=5

   swap(&x, &y);         // [3] x의 주소, y의 주소를 전달 (Call by Reference)
   //     → swap 내부에서 원본 직접 수정
   //     → 함수 종료 후 x=5, y=3

   printf("%d,%d\n", x, y);  // [4] 바뀐 값 출력
   //     출력: 5,3

   return 0;             // [5] 프로그램 종료
}