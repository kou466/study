# C언어 기초

## Nov 2021

<details>
<summary>2021/11</summary>
<div markdown="1">

<details>
<summary>11/01</summary>
<div markdown="1">

### 21-11-01 
1. C언어의 정의
2. 기수법 / 2진수 ↔ 10진수 ↔ 16진수 변환 / bit, byte, word, double word (메모리 단위)
3. 변수 - 정수형, 실수형 / 메모리 주소 / 변수 이름 주의사항
4. 연산자 - 산술, 대입, 비트, 쉬프트 / 연산 우선 순위 / 2의 보수 / 정수 오버플로우
5. scanf
6. if / if ~ else
7. for / while / do ~ while

</div>
</details>

<details>
<summary>11/02</summary>
<div markdown="1">

### 21-11-02
1. switch, case
2. 형 변화(캐스팅), 부동 소수점, 정규화
3. 배열(Array), 소수(Prime Number), 상수(Constant)</br>
  ※ 배열의 원소에 접근할 때 __우리가 참조하는 원소의 위치가 배열의 크기 보다 작은지 확인__

  </br>3-1. 소수  
  1과 자신을 제외한 약수가 하나도 없는 수  
  >__※ 배열의 원소의 수를 변수 크기 지정 시 특정한 값이 들어있는 변수를 사용할 수 없다.__
  ``` c
  int total = 3;
  int arr[total];
  ```
  _위와 같이 사용시 에러 발생_

  </br>3-2. 상수  
  처음 정의 시 값이 바로 주어지고, 값의 변경이 불가능하다.  
  >__※ 배열의 크기를 상수로 지정할수 없다.__
  
  </br>3-3. 변수 및 배열을 초기화 하지 않고 사용 시 에러 발생  
  >예외)
  ```c
  int arr[3] = {1};
  →/* compiler */→
  int arr[3] = {1, 0, 0};
  ```
  >__※ 특별히 초기화 하지 않은 원소들에는 0이 자동으로 들어가게 된다.__

</div>
</details>

<details>
<summary>11/03</summary>
<div markdown="1">

### 21-11-03
1. 배열 연습문제(/src/modoocode)  
1-1. 입력받은 학생들의 성적은 내림차순으로 정렬  
<br>1-2. 입력받은 학생들의 성적을 막대 그래프로 표현 (해결 x)

</div>
</details>

<details>
<summary>11/04</summary>
<div markdown="1">

### 21-11-04
1. 다차원 배열
  - 2차원 배열
  - 3차원 이상의 고차원 배열

  </br>1-1. 2차원 배열
    ```c
    int arr[3][2];
    ```
    > 위 배열을 그림으로 보면 아래와 같다

|`arr[0]`|`arr[1]`|`arr[2]`|
|:---:|:---:|:---:|
|↓|↓|↓|
|`arr[0][0]`|`arr[1][0]`|`arr[2][0]`|
|`arr[0][1]`|`arr[1][1]`|`arr[2][1]`|

→ ```arr[m][n];``` 과 같이 배열을 선언한다면(m, n은 임의의 정수값), m × n 개의 변수를 가지는 배열을 선언한 것이다. 

- 2차원 배열이나 1차원 배열 모두 메모리 상에서 연속적으로 존재 (메모리는 항상 1차원)

|메모리|
|---|
|`arr[0][0]`|
|`arr[0][1]`|
|`arr[0][2]`|
|`arr[1][0]`|
|`arr[1][1]`|
|`arr[1][2]`|
|`arr[2][0]`|
|`arr[2][1]`|
|`arr[2][2]`|

- 하지만 2차원 배열을 생각할 때 해당 원소들이 아래 표처럼 2차원 공간상에 배치 되어 있다고 생각할 수 있다.

|`arr[0][0]` 1|`arr[0][1]` 2|`arr[0][2]` 3|
|---|---|---|
|`arr[1][0]` 4|`arr[1][1]` 5|`arr[1][2]` 6|
|`arr[0][1]` 7|`arr[1][1]` 8|`arr[2][2]` 9|

※ __일차원 배열은 한 개의 인덱스로 원소에 접근하는 것__이고, __이차원 배열은 두 개의 인덱스로 원소에 접근하는 것__이다.

</div>
</details>

<details>
<summary>11/05</summary>
<div markdown="1">

