#include <stdio.h>

void change(int v) {      // v는 main의 v를 복사한 새 변수!
    v++;                  // 복사본만 1 증가 → 11
    printf("%d\n", v);   // 11 출력
}                         // 함수 끝나면 복사본은 사라짐

int main() {
    int v = 10;           // 원본 v = 10
    change(v);            // 10을 복사해서 넘김 → 11 출력
    change(v);            // 또 10을 복사해서 넘김 → 11 출력
    printf("%d\n", v);   // 원본은 그대로 → 10 출력
    return 0;
}

// 실행 결과:
// 11
// 11
// 10