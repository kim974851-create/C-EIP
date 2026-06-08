#include <stdio.h>
struct Student {
    char name[10];
    int age;
};

int main(void) {
    struct Student s[2] = {{"Kim", 20}, {"Lee", 21}};
    s[0].age = s[0].age + 2;
    s[1].age = s[0].age + s[1].age;
    printf("%d %d\n", s[0].age, s[1].age);
    return 0;
}