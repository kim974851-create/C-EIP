#include <stdio.h>

struct Student {
    char name[10];
    int age;
};

int main(void) {
    // [1] 구조체 배열 선언
    // arr[0] → {"A", 10}
    // arr[1] → {"B", 20}
    // arr[2] → {"C", 30}
    struct Student arr[3] = { {"A", 10}, {"B", 20}, {"C", 30}};

    // [2] p = arr → arr[0] 의 주소를 가리킴
    struct Student *p = arr;

    // [3] p->age = 10 + 1 = 11
    //     p가 arr[0] 을 가리키니까 arr[0].age 수정
    p->age = p->age + 1;

    // [4] p = p + 1 → arr[1] 로 이동
    p = p + 1;

    // [5] p->age = 20 + 2 = 22
    //     p가 arr[1] 을 가리키니까 arr[1].age 수정
    p->age = p->age + 2;

    printf("%d %d %d\n", arr[0].age, arr[1].age, arr[2].age);

    return 0;
}