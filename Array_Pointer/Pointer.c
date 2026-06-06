#include<stdio.h>

void change(int x) {
     x = x + 10;  // x는 a의 복사본 → a에 영향 없음 (값 전달, call by value)
}

int main(void) {
     int a = 5;        // a = 5
     int *p = &a;      // p → a (0x1000)
     change(a);        // a의 값(5)만 복사해서 전달 → a는 여전히 5
     *p = *p + 10;     // *p = a → 5 + 10 = 15 → a = 15
     printf("%d\n", a); // 15 출력
     return 0;
}