### 21-11-05
1. 2차원 배열 실습(/src/modoocode)
2. 배열 정의  
`int arr[2][3] = {1,2,3,4,5,6};`  
`int arr[2][3] = {{1,2,3},{4,5,6}};`  
`int arr[] = {1,2,3,4};` = 
`int arr[4] = {1,2,3,4};`
> 위와 같이 정의 가능하다.

`int arr[];`
>하지만 위와 같이 정의 하는것은 불가능하다. 위처럼 배열을 정의한다면 컴파일러는 우리가 어떠한 크기의 배열을 정의하고 싶은지 모르기 때문에 오류가 발생한다.

  2-1. 2차원 배열의 정의  
  `int arr[][3] = {4,5,6}, [7,8,9}};`
  >비어있는 대괄호 안은 '2'가 들어간다.

  `int arr[][2] = {1,2},{3,4},{5,6},{7}};`
  >배열 정의 시 `arr[][2]`라고 했기 때문에 무조건 원소가 2인 1차원 배열들이 생기게 된다. 즉 7이 속한 1차원 배열에는 원소가 한 개인 것이 아니라 마치 `arr[3] = {1}`고 해도 상관 없는 것 처럼 8번째 원소가 들어갈 자리를 비워 놓게 되어 틀린 문장이 아니다.

  `int arr[2][] = {{4,5,6},{7,8,9}}`
  >__다차원 배열의 경우 맨 앞의 크기를 제외한 나머지 크기들을 정확히 지정해줘야 오류가 발생하지 않는다.__

3. 3차원, 그 이후 차원의 배열들

- 3차원 배열(그 이후)의 정의는 2차원 배열과 거의 동일

>일차원 배열은 한 개의 값(x)으로 원소에 접근하는 것이고, 이차원 배열은 두 개의 값(x,y)으로 원소에 접근하는 것이다!  
->  
3차원 배열은 세 개의 값(x,y,z)로 원소에 접근한다.

</div>
</details>

<details>
<summary>11/06</summary>
<div markdown="1">

### 21-11-06
~~1. 포인터~~  
- 1차원 배열 기초 연습 문제(/src/CodeUp)

</div>
</details>

<details>
<summary>11/07</summary>
<div markdown="1">

### 21-11-07
- 일주일치 복습 및 내용 정리/이해

</div>
</details>

<details>
<summary>11/08</summary>
<div markdown="1">

### 21-11-08
- 2차원 배열 기초 연습 문제
(/src/CodeUp)

</div>
</details>

<details>
<summary>11/09</summary>
<div markdown="1">

### 21-11-09
- 포인터
  >포인터 : 메모리 상에 위치한 특정한 데이터의 (시작) __주소값__을 보관하는 변수

  - (포인터에 주소값이 저장되는 데이터의 형) *(포인터의 이름);

  `int *p;`

  - (포인터에 주소값이 저장되는 데이터의 형)* (포인터의 이름);

  `int* p;`

  -> 포인터 p는 int형 데이터의 주소값을 저장하는 변수

- & 연산자
  - 변수 a의 주소값을 알고 싶다면 `&a` 로 쓰면 된다.
  
  >& 연산자를 사용하여 특정한 데이터의 메모리 상의 주소값을 알 수 있다.

</div>
</details>

<details>
<summary>11/10</summary>
<div markdown="1">

### 21-11-10
- __포인터는 특정한 데이터의 주소값을 보관한다. 이 때 포인터는 주소값을 보관하는 데이터의 형에 *를 붙임으로써 정의되고, &연산자로 특정한 데이터의 메모리 상의 주소값을 알아올 수 있다.__
</br></br>
- \* 연산자
  - 주소값에서 해당 주소값에 대응되는 데이터를 가져오는 연산자
</br> -> '_나에게 저장된 주소값에 해당하는 데이터로 생각하세요'_

int 변수 a / 포인터 p
</br>-> 포인터 p에 변수 a의 주소값이 저장되어 있다면, __포인터 p는 변수 a를 가리킨다.__ (_포인터 또한 엄연한 변수_이기 때문에 특정한 메모리 공간을 차지한다.)

- 포인터도 타입이 있다.
- 포인터도 변수이기 때문에 포인터에 들어간 주소값이 바뀔 수 있다.

</div>
</details>

<details>
<summary>11/11</summary>
<div markdown="1">

### 21-11-11
- 포인터는 특정한 데이터의 메모리 상의 (시작) 주소값을 보관하는 변수

