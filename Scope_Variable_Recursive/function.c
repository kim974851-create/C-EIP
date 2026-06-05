#include <stdio.h>
void func(int a) {
    a = a * 2;
    printf("%d\n", a);
}
int main() {
    int x = 3;
    func(x);
    printf("%d\n", x);
    return 0;
}