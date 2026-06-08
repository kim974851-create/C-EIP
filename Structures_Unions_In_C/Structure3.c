#include<stdio.h>
struct Student {
    char name[50];
    int age;
    float grade;
};
int main(void) {
    struct Student s1 = {"Kim", 21, 3.0f};
    struct Student s2 = {"Park", 24, 4.0f};
    s1.grade = s2.grade - 0.5f;
    s2.age = s1.age + 2;
    printf("%.1f %d\n", s1.grade, s2.age);
    return 0;
}