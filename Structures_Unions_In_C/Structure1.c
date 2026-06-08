#include <stdio.h>
struct Student {
    char name[50];
    int age;
    float grade;
};

int main(void) {
    struct Student s1 = {"Lee", 20, 3.5f};
    s1.age = s1.age + 1;
    s1.grade = s1.grade + 0.3f;
    printf("%s %d %.1f\n", s1.name, s1.age, s1.grade);
    return 0;
}