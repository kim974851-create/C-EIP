#include <stdio.h>
#include <stdlib.h>  // atoi 함수 포함
#include <ctype.h>   // toupper, tolower 함수 포함

int main(void) {

    char numStr[] = "12";  // 문자열 "12" (숫자가 아닌 문자!)
    char c = 'a';          // 문자 'a'

    // ─────────────────────────────────────────
    // atoi(numStr) : 문자열 → 정수 변환
    //   "12"  →  12  (ascii to integer)
    //
    // 12 + 3 = 15
    // ─────────────────────────────────────────
    int n = atoi(numStr) + 3;  // n = 15

    // ─────────────────────────────────────────
    // toupper(c) : 소문자 → 대문자 변환
    //   'a' → 'A'
    //
    // tolower('Z') : 대문자 → 소문자 변환
    //   'Z' → 'z'
    // ─────────────────────────────────────────
    printf("%d %c %c\n", n, toupper(c), tolower('Z'));
    //                   15     'A'         'z'
    // 출력 : 15 A z

    return 0;
}