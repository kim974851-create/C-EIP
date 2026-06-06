#include <stdio.h>

// [1] swap 함수 정의
//     → int x, int y : 값을 복사해서 받음 (원본 아님)
void swap(int x, int y) {
    int t = x;   // t = 3  (x 복사본 임시 저장)
    x = y;       // x = 5  (복사본만 변경)
    y = t;       // y = 3  (복사본만 변경)
}                // 함수 종료 → x, y, t 소멸 / main 원본 영향 없음

int main(void) {
    int x = 3, y = 5;   // [2] 원본 선언: x=3, y=5

    swap(x, y);          // [3] x=3, y=5 값만 복사 전달 (Call by Value)
    //     → main의 x, y는 여전히 3, 5

    printf("%d, %d\n", x, y);  // [4] x=3, y=5 그대로 출력
    //     출력: 3, 5

    return 0;            // [5] 프로그램 종료
}