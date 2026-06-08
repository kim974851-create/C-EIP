#include <stdio.h>

// [1] Point 구조체 선언
typedef struct {
    int x;
    int y;
} Point;

// [2] Line 구조체 안에 Point 중첩
typedef struct {
    Point start;
    Point end;
} Line;

int main(void) {
    // [3] l1 초기화
    // l1.start = {0, 0}
    // l1.end   = {10, 10}
    Line l1 = {{0, 0}, {10, 10}};

    // [4] l2 = l1 → l1 을 통째로 복사
    // l2.start = {0, 0}
    // l2.end   = {10, 10}
    Line l2 = l1;

    // [5] l2.end.x = 10 + 5 = 15
    //     l1 은 복사본이라 그대로 10
    l2.end.x = l2.end.x + 5;

    // [6] l2.end.y = 10 - 5 = 5
    //     l1 은 복사본이라 그대로 10
    l2.end.y = l2.end.y - 5;

    // [7] l1.end.x=10, l1.end.y=10, l2.end.x=15, l2.end.y=5
    printf("%d %d %d %d\n", l1.end.x, l1.end.y, l2.end.x, l2.end.y);

    return 0;
}