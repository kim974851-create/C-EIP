#include <stdio.h>
#include <string.h>  // String.h → string.h 수정

int main(void) {
    char str[] = "banana";
    // str = ['b','a','n','a','n','a','\0']
    //         [0] [1] [2] [3] [4] [5] [6]

    // ─────────────────────────────────────────
    // strchr(str, 'a') : 문자열에서 'a'가
    //                    처음 등장하는 위치의
    //                    포인터를 반환
    //
    // [0] 'b' → 'a' 아님, 계속
    // [1] 'a' → 찾음! 여기서 종료
    //
    // p = str+1  →  "anana" 를 가리킴
    // ─────────────────────────────────────────
    char *p = strchr(str, 'a');

    // p가 NULL이 아니면 (= 찾았으면) 출력
    if (p) {
        printf("%s\n", p);  // p가 가리키는 곳부터 끝까지 출력
    }                       // → "anana"

    return 0;
}