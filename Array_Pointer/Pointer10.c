#include<stdio.h>
int main(void) {
      int a = 10, b = 20;
      int* arr[2] = {&a, &b};
      int* temp = arr[0];
      arr[0] = arr[1];
      arr[1] = temp;
      printf("%d %d\n", *arr[0], *arr[1]);
      return 0;
}