- 상수 포인터
  - 상수: 어떠한 데이터를 상수로 만들기 위해 `const` 키워드를 붙이면 된다. </br> -> '이 데이터의 내용은 절대로 바뀔수 없다!'
  </br>→→ '절대로 바뀌지 않을 것 같은 값에는 무조건 `const` 키워드를 붙여주는 습관'을 가져야한다.  
</br>
- `const int *`의 의미는 `const int`형 변수를 가리키는게 아니라 `int`형 변수를 가리키는데, __그 값을 절대로 바꾸지 말라__라는 의미 이다.

</div>
</details>

<details>
<summary>11/12</summary>
<div markdown="1">

### 21-11-12
~~포인터 덧셈~~  
11-09 ~ 11-11 까지의 포인터 복습

</div>
</details>

<details>
<summary>11/13</summary>
<div markdown="1">

### 21-11-13
- 11-11 참조(상수 포인터 부분)

```c
/* 상수 포인터? */
#include <stdio.h>
int main() {
  int a;
  int b;
  const int* pa = &a;

  *pa = 3;  // 올바르지 않은 문장
  pa = &b;  // 올바른 문장
  return 0;
}
```

```c
const int* pa = &a;
// int* pa와 같이 정의해도 int *pa와 같음
```

- `const int*`는 `const int`형 변수를 가리키는 것이 아니라 `int`형 변수를 가리키는데, __그 값을 절대로 바꾸지 말라__는 의미이다.  
즉, `pa`는 어떠한 `int`형 변수를 가리키고 있는데 `const`가 붙었으므로 `pa`가 가리키는 변수의 값은 절대로 바뀌면 안된다.

→ `a` 자체는 변수이므로 값이 자유롭게 변경 될 수 있다.  
`pa`를 통해서 `a`를 간접적으로 가리킬 때에는 컴퓨터가 __'아, 내가 `const`인 변수를 가리키고 있구나'__ 라고 생각하기 때문에(`const int*` 로 포인터를 정의했기때문) 값을 바꿀 수 없다.

</div>
</details>

<details>
<summary>11/14</summary>
<div markdown="1">

### 21-11-14
- [11-11](#21-11-11) / [11-13](#21-11-13) 참조

```c
/* 상수 포인터? */
#include <stdio.h>
int main() {
  int a;
  int b;
  int* const pa = &a;

  *pa = 3;  // 올바른 문장
  pa = &b;  // 올바르지 않은 문장

  return 0;
}
```

- 위 코드에서는 `const`키워드가 `int*`앞에 있는것이 아니라 `int*`와 `pa`사이에 놓이고 있다.

- 포인터에는 가리키는 데이터의 주소값, 즉 `a`의 주소값이 `pa`에 저장 된다. 따라서, 이 `pa`가 `const`라는 의미는 `pa`의 값이 절대로 바뀔 수 없다는 것인데, `pa`는 포인터가 가리키는 변수의 주소값이 들어 있으므로 `pa`가 처음에 가리키는것(`a`)말고 다른것은 절대로 건드릴 수 없다는 것이다.

```c
*pa = 3; //올바른 문장
```

- pa가 가리키는 값을 바꾸면 안된다는 말은 안했기 때문에 위 문장은 가능하다.

</div>
</details>

<details>
<summary>11/15</summary>
<div markdown="1">

### 21-11-15
- 포인터 덧셈, 뺄셈

```c
#include <stdio.h>
int main() {
  int a;
  int* pa = &a;

  printf("pa의 값: %p \n", pa);

  printf("(pa + 1)의 값 : %p \n", pa + 1); // 포인터의 덧셈

  printf("(pa - 1)의 값 : %p \n", pa - 1); // 포인터의 뺄셈

  return 0;
}
```

- int가 4바이트이기 때문에 pa + 1는 주소값에 4가 더해져서 출력된다.

- int가 아닌 char, double을 사용하더라도 그에 맞게 1바이트, 8바이트 더해지게 된다.

- 위 코드에서 뺄셈의 경우에도 4가 빠지게 된다.

※ C에서는 두 포인터끼리의 덧셈을 허용하지 않는다.  
-> 두 변수의 메모리 주소를 더해서 나오는 값은 이전에 포인터들이 가리키던 두 변수와 관계없는 메모리 속의 임의 지점이다.

- 배열과 포인터

  - 배열은 __변수가 여러개 모인 것으로 생각할 수 있다.__

  - 배열들의 각 원소는 메모리 상에 연속되게 놓인다.

  ```c
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  ```

  이라고 정의한다면 ![array.webp](./src/img/array.webp) 위 사진에서 볼 수 있듯, 메모리 상에 연속된 형태로 나타나게 된다. 한개의 원소는 int형 변수이기 때문에 4바이트를 차지하게 된다.

</div>
</details>

<details>
<summary>11/16</summary>
<div markdown="1">

### 21-11-16

~~배열과 포인터 2 (예정)~~
- 휴식일

</div>
</details>

<details>
<summary>11/17</summary>
<div markdown="1">

### 21-11-17
- 배열과 포인터2
  - 포인터로도 배열의 원소에 쉽게 접근할 수 있다.  
  -> 배열의 시작 부분을 가리키는 포인터를 정의한 뒤에 포인터에 1을 더하면 그 다음 원소를 가르킨다.

  - 포인터는 자신이 가리키는 데이터의 '형'의 크기를 곱한 만큼 덧셈을 수행하기 때문  

  ※ 되돌아보기: __배열의 각 원소는 하나의 변수로 생각할 수 있다.__

```c
#include <stdio.h>
int main() {
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int* parr;

  parr = &arr[0];

  printf("arr[3] = %d , *(parr + 3) = %d \n", arr[3], *(parr + 3));
  return 0;
}
```
>*를 이용하여 원소들과 똑같은 역할 수행이 가능하다.

- 배열에서 배열의 이름은 배열의 첫 번째 원소의 주소값을 나타낸다.
이때, 배열의 이름이 배열의 첫 번째 원소를 가리키는 포인터는 *__아니다!__*


</div>
</details>

<details>
<summary>11/18</summary>
<div markdown="1">

### 21-11-18
배열 = 배열 / 포인터 = 포인터  
-> 배열의 이름과 첫 번째 원소의 주소값은 엄밀히 다른 것이다.  

(`sizeof`사용 시 배열은 배열의 실제 크기가 나오는 반면, 포인터는 배열 자체 크기가 아닌 포인터의 크기를 알려줌)

- 배열의 이름이 `sizeof` 연산자나 주소값 연산자(`&`)와 사용될 때(예를 들어 `&arr`)의 경우를 제외하고는, __배열의 이름을 사용 시 암묵적으로 첫 번째 원소를 가리키는 포인터로 타입 변환된다.__

- [] 연산자?
  - ex) arr[3] = *(arr + 3)로 바뀌어서 처리됨.
  - 3[arr] -> *(3 + arr)로 바꿔짐.
   따라서, arr[3]과 동일한 결과를 출력한다.

