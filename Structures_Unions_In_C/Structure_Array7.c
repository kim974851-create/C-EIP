#include <stdio.h>

struct Node {
    int value;
    int next;
};

int main(void) {
    // [1] 초기: head=0
    //     [0]10 → [1]20 → [2]30 → [3]40 → -1
    struct Node list[4] = {{10,1},{20,2},{30,3},{40,-1}};

    int head = 0;
    int del  = 2;   // 삭제할 노드 = list[2](30)
    int prev = 1;   // 직전 노드  = list[1](20)

    // [2] 중간 노드 삭제
    //     list[1].next = list[2].next = 3  (list[2] 건너뜀)
    //     list[2].next = -1               (list[2] 고립)
    list[prev].next = list[del].next;
    list[del].next  = -1;

    // [3] 순회: head=0 그대로
    //     cur=0→10, cur=1→20, cur=3→40, cur=-1 종료
    int cur = head;
    while (cur != -1) {
        printf("%d ", list[cur].value);
        cur = list[cur].next;
    }
//cur = -1이여서 while문을 빠져 나간다
    return 0;
}