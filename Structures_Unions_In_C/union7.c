#include <stdio.h>
union Data {
    int num;
    char ch[4];
};
int main() {
    union Data dt;
    dt.num = 0x41424344;
    printf("%X, %c %c %c %c\n", dt.num, dt.ch[0], dt.ch[1], dt.ch[2], dt.ch[3]);
    dt.ch[1] = 'X';
    printf("%X, %c, %c, %c, %c\n", dt.num, dt.ch[0], dt.ch[1], dt.ch[2], dt.ch[3]);
    return 0;
}