- 포인터의 정의

```c
int* p;
int *p;
/*두 가지 모두 가능하나, 아래 형식을 권장함.*/

int *p, *q, *r; // 올바른 문장
int* p, q, r; // 틀린 문장

// p만 int를 가리키는 포인터, q, r은 평볌한 int형 변수가 된다.
```

</div>
</details>

<details>
<summary>11/19</summary>
<div markdown="1">

### 21-11-19
> 이전 내용
- 배열은 배열이고, 포인터는 포인터이다. 다만;
  - `sizeof`와 주소값 연산자와 함꼐 사용할 때를 제외하면, 배열의 이름은 첫 번째 원소를 가리킨다.
   - `arr[i]`와 같은 문장은 사실 컴파일러에 의해 `*(arr + i)`로 변환된다.

---

- 1차원 배열 가리키기

```c
#include <stdio.h>

int main() {
  int arr[3] = {1, 2, 3};
  int *parr;

  parr = arr; // parr = &arr[0]; 과 동일

  printf("arr[1] : %d \n", arr[1]);
  printf("parr[1] : %d \n", parr[1]);
  return 0;
}
```
---
```c
#include <stdio.h>
int main() {
  int arr[10] = {100, 98, 97, 95, 89, 76, 92, 96, 100, 99};

  int* parr = arr;
  int sum = 0;

  while (parr - arr <= 9) {
    sum += (*parr);
    parr++;
  }

  printf("내 시험 점수 평균 : %d \n", sum / 10);
  return 0;
}
```

※ 포인터 연산에서 1 증가 시킨다면, `parr`에 저장된 주소값에 1을 더하는것이 아니라 `1 *`(포인터가 가리키는 타입의 크기)가 더해진다.

- 여기서 `parr`을 따로 선언한 이유는 `arr`를 증가 시켜서 `*(arr)`로 접근 할 수 없기 때문이다. (아래 코드 참고)

```c
#include <stdio.h>
int main() {
  int arr[10] = {100, 98, 97, 95, 89, 76, 92, 96, 100, 99};

  arr++;  // 오류
  return 0;
}
```

