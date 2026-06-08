#include <stdio.h>

struct Data {
    int a;   // 4바이트
    int b;   // 4바이트
};
// 구조체 총 크기 = 4 + 4 = 8바이트 (패딩 없음)
// int끼리는 정렬 기준이 같아서 패딩 불필요

int main(void) {
    // sizeof(struct Data)
    // 컴파일 시점에 크기 계산 → 실행 중 연산 없음
    // %zu = size_t 타입 출력 전용 포맷
    printf("%zu\n", sizeof(struct Data));  // 출력: 8
    return 0;
}