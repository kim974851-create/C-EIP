#include <stdio.h>

union Number {
    // [1] union = i 와 f 가 같은 메모리 공간 공유
    int i;
    float f;
};

int main(void) {
    // [2] union Number 변수 u 선언
    union Number u;

    // [3] u.i = 10
    //     정수 10 저장
    u.i = 10;

    // [4] u.i 출력 → 10
    printf("%d ", u.i);

    // [5] u.f = 3.5f
    //     같은 공간에 float 3.5 덮어씀
    //     → u.i 도 이제 쓰레기값이 됨
    u.f = 3.5f;

    // [6] u.f 출력 → 3.5
    printf("%.1f\n", u.f);

    return 0;
}