- 배열의 이름이 첫 번째 원소를 가리키는 포인터로 타입 변경 된다고 했을 때, 단순히 배열의 첫 번째 원소를 가리키는 주소값 그 자체가 될 뿐이다.


- 따라서, `arr++`문장은 C컴파일러 입장에서 `(0x7fff1234)++;`를 수행한 것인데, 이는 말이 되지 않는 문장이다.

</div>
</details>

<details>
<summary>11/20</summary>
<div markdown="1">

### 21-11-20
- 포인터의 포인터
  - `int **p;` -> `int`를 가리키는 포인터를 가리키는 포인터

```c
// 예제
#include <stdio.h>
int main() {
  int a;
  int *pa;
  int **ppa;

  pa = &a;
  ppa = &pa;

  a = 3;

  printf("a: %d // *pa : %d // **ppa : %d \n", a, *pa, **ppa);
  //*pa = a, **ppa = *(*ppa) = *pa = a
  printf("&a: %p // pa : %p // *ppa : %p \n", &a, pa, *ppa);
  //pa = &a, *ppa = pa = &a
  printf("&pa: %p // ppa : %p \n", &pa, ppa);
  //ppa = &pa
}

// 같은 행에 있는 값들이 모두 같음
```

> 위 관계를 그림으로 나타내면 아래와 같다.

![PP.webp](./src/img/PP.webp)

- 배열 이름의 주소값
  > __이전 내용__  
   배열 이름에 `sizeof`연산자와 주소값 연산자를 사용할 때 빼고는 전부 다 포인터로 암묵적 변환이 이루어진다.

```c
#include <stdio.h>

int main() {
  int arr[3] = {1, 2, 3};
  int (*parr)[3] = &arr;

  printf("arr[1] : %d \n", arr[1]);
  printf("parr[1] : %d \n", (*parr)[1]);
}
``` 

- `&arr`의 의미?  
  -> `arr`는 `int *`로 암묵적 변환된다고 했으니까 `&arr`는 `int **`가 되는것이 *__아니다!__*  
암묵적 변환은 주소값 연산자가 왔을 때는 이루어지지 않는다.

-> `arr`는 __크기가 3인 배열__이기 때문에 `&arr`를 보관할 포인터는 __크기가 3인 배열을 가리키는 포인터__가 되어야 한다.

> ※ `parr`를 정의할 때 `*parr`를 꼭 `()`로 감싸야 한다. 괄호를 뺀다면 `int *parr[3]`과 같이 되어, 컴파일러가 `int *` 원소 3개를 가지는 배열을 정의한 것으로 오해하게 된다.

</div>
</details>

<details>
<summary>11/21~26</summary>
<div markdown="1">

### 21-11-21 ~ 21-11-26
  - 휴식(안경 파손, 수리 중)

</div>
</details>

<details>
<summary>11/27</summary>
<div markdown="1">

### 21-11-27
- 배열 이름의 주소값
  - 배열 이름에 `sizeof`연산자를 사용할 때 빼고는 전부 포인터로 암묵적 변환이 이루어진다.  
  _※ 암묵적 변환은 주소값 연산자가 왔을 때에는 이루어 지지 않는다._
  


</div>
</details>

<details>
<summary>11/28</summary>
<div markdown="1">

### 21-11-28
- 2차원 배열의 [] 연산자


</div>
</details>

<details>
<summary>11/29</summary>
<div markdown="1">

### 21-11-29
- 포인터의 형(type)을 결정짓는 두 가지 요소
  
- 포인터 배열


</div>
</details>

<details>
<summary>11/30</summary>
<div markdown="1">

### 21-11-30
- 포인터 복습


</div>
</details>

</div>
</details>

## Dec 2021

<details>
<summary>2021/12</summary>
<div markdown="1">

<details>
<summary>12/01</summary>
<div markdown="1">
  
### 21-12-01
- 포인터 복습
  
  
</div>
</details>

<details>
<summary>12/02</summary>
<div markdown="1">
  
### 21-12-02
- function (1)
  
  
</div>
</details>

<details>
<summary>12/03</summary>
<div markdown="1">
  
### 21-12-03
- function (1)
  - `main` 함수
  
  
</div>
</details>

<details>
<summary>12/04</summary>
<div markdown="1">

### 21-12-04
- function (2)
  
  
</div>
</details>

<details>
<summary>12/05</summary>
<div markdown="1">

