#include <stdio.h>

struct Student {
    char name[50];       // 50바이트
    unsigned int age;    // 4바이트  (음수 없는 정수)
    float grade;         // 4바이트  (소수점)
};

int main() {
    // [1] 구조체 변수 초기화
    //     name  = "Seo"
    //     age   = 20u   (u = unsigned int 리터럴)
    //     grade = 2.0f  (f = float 리터럴)
    //
    //     ┌──────────────┬─────┬───────┐
    //     │ name = "Seo" │ age │ grade │
    //     │   50bytes    │ 20  │  2.0  │
    //     └──────────────┴─────┴───────┘
    struct Student s = {"Seo", 20u, 2.0f};

    // [2] s.age = s.age + 2u
    //     20 + 2 = 22
    //     age: 20 → 22
    s.age = s.age + 2u;

    // [3] s.grade = s.grade + 0.5f
    //     2.0 + 0.5 = 2.5
    //     grade: 2.0 → 2.5
    s.grade = s.grade + 0.5f;

    // [4] s.age = s.age - 1u
    //     22 - 1 = 21
    //     age: 22 → 21
    s.age = s.age - 1u;

    // [5] s.grade = s.grade + 1.0f
    //     2.5 + 1.0 = 3.5
    //     grade: 2.5 → 3.5
    s.grade = s.grade + 1.0f;

    // [6] 최종 상태
    //     ┌──────────────┬─────┬───────┐
    //     │ name = "Seo" │ age │ grade │
    //     │   50bytes    │ 21  │  3.5  │
    //     └──────────────┴─────┴───────┘
    //
    //     %u   → unsigned int 출력 → 21
    //     %.1f → 소수점 1자리 출력 → 3.5

    printf("%u %.1f\n", s.age, s.grade);  // 출력: 21 3.5

    return 0;
}