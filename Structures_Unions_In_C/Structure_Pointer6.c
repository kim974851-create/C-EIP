#include <stdio.h>
struct Student {
    int age;
};
int main(void) {
    struct Student s[2] = {10, 20};
    struct Student *p[2];
    p[0] = &s[0];
    p[1] = &s[1];
    p[0]->age = p[0]->age + 3;
    p[1]->age = p[0]->age + p[1]->age;
    printf("%d %d\n", s[0].age, s[1].age);
}
