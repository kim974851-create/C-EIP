#include <stdio.h>
#define LEVEL 2   // LEVEL → 2로 바꿔치기
#define BONUS 5   // BONUS → 5로 바꿔치기

int main(void) {
    int score = 0;
    int i;

    for (i = 0; i < 3; i++) {   // i = 0, 1, 2  (총 3번 반복)

        switch (LEVEL + i) {    // switch(2 + i) → i에 따라 값이 바뀜
            case 1:
                score += 1;     // 2+i == 1 일 때 (해당 없음)
                break;
            case 2:             // 2+i == 2 일 때
            case 3:             // 2+i == 3 일 때  ← case 2,3 묶음!
                score += 2;
                break;
            default:            // 나머지 전부
                score += 5;     // BONUS = 5
        }
    }

    // ┌──────┬─────┬────────────┬──────────┬───────────────────┬───────┐
    // │ 회차 │  i  │  2 + i     │ 해당case │      동작         │ score │
    // ├──────┼─────┼────────────┼──────────┼───────────────────┼───────┤
    // │  1   │  0  │ 2+0 = 2    │  case 2  │ score += 2 → 0+2  │   2   │
    // │  2   │  1  │ 2+1 = 3    │  case 3  │ score += 2 → 2+2  │   4   │
    // │  3   │  2  │ 2+2 = 4    │ default  │ score += 5 → 4+5  │   9   │
    // └──────┴─────┴────────────┴──────────┴───────────────────┴───────┘

    printf("%d\n", score);   // 출력: 9

    return 0;
}