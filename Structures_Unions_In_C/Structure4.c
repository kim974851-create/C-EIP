#include<stdio.h>
struct Student {
    char name[50];
    int age;
    float grade;
};
int main(void) {
    struct Student s1 = {"Kim", 20, 3.5f};
    struct Student s2 = {"Lee", 30, 2.5f};
    s1.age = s1.age + 5;
    s2.grade =s1.grade - 1.0f;
    printf("%d %.1f\n", s1.age, s2.grade);
    return 0;

}