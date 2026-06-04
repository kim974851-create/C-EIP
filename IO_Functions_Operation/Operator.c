#include <stdio.h>
int main(void) {
    int a = 5;       // 변수 a 초기화
    int b = 0;       // 변수 b 초기화
    b = a++;         // b에 a의 현재값(5) 할당 후, a를 1 증가 (후위 증가)
    printf("%d %d\n", a, b);  // a=6, b=5 출력
    return 0;
}