### 21-12-05
- function (2)
  - 함수의 원형
  
  
</div>
</details>

<details>
<summary>12/06</summary>
<div markdown="1">

### 21-12-06
- function (3)
  
  
</div>
</details>

<details>
<summary>12/07</summary>
<div markdown="1">

### 21-12-07
- function (3)
  - 함수 포인터
  
  
</div>
</details>

<details>
<summary>12/08</summary>
<div markdown="1">

### 21-12-08
- function 복습
  
  
</div>
</details>

<details>
<summary>12/09</summary>
<div markdown="1">

### 21-12-09
- function 복습
  
  
</div>
</details>

<details>
<summary>12/10</summary>
<div markdown="1">

### 21-12-10
- 배열 + 포인터 + function
  
  
</div>
</details>

<details>
<summary>12/11~12</summary>
<div markdown="1">

### 21-12-11~12
- day off
  
  
</div>
</details>

<details>
<summary>12/13~12/31</summary>
<div markdown="1">

### 21-12-13 ~ 21-12-31
 - 사지방 고장
  
  
</div>
</details>

</div>
</details>


## Jan 2022

<details>
<summary>2022/01</summary>
<div markdown="1">

<details>
<summary>01/01</summary>
<div markdown="1">

- 배열

</div>
</details>

<details>
<summary>01/02</summary>
<div markdown="1">

- 배열 및 포인터

</div>
</details>

<details>
<summary>01/03</summary>
<div markdown="1">

- 배열 및 포인터

</div>
</details>

<details>
<summary>01/04</summary>
<div markdown="1">

- 포인터

</div>
</details>

<details>
<summary>01/05</summary>
<div markdown="1">

- 포인터

</div>
</details>

<details>
<summary>01/06</summary>
<div markdown="1">

- 포인터

</div>
</details>

<details>
<summary>01/07</summary>
<div markdown="1">

- 포인터

</div>
</details>

<details>
<summary>01/08</summary>
<div markdown="1">

- 포인터

</div>
</details>

<details>
<summary>01/09</summary>
<div markdown="1">

- function

</div>
</details>

<details>
<summary>01/10 ~ 01/16</summary>
<div markdown="1">

- 사지방 고장

</div>
</details>

</div>
</details>

## Feb 2022

<details>
<summary>2022/02</summary>
<div markdown="1">

<details>
<summary>02/25</summary>
<div markdown="1">

### 돌고돌아 포인터
- 메모리 상에 위치한 특정한 데이터의 (시작) 주소값을 보관하는 변수

- &연산자 - 피연산자의 주소값을 불러옴

- *연산자  
ex)
```c
p = &a;// 포인터 p는 변수 a를 가리킨다.
*p = 3; ( a = 3; ) //동일한 의미
```

</div>
</details>

<details>
<summary>02/27</summary>
<div markdown="1">

### 이어서 포인터
- 포인터의 타입  
ex)
```c
int a;
int *p; // 포인터가 가리키는 데이터 타입(여기서는 int형)
p = &a; // 메모리에서 차지하는 모든 주소들의 위치가 들어있는 것이 아니라 '시작주소'만 들어있다
*p = 4;
```
- 포인터는 __변수__다  
-> 포인터에 들어간 주소값이 바뀔 수 있다.


- 상수 포인터
> - 상수: `const`사용, 값 변경 절대 불가능  
> - 포인터에 const 사용 가능

</div>
</details>

<details>
<summary>02/28</summary>
<div markdown="1">

### 또 포인터
- `const int *pa = &a`
  > - `pa`가 가리키는 변수의 값은 절대로 바뀔 수 없다  
  > - `a` 자체는 값이 자유롭게 변경 될 수 있다

- `int *const pa = &a;`
  > - pa가 처음 가리키는 것(a의 주소값) 말고 다른 것은 절대 바꿀 수 없다.

- 포인터 덧셈
  - 포인터 + 정수(1,2...) = 포인터의 형(int, double..)만큼 주소값에 더해짐
  - _포인터끼리의 덧셈은 허용하지 않으나 뺄셈은 허용함_

- 포인터의 대입
  - 포인터의 형이 같다면 포인터를 대입할 수 있다.


- 배열과 포인터
  - 배열은 __변수가 여러개 모인 것으로 생각할 수 있다__
  - 배열들의 각 원소는 메모리 상에 연속되게 놓인다  
 > → 포인터로도 배열의 원소에 접근이 가능하다  
