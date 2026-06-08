#include <stdio.h>

typedef struct Node {
    int value;
    struct Node *next;
} Node;

int main(void) {
    // [1] 노드 3개 선언
    // n1 → {10, NULL}
    // n2 → {20, NULL}
    // n3 → {30, NULL}
    Node n1 = {10, NULL};
    Node n2 = {20, NULL};
    Node n3 = {30, NULL};

    // [2] 연결리스트 연결
    // n1 → n2 → n3 → NULL
    n1.next = &n2;
    n2.next = &n3;

    // [3] 포인터 설정
    // head → n1 (시작점)
    // prev → n1 (삭제할 노드의 이전)
    // del  → n2 (삭제할 노드)
    Node *head = &n1;
    Node *prev = &n1;
    Node *del  = &n2;

    // [4] prev->next = del->next
    //     del->next = &n3 이니까
    //     n1.next = &n3  → n1이 n2 건너뛰고 n3 직접 연결
    //     결과: n1 → n3 → NULL
    prev->next = del->next;

    // [5] del->next = NULL
    //     n2.next = NULL → n2 완전 고립
    //     결과: n2 → NULL (아무도 안 가리킴)
    del->next = NULL;

    // [6] head(n1) 부터 순회
    // p = n1 → p->value = 10 출력 → p = n3
    // p = n3 → p->value = 30 출력 → p = NULL
    // p = NULL → 종료
    Node *p = head;
    while (p != NULL) {
        printf("%d ", p->value);
        p = p->next;
    }

    return 0;
}