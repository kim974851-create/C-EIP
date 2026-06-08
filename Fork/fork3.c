#include <stdio.h>
#include <sys/types.h>
int main(void) {
    int i = 0, v = 1, n= 5;
    pid_t pid;
    pid = fork();
    if ( pid < 0 ) {
        for (i = 0; i < n; i++) v += (i + 1);
        printf("c = %d ", v);
    }
    else if ( pid == 0) {
        for (i = 0; i < n; i++)v *= (i + 1);
        printf("b = %d, ", v);
        }
    else {
            wait(NULL);
            for (i = 0; i < n; i++) v += 1;
            printf("a = %d", v);
    }
    return 0;
}