>배열의 시작 부분을 가리키는 포인터를 정의한 뒤에 포인터에 1을 더하면 그 다음 원소를 가리킨다. (데이터의 형에 따라 다름)

- __배열의 이름__은 __배열의 첫 번째 원소의 주소값__을 나타내고 있다
  > 배열의 이름이 배열의 첫 번째 원소를 가리키는 포인터는 _**아니다!**_

- 배열은 배열, 포인터는 포인터
  - sizeof 연산자를 통해 배열과 포인터의 크기를 알아냈을 때
    - 배열의 경우 그 배열의 __실제 크기__가 나온다.
    - 반면 포인터의 경우 단순히 포인터의 크기를 알려준다.

→ 배열의 이름과 첫 번째 원소의 주소값은 엄밀히 __다른 것__이다.
> C언어 상에서 배열의 이름이 sizeof 연산자나 주소값 연산자(&)와 사용될 경우를 제외하면, __배열의 이름을 사용시 암묵적으로 첫 번째 원소를 가리키는 포인터로 타입 변환되기 때문__

- [] 연산자
```c
/* [] 연산자 */
#include <stdio.h>
int main() {
  int arr[5] = {1, 2, 3, 4, 5};

  printf("a[3] : %d \n", arr[3]);
  printf("*(a+3) : %d \n", *(arr + 3));
  return 0;
}
```
- 
  - `arr`는 `+`연산자와 사용되기 때문에 첫 번째 원소를 가리키는 포인터로 변환됨
  - 위 코드에서 arr[3] = *(arr + 3)으로 변환되어 처리
  
    - 3[arr] = *(3 + a)도 가능

- 포인터 정의
  - `int* p;`
  - `int *p;`
  - 모두 사용 가능 하나 아래 형식을 더 많이 씀
    - `int *p, *q, *r;`과 같이 여러개의 변수를 선언
    - `int* p, q, r;` 이때, p만 int를 가리키는 포인터이고, q,r은 평범한 int형 변수

</div>
</details>

</div>
</details>


## Mar 2022

<details>
<summary>2022/03</summary>
<div markdown="1">

<details>
<summary>03/01</summary>
<div markdown="1">

### 마지막 포인터

- 복습
  -  `int arr[3];` 배열을 정의 `int *parr;` 포인터를 정의  
-> `parr = arr;` // parr = &arr[0];과 동일

- 1차원 배열 가리키기
  - 배열 arr를 선언하고, arr++를 하게 되면 오류가 생긴다. 그 이유는 배열의 이름이 첫 번째 원소를 가리키는 포인터로 타입 변경 된다고 했을 때, 이는 단순히 배열의 첫 번째 원소를 가리키는 주소값 그 자체가 될 뿐이기 때문이다.
  - 위 내용을 C컴파일러 입장에서 봤을 때, `(0x7fff1324)++;` 를 수행한것과 같다. 말이 되지 않는 문장이다.

- 포인터의 포인터
  - `int **p;` = int를 가리키는 포인터를 가리키는 포인터
 
- 배열 이름의 주소값
```c
int arr[3] = {1, 2, 3};
int (*parr)[3] = &arr;
```
- - arr는 크기가 3인 배열, &arr를 보관할 포인터는 __크기가 3인 배열을 가리키는 포인터__가 되어야한다.
  - parr을 정의할 때 *parr을 꼭 ()로 감싸야 하는데, 괄호를 빼면 `int *parr[3]` 로 되어 C컴파일러가 `int *` 원소 3개를 가지는 배열을 정의한 것으로 오해하게 된다.
  - parr은 _크기가 3인 배열을 가리키는 포인터_이기 때문에 배열을 직접 나타내기 위해서 *연산자를 통해 원래의 arr를 참조해야한다. (*parr)[1] = arr[1]
  - parr과 arr는 같은 값을 가진다.
    - arr와 parr 모두 배열의 첫 번째 원소의 주소값을 출력하나, 두 개의 타입은 다르다.  
    => arr자체가 어떤 메모리 공간에 존재하는 것이 아니기 때문이다.
  
</div>
</details>

<details>
<summary>03/02</summary>
<div markdown="1">

### 진짜 마지막 포인터..

