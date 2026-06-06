#include <stdio.h>
int main(void) {
    int a = 10;   // a = 10, 주소: 0x1000
    int *p;       // 포인터 변수 p 선언 (아직 아무것도 가리키지 않음)
    p = &a;       // p에 a의 주소(0x1000) 저장 → p가 a를 가리킴
    *p = 20;      // p가 가리키는 곳(= a)의 값을 20으로 변경 → a = 20
    printf("%d\n", a);  // a의 값 출력 → 20
    return 0;
}