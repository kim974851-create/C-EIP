#include <stdio.h>
struct Node {
    int value;
    int next;
};
int main(void) {
    struct Node list[4] = {{10, 1}, {20, 2}, {30, 3}, {40, -1}};
    int head  = 0;
    int move = 2;
    int prev = 1;
    list[prev].next = list[move].next;
    list[move].next = head;
    head = move;
    int cur = head;
    while (cur != -1){
        printf("%d ", list[cur].value);
        cur = list[cur].next;
    }
    return 0;
}
// 인덱스   value   next (변경 전 → 변경 후)
// ──────────────────────────────────────────
//   0       10      1     →    1   (그대로)
//   1       20      2     →    3   ← [2]에서 변경
//   2       30      3     →    0   ← [3]에서 변경
//   3       40     -1     →   -1   (그대로)