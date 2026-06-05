#include <stdio.h>
int g = 2;        // 전역변수 g = 2 선언

void add() {
    g = g + 3;    // 전역변수 g에 3을 더함 (g를 직접 수정)
}

int main() {
    printf("%d ", g); // [1] 전역변수 g 출력 → 2
    add();            // [2] add() 호출 → g = 2 + 3 = 5
    printf("%d ", g); // [3] 전역변수 g 출력 → 5
    add();            // [4] add() 호출 → g = 5 + 3 = 8
    printf("%d ", g); // [5] 전역변수 g 출력 → 8
    return 0;
}