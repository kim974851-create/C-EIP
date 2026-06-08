#include <stdio.h>
#include <string.h>

int main(void) {
    char str[] = "ababcab";
    // str = ['a','b','a','b','c','a','b','\0']
    //         [0] [1] [2] [3] [4] [5] [6] [7]

    // ─────────────────────────────────────────
    // strstr(str, "abc") : 문자열에서 부분 문자열
    //                      "abc"가 처음 등장하는
    //                      위치의 포인터를 반환
    //
    // [0] 'a' → "abc" 시작 가능? a=a ✅ b=b ✅ a≠c ❌ 실패
    // [1] 'b' → "abc" 시작 가능? b≠a ❌ 실패
    // [2] 'a' → "abc" 시작 가능? a=a ✅ b=b ✅ c=c ✅ 찾음!
    //
    // p = str+2  →  "abcab" 를 가리킴
    // ─────────────────────────────────────────
    char *p = strstr(str, "abc");

    // p가 NULL이 아니면 (= 찾았으면) 출력
    if (p) {
        printf("%s\n", p);  // p가 가리키는 곳부터 끝까지 출력
    }                       // → "abcab"

    return 0;
}