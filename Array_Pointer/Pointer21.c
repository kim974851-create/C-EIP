#include <stdio.h>

int main() {
    // [1] 문자열 포인터 배열 선언
    //     각 문자열은 읽기 전용 메모리(문자열 리터럴)에 저장됨
    //     words[i]는 각 문자열의 첫 글자 주소를 담음
    //
    //     words[0] = 0xA00 → ['H','e','l','l','o','\0']
    //     words[1] = 0xB00 → ['W','o','r','l','d','\0']
    //     words[2] = 0xC00 → ['C','\0']
    //
    //     words:
    //     [ 0xA00 | 0xB00 | 0xC00 ]
    //        ↓        ↓       ↓
    //     "Hello"  "World"   "C"
    char *words[3] = {"Hello", "World", "C"};

    // [2] pp = words
    //     words는 char** 로 decay (첫 원소의 주소)
    //     pp → words[0](0xA00) → "Hello"
    //
    //     pp:  [ 0xA00 | 0xB00 | 0xC00 ]
    //             ↓        ↓       ↓
    //           "Hello" "World"   "C"
    char **pp = words;

    // [3] pp[0][1]
    //     pp[0]    = *(pp+0) = words[0] = 0xA00  → char* (= "Hello" 시작주소)
    //     pp[0][1] = *(0xA00 + 1) = 1번째 문자 = 'e'
    //
    //     역참조 경로:
    //     pp → words[0](0xA00) → "Hello"
    //                              [0][1][2][3][4]
    //                              'H' 'e' 'l' 'l' 'o'
    //                                   ↑ pp[0][1] = 'e'
    //
    //     %c 로 출력 → 'e'

    // [4] pp[1]
    //     pp[1]  = *(pp+1) = words[1] = 0xB00  → char* (= "World" 시작주소)
    //     pp[1]은 char* 이므로 %s로 출력하면 '\0' 만날 때까지 쭉 출력
    //
    //     역참조 경로:
    //     pp+1 → words[1](0xB00) → "World"
    //                               [0][1][2][3][4][5]
    //                               'W' 'o' 'r' 'l' 'd' '\0'
    //                                ↑ 여기서부터 출력 시작
    //
    //     %s 로 출력 → "World"

    printf("%c %s\n", pp[0][1], pp[1]);  // 출력: e World

    return 0;
}