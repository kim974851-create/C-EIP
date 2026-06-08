#include <stdio.h>
#include<unistd.h>

int main(void) {
    int x = 0;
    fork();       // 여기서 프로세스 2개로 복제
    x = 1;        // 부모도 실행, 자식도 실행
    printf("%d\n", x); // 부모도 출력, 자식도 출력
}