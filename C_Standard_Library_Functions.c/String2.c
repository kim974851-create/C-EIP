#include <stdio.h>
#include <string.h>

int main(void) {
    // [1] src = "Source" → {'S','o','u','r','c','e','\0'}
    char src[] = "Source";

    // [2] dest = "123456789" → {'1','2','3','4','5','6','7','8','9','\0'}
    //     크기 10짜리 배열, 마지막은 자동으로 '\0'
    char dest[10] = "123456789";

    // [3] strncpy(dest, src, 3)
    //     src에서 최대 3바이트만 dest 앞부분에 복사
    //     → dest[0]='S', dest[1]='o', dest[2]='u'
    //     ※ 복사 길이(3) < src 길이(6) 이므로 '\0' 자동 삽입 없음!
    //     → dest = {'S','o','u','4','5','6','7','8','9','\0'}
    strncpy(dest, src, 3);

    // [4] printf("%s", dest)
    //     '\0'을 만날 때까지 출력
    //     → 'S' 'o' 'u' '4' '5' '6' '7' '8' '9' '\0'
    //     출력: Sou456789
    printf("%s\n", dest);

    return 0;
}