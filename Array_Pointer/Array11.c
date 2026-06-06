#include <stdio.h>
int main() {
    int arr[] = {1, 3, 5, 7};  // [1] arr[0]=1, arr[1]=3, arr[2]=5, arr[3]=7

    int *p = arr;               // [2] p → arr[0] 가리킴 (&arr[0]와 동일)

    p++;                        // [3] p를 한 칸 앞으로 이동
    //     p → arr[1] 가리킴 (4byte 이동)

    *p += 10;                   // [4] *p = arr[1] = 3 + 10 = 13
    //     arr[1]이 13으로 변경됨

    printf("%d %d %d\n", arr[0], arr[1], arr[2]);
    //  arr[0] = 1  (건드리지 않음)
    //  arr[1] = 13 (변경됨)
    //  arr[2] = 5  (건드리지 않음)
    //  출력: 1 13 5

    return 0;
}