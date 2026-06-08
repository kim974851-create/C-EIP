#include <stdio.h>
struct Student {
    char name[10];
    int age;
};
int main(void) {
    struct Student a = {"A", 10};
    struct Student b = {"B", 20};
    struct Student *p = &a;
    p->age = p->age + 1;
    // [4] p → b 로 변경 (이제 p는 b를 가리킴)
    p = &b;
    p->age = p->age + 2;
    printf("%d %d\n", a.age, b.age);
    return 0;
}