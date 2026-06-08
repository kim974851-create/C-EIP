#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float grade;
};

int main(void) {
    // [1] s1, s2 초기화
    //
    //     s1: [ "Kim"  | age=20 | grade=3.0 ]
    //     s2: [ "Park" | age=22 | grade=4.0 ]
    struct Student s1 = {"Kim",  20, 3.0f};
    struct Student s2 = {"Park", 22, 4.0f};

    // [2] s2 = s1  ← 핵심!
    //     구조체 대입 = 멤버 전체를 값으로 복사
    //     s2가 s1의 복사본이 됨 (독립된 별개 공간)
    //
    //     복사 전:
    //     s1: [ "Kim"  | age=20 | grade=3.0 ]
    //     s2: [ "Park" | age=22 | grade=4.0 ]
    //
    //     복사 후:
    //     s1: [ "Kim"  | age=20 | grade=3.0 ]
    //     s2: [ "Kim"  | age=20 | grade=3.0 ]  ← s1과 동일
    //
    //     단, s1과 s2는 메모리상 별개 → 이후 변경 서로 영향 없음
    s2 = s1;

    // [3] s1.age = 25
    //     s1만 변경, s2는 그대로
    //
    //     s1: [ "Kim" | age=25 | grade=3.0 ]  ← age만 변경
    //     s2: [ "Kim" | age=20 | grade=3.0 ]  ← 영향 없음
    s1.age = 25;

    // [4] s1.grade = 3.5f
    //     s1만 변경, s2는 그대로
    //
    //     s1: [ "Kim" | age=25 | grade=3.5 ]  ← grade도 변경
    //     s2: [ "Kim" | age=20 | grade=3.0 ]  ← 영향 없음
    s1.grade = 3.5f;

    // [5] 최종 상태
    //     s1: [ "Kim" | age=25 | grade=3.5 ]
    //     s2: [ "Kim" | age=20 | grade=3.0 ]
    printf("%d %.1f\n", s1.age, s1.grade);  // 출력: 25 3.5
    printf("%d %.1f\n", s2.age, s2.grade);  // 출력: 20 3.0

    return 0;
}