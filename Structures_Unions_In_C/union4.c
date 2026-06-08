#include <stdio.h>

union Info {
    // [1] union 멤버가 name[10] 하나뿐
    //     char 1바이트 × 10 = 10바이트
    char name[10];
};

int main(void) {
    // [2] sizeof(union Info)
    //     union 크기 = 가장 큰 멤버 크기
    //     name[10] = 10바이트 → 10 출력
    // %u = unsigned int 출력 (sizeof 결과용)
    printf("%u\n", sizeof(union Info));

    return 0;
}