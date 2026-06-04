#include<stdio.h>
int main(void) {
    int n = 3;
    switch (n) {
        case 1:         // n=3 이므로 건너뜀
        case 2:         // n=3 이므로 건너뜀
            printf("A");

        case 3:         // ★ n=3 여기서 시작!
            printf("B"); // "B" 출력
            // break 없음 → 아래로 fall-through!

        case 4:         // break 없으므로 그냥 내려옴
            printf("C"); // "C" 출력
            // break 없음 → 아래로 fall-through!

        case 5:         // break 없으므로 그냥 내려옴
        case 6:         // break 없으므로 그냥 내려옴
            printf("D"); // "D" 출력
            break;       // ★ 여기서 switch 탈출!

        default:        // 해당 case 없을 때 실행 (여기선 실행 안 됨)
            printf("E");
    }
    return 0;
}