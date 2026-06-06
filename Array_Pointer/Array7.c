#include <stdio.h>

// x[3], y[3] → 배열 주소를 받음 (Call by Reference)
// change(a, a) 로 호출 → x와 y 모두 배열 a를 가리킴
void change(int x[3], int y[3]) {
    int t;

    t = x[1];    // t = a[1] = 2
    x[1] = y[2]; // a[1] = a[2] = 3  ← a[1]이 3으로 바뀜
    y[2] = t;    // a[2] = t  = 2... 인데!
    // 이미 위에서 a[1]이 3으로 바뀐 상태
    // y[2]는 a[2] → a[2] = 2
}

int main(void) {
    int a[3] = {1, 2, 3};

    // x와 y 둘 다 a → 같은 메모리를 동시에 가리킴
    // 한쪽을 바꾸면 다른 쪽도 같이 바뀜!
    change(a, a);

    // a[1]=3, a[2]=2 가 되어야 할 것 같지만...
    // 실제 출력: 1, 3, 2  ← 정상 swap
    printf("%d, %d, %d\n", a[0], a[1], a[2]);
}