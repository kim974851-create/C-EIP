#include <stdio.h>
int main(void) {
    int a = 7;       // a = 7
    int *p = &a;     // p → a
    int *q = p;      // q = p → q도 a를 가리킴 (같은 주소!)
    *p = *p + 3;     // a = 7 + 3 = 10
    *q = *q * 2;     // a = 10 * 2 = 20  (q도 a를 가리키므로)
    printf("%d\n", a); // 20
    return 0;
}