#include <stdio.h>
#include <string.h>

int main(void) {
    // [1] src = {'A','B','C','\0'}
    char src[] = "ABC";

    // [2] dest = {'X','X','X','X','\0','\0','\0','\0','\0','\0'}
    char dest[10] = "XXXX";

    // [3] dest+2 = &dest[2] (2번 인덱스 주소)
    //     dest[2]부터 src("ABC") 복사
    //     → dest = {'X','X','A','B','C','\0', ...}
    strcpy(dest + 2, src);

    // [4] dest[0]부터 '\0' 만날 때까지 출력
    //     → X X A B C \0  =  "XXABC"
    printf("%s\n", dest);

    return 0;
}