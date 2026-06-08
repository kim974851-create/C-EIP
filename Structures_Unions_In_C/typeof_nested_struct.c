#include<stdio.h>
typedef struct {
    char name[10];
    int age;
}Student;
int main(void) {
    Student s1 = {"Lee", 20};
    Student s2 = s1;
    s2.age = s2.age + 5;
    printf("%d %d\n", s1.age, s2.age);
    return 0;
}

