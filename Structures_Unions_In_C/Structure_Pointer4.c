#include <stdio.h>

struct Student {
    char name[10];
    int age;
};

// [1] 구조체 포인터를 매개변수로 받는 함수
//     p → 전달받은 구조체의 주소를 가리킴
void addAge(struct Student *p) {
    // [3] p->age = 25 + 2 = 27
    //     원본 s 를 직접 수정함
    p->age = p->age + 2;
}

int main(void) {
    // [2] 구조체 선언
    // s.name = "Cho", s.age = 25
    struct Student s = {"Cho", 25};

    // [3] s 의 주소를 addAge 에 전달
    //     → p = &s 가 됨
    addAge(&s);

    // [4] s.name = "Cho", s.age = 27
    printf("%s %d\n", s.name, s.age);

    return 0;
}