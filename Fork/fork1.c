#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(void) {
    pid_t pid;  // [1] 프로세스 ID 저장할 변수
    int x = 0;

    // [2] fork() 호출 → 프로세스 2개로 복제
    //     부모한테는 자식의 pid(양수) 반환
    //     자식한테는 0 반환
    //     실패하면 -1 반환
    pid = fork();

    // [3] pid > 0 → 부모 프로세스
    //     x = 1 저장 후 출력
    if (pid > 0) {
        x = 1;
        printf("부모 : %d\n", x);
    }
    // [4] pid == 0 → 자식 프로세스
    //     x = 2 저장 후 출력
    else if (pid == 0) {
        x = 2;
        printf("자식 : %d\n", x);
    }
    // [5] pid == -1 → fork 실패
    else {
        printf("실패");
    }
}