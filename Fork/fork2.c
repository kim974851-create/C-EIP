#include <stdio.h>
#include <sys/types.h>

int main(void) {
    // [1] 변수 초기화
    // i=0, v=1, n=5
    int i = 0, v = 1, n = 5;
    pid_t pid;

    // [2] fork() 호출 → 프로세스 복제
    pid = fork();

    // [3] pid < 0 → fork 실패 (거의 안 일어남)
    //     v = 1
    //     i=0: v += 1 = 2
    //     i=1: v += 2 = 4
    //     i=2: v += 3 = 7
    //     i=3: v += 4 = 11
    //     i=4: v += 5 = 16
    if (pid < 0) {
        for (i = 0; i < n; i++) v += (i + 1);
        printf("c = %d ", v);   // c = 16
    }
    // [4] pid == 0 → 자식 프로세스
    //     v = 1
    //     i=0: v *= 1 = 1
    //     i=1: v *= 2 = 2
    //     i=2: v *= 3 = 6
    //     i=3: v *= 4 = 24
    //     i=4: v *= 5 = 120
    else if (pid == 0) {
        for (i = 0; i < n; i++) v *= (i + 1);
        printf("b = %d", v);    // b = 120
    }
    // [5] pid > 0 → 부모 프로세스
    //     v = 1
    //     i=0~4: v += 1 씩 5번
    //     v = 1 + 5 = 6
    else {
        for (i = 0; i < n; i++) v += 1;
        printf("a = %d ", v);   // a = 6
    }

    return 0;
}   