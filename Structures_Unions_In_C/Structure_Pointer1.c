#include <stdio.h>
struct Student {
    char name[10];
    int age;
};
int main(void) {
    struct Student s = {"Lee", 20};
    struct Student *p = &s;
    p->age = p->age + 1;
    printf("%s %d\n", s.name, s.age);
}