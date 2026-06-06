#include <stdio.h>

int main(void) {
    // [1] 문자열 포인터 배열 선언
    // words[0] → "Apple"
    // words[1] → "Banana"
    // words[2] → "Cherry"
    const char* words[3] = {"Apple", "Banana", "Cherry"};

    // [2] words[0] = "Apple" → 그대로 출력
    // 출력: Apple
    printf("%s\n", words[0]);

    // [3] words[1] = "Banana"
    //     words[1] + 2 → 'B','a' 건너뜀 → 'n' 위치
    //     *(words[1] + 2) → 'n' 역참조
    // 출력: n
    printf("%c\n", *(words[1] + 2));

    // [4] words[2] = "Cherry"
    //     words[2] + 3 → 'C','h','e' 건너뜀 → 'r' 위치부터
    //     %s니까 거기서부터 끝까지 출력
    // 출력: rry
    printf("%s\n", words[2] + 3);

    // [5] words[0] = "Apple"
    //     words[0][4] → 인덱스 4번째 문자
    //     A(0) p(1) p(2) l(3) e(4) → 'e'
    // 출력: e
    printf("%c\n", words[0][4]);

    return 0;
}