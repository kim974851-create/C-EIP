#include <stdio.h>
int main(void) {
    int arr[4] = {3, 6, 9, 12};  // [1] arr[0]=3, arr[1]=6, arr[2]=9, arr[3]=12

    int *p = arr;                  // [2] p → arr[0] 가리킴

    p++;                           // [3] p 한 칸 이동 → arr[1] 가리킴

    printf("%d ", p[0]);           // [4] p[0] = *(p+0) = arr[1] = 6
    printf("%d ", p[1]);           // [5] p[1] = *(p+1) = arr[2] = 9
    printf("%d ", p[2]);           // [6] p[2] = *(p+2) = arr[3] = 12

    return 0;
}