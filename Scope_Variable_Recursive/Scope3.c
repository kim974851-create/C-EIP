#include<stdio.h>
int a = 10;           // 전역변수 a = 10 선언

void test() {
    int a = 5;        // 지역변수 a = 5 선언 (전역변수 a를 가림)
    printf("%d ", a); // [2] 지역변수 a 출력 → 5
}                     // 지역변수 a 소멸

int main() {
    printf("%d ", a); // [1] 전역변수 a 출력 → 10
    test();           // [2] test() 호출
    printf("%d\n", a);// [3] 전역변수 a 출력 → 10 (변화 없음)
    return 0;
}

// 실행 순서: [1] → [2] → [3]
// 실행 결과: 10 5 10