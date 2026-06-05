#include <stdio.h>
void counter() {
    static int c = 1; // 정적 지역변수 c = 1 (최초 1회만 초기화, 함수 종료 후에도 값 유지)
    printf("%d ", c); // c 출력
    c++;              // c에 1을 더함 (다음 호출 때도 이 값이 유지됨)
}

int main() {
    counter(); // [1] c = 1 출력 → c++ → c = 2
    counter(); // [2] c = 2 출력 → c++ → c = 3
    counter(); // [3] c = 3 출력 → c++ → c = 4
    return 0;
}

// 실행 순서: [1] → [2] → [3]
// 실행 결과: 1 2 3
