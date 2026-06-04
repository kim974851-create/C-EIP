# C언어 제어문 정리

## 1. if문

### 기본 구조
```c
if (조건) {
    // 조건이 참일 때 실행
}
```

### if - else
```c
if (조건) {
    // 참일 때
} else {
    // 거짓일 때
}
```

### if - else if - else
```c
if (조건1) {
    // 조건1 참
} else if (조건2) {
    // 조건2 참
} else {
    // 모두 거짓
}
```

### 주의사항: 중괄호 없을 때
```c
if (x == 1)
    y++;    // if에 속하는 문장 (한 줄만!)
    y += 2; // if와 무관, 항상 실행됨!
```
> **중괄호 없으면 바로 다음 한 줄만 if가 제어한다!**

### 예시
```c
int day = 6;
if (day == 6 || day == 7) {
    printf("Weekend");
} else {
    printf("Weekday");
}
// 출력: Weekend
```

---

## 2. switch문

### 기본 구조
```c
switch (변수) {
    case 값1:
        // 실행문
        break;
    case 값2:
        // 실행문
        break;
    default:
        // 해당 case 없을 때
        break;
}
```

### break의 역할
```c
switch (x) {
    case 1:
        printf("one\n");
        break;   // break 없으면 아래 case로 계속 실행됨! (fall-through)
    case 2:
        printf("two\n");
        break;
    default:
        printf("other\n");
        break;
}
```
> **break를 빠뜨리면 다음 case까지 실행되는 fall-through 발생!**

### fall-through 활용 예시
```c
int month = 4;
switch (month) {
    case 4:
    case 6:
    case 9:
    case 11:
        printf("30일\n");  // 4, 6, 9, 11월 모두 여기서 출력
        break;
    case 2:
        printf("28일\n");
        break;
    default:
        printf("31일\n");
        break;
}
// 출력: 30일
```

### if문 vs switch문 비교
| 항목 | if문 | switch문 |
|------|------|----------|
| 조건 | 범위, 복잡한 조건 가능 | 정수, 문자 등 정확한 값만 |
| 가독성 | 조건 많으면 복잡 | 값이 많을 때 깔끔 |
| break | 불필요 | 필수 (fall-through 주의) |

---

## 3. 삼항 연산자 (조건 연산자)

if-else를 한 줄로 표현할 때 사용

### 구조
```c
(조건) ? 참일 때 값 : 거짓일 때 값
```

### 예시
```c
int a = 10, b = 3;
int result = (a > b) ? a - b : b - a;
// a > b 가 참 → a - b = 7
printf("%d\n", result); // 7
```