#include<stdio.h>
struct Point {
    int x;
    int y;
};
int main(void) {
    struct Point p[3] = { {1, 2}, {3, 4}, {5, 6}};
    printf("%d %d\n", p[0].x, p[1].y);
    printf("%d %d\n", p[2].x, p[2].y);

}
