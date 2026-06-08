#include <stdio.h>

union Sample {
    // [1] union = a 와 b 가 같은 메모리 공간 공유
    //     둘 다 int 4바이트 → 같은 공간 사용
    int a;
    int b;
};

int main(void) {
    // [2] union Sample 변수 s 선언
    union Sample s;

    // [3] s.a = 5
    //     공유 공간에 5 저장
    s.a = 5;

    // [4] s.b = 7
    //     같은 공간에 7 덮어씀
    //     → s.a 도 7 로 바뀜!
    s.b = 7;

    // [5] s.a = 7, s.b = 7
    //     둘 다 같은 공간이라 똑같이 7
    printf("%d %d\n", s.a, s.b);

    return 0;
}