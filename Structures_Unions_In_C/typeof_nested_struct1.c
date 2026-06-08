#include<stdio.h>
typedef struct {
    char city[20];
    int zipcode;
}Address;
typedef struct {
    char name[20];
    Address addr;
}Person;
int main(void) {
    Person p = {"Kim", {"Seoul",12345}};
    p.addr.zipcode = p.addr.zipcode + 10;
    printf("%d\n", p.addr.zipcode);
    return 0;
}