- 2차원 배열의 []연산자
  - 1차원 배열이 여러 개 있다고 생각하면 된다.  
  => 컴퓨터 메모리 구조는 1차원이기 때문에 2차원 배열은 항상 선형으로 존재한다.
  - arr[0] = arr[0][0] / arr[1] = arr[1][0]  
  => 1차원 배열과 마찬가지로 sizeof나 주소값 연산자와 사용되지 않을 경우, __`arr[0]`은 `arr[0][0]`을 가리키는 포인터로 암묵적 타입 변환되고, `arr[1]`은 `arr[1][0]`을 가리키는 포인터로 타입 변환된다__
  > 1차원 배열 int arr[]에서 arr와 &arr[0]은 그 자체로 완전 다른 것이었던 것처럼, 2차원 배열 int arr[][]에서 arr[0]과 &arr[0][0] 또한 다르다. 다만 암묵적으로 타입 변환 시에 같은 것을 변환할 뿐이다.
  - sizeof 사용 시, 2차원 배열의 열의 개수를 계산할 수 있다.  
=> sizeof(arr[0])을 하면 0번째 행의 길이(총 열의 개수)가 나온다.  
=> 총 행의 개수는 전체 크기를 열의 크기로 나눈 것이다.
  - arr[0][0]의 형이 int이므로 arr[0]은 int *형이 되고, arr[1]또한 int *형이 된다.
  > 그러나 int*를 가리키는 포인터는 int**이나, __arr는 int **형이 되지 않는다.__  
  > int **형은 배열의 원소에 자유롭게 접근할 수 없다.

</div>
</details>

<details>
<summary>03/03</summary>
<div markdown="1">

### 끝나지 않는 포인터

- 포인터의 형(type)을 결정짓는 두 가지 요소
  - int arr[10] 이라는 배열에서 x번째 원소의 주소값을 알아내는 방법
    - 배열의 시작주소를 그냥 arr라 한다면 arr[x]의 주소값은 `arr + 4x` 로 나타낼 수 있다.
  - int arr[a][b] 라는 2차원 배열의 경우, arr[x][y]의 주소값 구하는 방법
    - 앞서 int arr[a][b]는 int arr[b] 짜리 배열이 메모리에 a개 존재하는 것이라고 설명했다. 따라서 arr[x][0]의 주소값은 x번째 int arr[b]짜리 배열이 된다.
    - arr[x][0]의 주소값은 `arr + 4bx` 가 된다.  arr[b] 배열의 크기는 4b이니까 x번째 배열의 시작주소는 4bx이기 때문
    - 따라서 arr[x][y]의 시작 주소값은 `arr + 4bx + 4y` 가 된다.
    - 여기서 중요한 점은 arr[x][y]의 주소값을 정확히 계산하기 위해서는 x, y 뿐만 아니라 b가 뭔지 알아야 한다.
    - 따라서 2차원 배열을 가리키는 포인터를 통해서 원소들을 정확히 접근하기 위해서는;
    1. 가리키는 원소의 크기 (여기서는 4)
    2. b의 값
    - 위 두 정보가 포인터의 타입에 명시되어 있어야 컴파일러가 원소에 올바르게 접근할 수 있다.


</div>
</details>

<details>
<summary>03/04</summary>
<div markdown="1">

### 진짜 마지막 포인터

- `int (*parr)[3]; // 배열의 형 (*포인터 이름)[2차원 배열의 열 개수]`
  - __parr은 크기가 3인 배열을 가리키는 포인터를 의미__
  - 1차원 배열에서 배열의 이름이 첫 번째 원소를 가리키는 포인터로 타입 변환이 된 것처럼, 2차원 배열에서 배열의 이름이 첫번째 __행__을 가리키는 포인터로 타입 변환이 되어야 한다. 이때, 첫 번째 행은 크기가 3인 1차원 배열이다.

- 포인터 배열
  - 배열 포인터는 배열을 가리키는 포인터
  - 포인터 배열은 포인터들을 모아놓은 배열
  > 용어는 언제나 뒷부분이 진짜라고 생각하면 된다. 즉, __포인터 배열은 배열이고, 배열 포인터는 포인터이다.__
  - 배열의 형을 `int*` 로도 할 수 있다. 즉, `int*` 배열에서 각각의 원소를 포인터로 취급할 수 있다.
```c
arr[0] = &a;
arr[1] = &b;
arr[2] = &c;
```
- - 위 문장에서 각각의 원소는 int형 변수 a, b, c를 가리키게 된다.
  - arr[0]에는 변수 a의 주소가, arr[1]에는 변수 b의 주소, arr[2]에는 변수 c의 주소가 각각 들어간다.

</div>
</details>

</div>
</details>

</div>
</details>






###### Reference: https://modoocode.com/
