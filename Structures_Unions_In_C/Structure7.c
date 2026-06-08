#include <stdio.h>
struct Student {
    int age;
};
void calc(struct Student a, struct Student b) {
    a.age = a.age + b.age;
    b.age = b.age * 2;
    printf("%d %d\n", a.age, b.age);
}
int main(void) {
    struct Student s1 = {10};
    struct Student s2 = {20};
    calc(s1, s2);
    printf("%d %d\n", s1.age, s2.age);
    return 0;
}
