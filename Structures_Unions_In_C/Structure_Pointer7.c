#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node *next;
};

int main(void) {
    // [1] 노드 3개 선언
    // n1 → {10, NULL}
    // n2 → {20, NULL}
    // n3 → {30, NULL}
    struct Node n1 = {10, NULL};
    struct Node n2 = {20, NULL};
    struct Node n3 = {30, NULL};

    // [2] 연결리스트 연결
    // n1 → n2 → n3 → NULL
    n1.next = &n2;
    n2.next = &n3;

    // [3] 새 노드 선언
    // newNode → {15, NULL}
    struct Node newNode = {15, NULL};

    // [4] newNode 를 n1 과 n2 사이에 삽입
    // newNode.next = n1.next → newNode → n2
    // n1.next = &newNode    → n1 → newNode
    // 결과: n1 → newNode → n2 → n3 → NULL
    newNode.next = n1.next;
    n1.next = &newNode;

    // [5] p = n1 부터 시작해서 NULL 까지 순회
    struct Node *p = &n1;
    while (p != NULL) {
        printf("%d ", p->value);  // value 출력
        p = p->next;              // 다음 노드로 이동
    }

    return 0;
}