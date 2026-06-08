#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[10];
    int age;
} Student;

int main(void) {
    // [1] 스택에 s1 선언
    // s1.name = "Kim", s1.age = 25
    // 스택(stack) → 함수 끝나면 자동 해제
    Student s1 = {"Kim", 25};

    // [2] 힙에 Student 크기만큼 메모리 동적 할당
    // malloc → 힙(heap)에서 공간 빌려옴
    // (Student *) → void* 를 Student* 로 형변환
    // p → 힙 메모리 주소를 가리킴
    Student *p = (Student *)malloc(sizeof(Student));

    // [3] p->age = 40
    //     힙에 있는 공간의 age = 40
    p->age = 40;

    // [4] s1.age = 25 + 2 = 27
    //     스택의 s1.age 수정
    s1.age = s1.age + 2;

    // [5] p->age = 40 + 27 = 67
    //     힙의 age = 40 + s1.age(27)
    p->age = p->age + s1.age;

    // [6] free(p) → 힙 메모리 반납
    //     malloc 으로 빌린 거 돌려줌
    //     안 하면 메모리 누수(memory leak) 발생!
    printf("%d %d\n", s1.age, p->age);
    free(p);

    return 0;
}