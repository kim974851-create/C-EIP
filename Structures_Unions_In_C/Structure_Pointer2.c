#include<stdio.h>
struct Student {
    char name[10];
    int age;
};
int main(void) {
    struct Student s = {"Kim", 30};
    struct Student *p = &s;
    struct Student *q = &s;
    p->age = p->age + 5;
    q->age = q->age - 3;
    printf("%d", s.age);
    return 0;
}
