#include<stdio.h>
void test(int a, int b) { // a=8(복사), b=3(복사)
    a = a + 5;            // a = 13 (복사본만 변경)
    b = b - 2;            // b = 1  (복사본만 변경)
    printf("%d %d ", a, b); // 13 1 출력
}
int main() {
    int m = 8, n = 3;    // 원본
    test(m, n);           // 복사해서 넘김
    printf("%d %d\n", m, n); // 8 3 출력 (원본 그대로!)
    return 0;
}