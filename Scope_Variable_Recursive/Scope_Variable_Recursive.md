# 📘 C언어 함수(Function) & 변수의 유효 범위(Scope)

---

## 목차

1. [함수(Function)](#1-함수function)
    - 1.1 함수의 정의
    - 1.2 함수 선언 (함수 프로토타입)
    - 1.3 함수의 종류
    - 1.4 자료의 전달 방법
    - 1.5 참조에 의한 호출 (Call by Reference)
2. [변수의 유효 범위(Scope)](#2-변수의-유효-범위scope)
    - 2.1 유효 범위의 개념
    - 2.2 변수의 종류와 유효 범위
    - 2.3 지역 변수 (Local Variable)
    - 2.4 전역 변수 (Global Variable)
    - 2.5 정적 변수 (Static Variable)
    - 2.6 매개변수 (Parameter)
3. [재귀 함수(Recursive Function)](#3-재귀-함수recursive-function)
    - 3.1 재귀 함수의 정의
    - 3.2 재귀 함수의 특징
    - 3.3 재귀 함수의 장단점
    - 3.4 팩토리얼 계산
    - 3.5 피보나치 수열

---

## 1. 함수(Function)

### 1.1 함수의 정의

함수(Function)란 특정 작업을 수행하기 위해 작성된 **독립적인 코드 블록**이다.  
입력(매개변수)을 받아 처리한 후 결과(반환값)를 돌려주며, 코드의 **재사용성**과 **가독성**을 높인다.

```c
반환형 함수이름(매개변수 목록) {
    // 함수 본체
    return 반환값;
}
```

**예시**

```c
int add(int a, int b) {
    return a + b;
}
```

| 구성 요소 | 설명 |
|-----------|------|
| `반환형` | 함수가 반환하는 데이터 타입 (없으면 `void`) |
| `함수이름` | 함수를 호출할 때 사용하는 식별자 |
| `매개변수` | 함수에 전달하는 입력값 (없으면 `void` 또는 생략) |
| `return` | 호출한 곳으로 값을 반환 (void 함수는 생략 가능) |

---

### 1.2 함수 선언 (함수 프로토타입)

함수를 **사용 전에 미리 알려주는 선언**으로, 컴파일러가 함수의 형태를 인식하게 한다.  
주로 `main()` 위쪽 또는 헤더 파일에 작성한다.

```c
#include <stdio.h>

int add(int a, int b);   // 함수 선언 (프로토타입)

int main(void) {
    printf("%d\n", add(3, 4));   // 함수 호출
    return 0;
}

int add(int a, int b) {  // 함수 정의
    return a + b;
}
```

> ⚠️ 함수 선언 없이 정의가 호출보다 뒤에 있으면 **컴파일 경고 또는 오류** 발생

---

### 1.3 함수의 종류

| 종류 | 설명 | 예시 |
|------|------|------|
| **표준 라이브러리 함수** | C 표준에서 제공하는 함수 | `printf()`, `scanf()`, `sqrt()` |
| **사용자 정의 함수** | 프로그래머가 직접 작성한 함수 | `int add(int a, int b)` |
| **반환값 있는 함수** | `return`으로 값을 돌려주는 함수 | `int sum(...)` |
| **반환값 없는 함수** | `void`로 선언된 함수 | `void printHello(...)` |
| **매개변수 있는 함수** | 호출 시 인자를 전달받는 함수 | `int square(int n)` |
| **매개변수 없는 함수** | 인자 없이 호출되는 함수 | `void menu(void)` |

---

### 1.4 자료의 전달 방법

#### 값에 의한 호출 (Call by Value)

함수 호출 시 **변수의 값을 복사**하여 전달한다.  
함수 내부에서 값을 변경해도 **원본 변수에 영향을 주지 않는다.**

```c
#include <stdio.h>

void increment(int x) {
    x = x + 1;
    printf("함수 내부: %d\n", x);   // 6
}

int main(void) {
    int a = 5;
    increment(a);
    printf("함수 외부: %d\n", a);   // 5 (변경 없음)
    return 0;
}
```

```
함수 내부: 6
함수 외부: 5
```

---

### 1.5 참조에 의한 호출 (Call by Reference)

함수 호출 시 **변수의 주소(포인터)**를 전달한다.  
함수 내부에서 값을 변경하면 **원본 변수도 변경된다.**

```c
#include <stdio.h>

void increment(int *x) {
    *x = *x + 1;
    printf("함수 내부: %d\n", *x);   // 6
}

int main(void) {
    int a = 5;
    increment(&a);                    // 주소 전달
    printf("함수 외부: %d\n", a);    // 6 (변경됨)
    return 0;
}
```

```
함수 내부: 6
함수 외부: 6
```

**두 값 교환(swap) 예시**

```c
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int x = 10, y = 20;
    swap(&x, &y);
    printf("x=%d, y=%d\n", x, y);   // x=20, y=10
    return 0;
}
```

| 구분 | Call by Value | Call by Reference |
|------|--------------|-------------------|
| 전달 방식 | 값 복사 | 주소 전달 |
| 원본 변경 | ❌ 불가 | ✅ 가능 |
| 사용 시 | 단순 계산 | swap, 배열 조작 등 |

---

## 2. 변수의 유효 범위(Scope)

### 2.1 유효 범위의 개념

유효 범위(Scope)란 **변수가 유효하게 접근 가능한 코드 영역**을 의미한다.  
변수는 선언된 위치에 따라 접근 가능한 범위와 **생존 기간(Lifetime)**이 달라진다.

---

### 2.2 변수의 종류와 유효 범위

| 변수 종류 | 선언 위치 | 유효 범위 | 생존 기간 | 초기값 |
|-----------|-----------|-----------|-----------|--------|
| 지역 변수 | 함수/블록 내부 | 해당 블록 | 블록 실행 동안 | 미정의 (쓰레기값) |
| 전역 변수 | 모든 함수 외부 | 프로그램 전체 | 프로그램 종료 시까지 | `0` 자동 초기화 |
| 정적 변수 | 함수 내부 (`static`) | 해당 블록 | 프로그램 종료 시까지 | `0` 자동 초기화 |
| 매개변수 | 함수 매개변수 | 해당 함수 | 함수 실행 동안 | 호출 시 전달값 |

---

### 2.3 지역 변수 (Local Variable)

함수나 블록 `{}` 내부에 선언되며, **해당 블록 안에서만 사용 가능**하다.  
블록이 끝나면 메모리에서 자동으로 소멸된다.

```c
#include <stdio.h>

void func(void) {
    int local = 10;   // 지역 변수
    printf("지역 변수: %d\n", local);
}   // local은 여기서 소멸

int main(void) {
    func();
    // printf("%d", local);   // ❌ 오류: local 접근 불가
    return 0;
}
```

---

### 2.4 전역 변수 (Global Variable)

모든 함수 **외부**에 선언되며, 프로그램 어느 곳에서든 접근 가능하다.  
프로그램 시작 시 `0`으로 자동 초기화되며, 프로그램이 종료될 때까지 유지된다.

```c
#include <stdio.h>

int globalVar = 100;   // 전역 변수

void func(void) {
    printf("func에서: %d\n", globalVar);   // 100
    globalVar = 200;                        // 변경 가능
}

int main(void) {
    printf("main에서: %d\n", globalVar);   // 100
    func();
    printf("변경 후: %d\n", globalVar);    // 200
    return 0;
}
```

> ⚠️ 전역 변수는 편리하지만, 여러 함수에서 공유하면 **의도치 않은 변경**이 발생할 수 있어 남용을 피해야 한다.

---

### 2.5 정적 변수 (Static Variable)

`static` 키워드로 선언하며, **지역 변수의 범위 + 전역 변수의 생존 기간**을 갖는다.  
함수가 끝나도 메모리에서 소멸되지 않고, **다음 호출 시 이전 값을 유지**한다.

```c
#include <stdio.h>

void counter(void) {
    static int count = 0;   // 정적 변수 (최초 한 번만 초기화)
    count++;
    printf("호출 횟수: %d\n", count);
}

int main(void) {
    counter();   // 호출 횟수: 1
    counter();   // 호출 횟수: 2
    counter();   // 호출 횟수: 3
    return 0;
}
```

---

### 2.6 매개변수 (Parameter)

함수 호출 시 전달되는 값을 받는 **지역 변수의 일종**이다.  
함수가 호출될 때 생성되고, 함수가 종료되면 소멸된다.

```c
int multiply(int a, int b) {   // a, b가 매개변수
    return a * b;
}

int main(void) {
    int result = multiply(3, 5);   // 3, 5는 인자(argument)
    printf("%d\n", result);        // 15
    return 0;
}
```

| 용어 | 설명 |
|------|------|
| **매개변수(Parameter)** | 함수 정의에서 선언하는 변수 |
| **인자(Argument)** | 함수 호출 시 실제로 전달하는 값 |

---

## 3. 재귀 함수(Recursive Function)

### 3.1 재귀 함수의 정의

재귀 함수란 **함수가 자기 자신을 호출**하는 함수이다.  
큰 문제를 동일한 구조의 작은 문제로 나누어 해결하는 방식이다.

```c
반환형 함수이름(매개변수) {
    if (종료 조건) {          // 기저 조건 (Base Case)
        return 기본값;
    }
    return 함수이름(더 작은 문제);   // 재귀 호출
}
```

---

### 3.2 재귀 함수의 특징

1. **기저 조건(Base Case)** 이 반드시 필요하다 → 없으면 무한 루프
2. 호출될 때마다 **스택(Stack)** 메모리에 새로운 프레임이 쌓인다
3. 기저 조건에 도달하면 역순으로 값을 반환하며 스택이 해제된다
4. 반복문으로 구현 가능한 문제를 재귀로도 표현할 수 있다

---

### 3.3 재귀 함수의 장단점

#### ✅ 장점

- 코드가 **간결하고 직관적**이다
- 트리, 그래프 탐색 등 **복잡한 자료 구조** 처리에 적합하다
- 수학적 귀납법과 유사한 구조로 **논리적으로 명확**하다
- 분할 정복(Divide & Conquer), DFS 등 알고리즘 구현이 쉽다

#### ❌ 단점

- 함수 호출마다 **스택 메모리를 사용**하여 깊이가 깊어지면 **스택 오버플로우** 위험
- 동일한 연산을 **중복 계산**하는 경우 성능 저하 (예: 피보나치)
- 반복문에 비해 **함수 호출 오버헤드**가 발생하여 느릴 수 있다
- 코드 추적과 디버깅이 **반복문보다 어렵다**

---

### 3.4 팩토리얼 계산

**팩토리얼 공식:** `n! = n × (n-1) × (n-2) × ... × 1`, 단 `0! = 1`

**재귀적 정의:**
```
factorial(0) = 1                      ← 기저 조건
factorial(n) = n × factorial(n - 1)  ← 재귀 호출
```

**C언어 구현:**

```c
#include <stdio.h>

int factorial(int n) {
    if (n == 0) {               // 기저 조건
        return 1;
    }
    return n * factorial(n - 1);   // 재귀 호출
}

int main(void) {
    for (int i = 0; i <= 5; i++) {
        printf("%d! = %d\n", i, factorial(i));
    }
    return 0;
}
```

**출력:**
```
0! = 1
1! = 1
2! = 2
3! = 6
4! = 24
5! = 120
```

**호출 흐름 (예: factorial(4)):**

```
factorial(4)
  └─ 4 × factorial(3)
           └─ 3 × factorial(2)
                    └─ 2 × factorial(1)
                             └─ 1 × factorial(0)
                                      └─ return 1
                             └─ return 1
                    └─ return 2
           └─ return 6
  └─ return 24
```

---

### 3.5 피보나치 수열

**피보나치 공식:** `F(0) = 0`, `F(1) = 1`, `F(n) = F(n-1) + F(n-2)` (n ≥ 2)

**수열:** `0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...`

**C언어 구현:**

```c
#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0;       // 기저 조건 1
    if (n == 1) return 1;       // 기저 조건 2
    return fibonacci(n - 1) + fibonacci(n - 2);   // 재귀 호출
}

int main(void) {
    printf("피보나치 수열 (0~10항): ");
    for (int i = 0; i <= 10; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}
```

**출력:**
```
피보나치 수열 (0~10항): 0 1 1 2 3 5 8 13 21 34 55
```

**호출 흐름 (예: fibonacci(4)):**

```
fibonacci(4)
  ├─ fibonacci(3)
  │    ├─ fibonacci(2)
  │    │    ├─ fibonacci(1) → 1
  │    │    └─ fibonacci(0) → 0
  │    └─ fibonacci(1) → 1
  └─ fibonacci(2)
       ├─ fibonacci(1) → 1
       └─ fibonacci(0) → 0
결과: 3
```

> ⚠️ **성능 문제:** 단순 재귀 피보나치는 `fibonacci(2)`처럼 **동일한 호출이 중복** 발생한다.  
> 큰 n에서는 메모이제이션(Memoization) 또는 반복문 방식을 권장한다.

**반복문으로 개선한 피보나치:**

```c
int fibonacci_iter(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int prev = 0, curr = 1;
    for (int i = 2; i <= n; i++) {
        int next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;
}
```

---

## 📌 핵심 요약

| 주제 | 핵심 포인트 |
|------|-------------|
| 함수 선언 | 사용 전 프로토타입 선언 필요 |
| Call by Value | 값 복사 → 원본 변경 불가 |
| Call by Reference | 주소 전달 → 원본 변경 가능 |
| 지역 변수 | 블록 내에서만 유효, 블록 종료 시 소멸 |
| 전역 변수 | 프로그램 전체에서 접근 가능, 0으로 자동 초기화 |
| 정적 변수 | 지역 범위 + 프로그램 종료까지 유지 |
| 재귀 함수 | 기저 조건 필수, 스택 오버플로우 주의 |
| 팩토리얼 | `n! = n × (n-1)!`, 기저: `0! = 1` |
| 피보나치 | `F(n) = F(n-1) + F(n-2)`, 단순 재귀는 중복 계산 발생 |