#include <stdio.h>
int main(void) {
    char c = 'A'; // 문자 'A' 저장 (ASCII 코드값: 65)

    /*
     * c + 1 = 65 + 1 = 66
     *
     * ASCII 코드 참고:
     *   'A' = 65
     *   'B' = 66  ← c + 1
     *   'C' = 67
     *   ...
     *
     * %d로 출력 → 숫자 66 출력
     * %c로 출력 → 문자 'B' 출력
     */
    printf("%d %c\n", c + 1, c + 1); // 66 B 출력

    return 0;
}