#include <stdio.h>

struct Student {
    int age;
};

// [2] add 함수 호출 시
//     st는 s의 복사본 → 별개의 지역변수
//     s  (main):  [ age = 23 ]  ← 원본, 건드리지 않음
//     st (add):   [ age = 23 ]  ← 복사본, 여기만 변경
void add(struct Student st) {
    st.age = st.age + 10;  // 복사본만 33으로 변경
    printf("add: %d\n", st.age);  // 33 출력
}   // [3] 함수 종료 → st 소멸, 변경사항 사라짐

int main(void) {
    // [1] s 초기화
    //     s: [ age = 23 ]
    struct Student s = {23};

    add(s);  // s를 복사해서 넘김 (call by value)

    // [4] s는 그대로 23
    printf("main: %d\n", s.age);  // 23 출력
    return 0;
}