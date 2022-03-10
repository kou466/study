// 자기 자신을 호출하는 함수를 이용해서 1 부터 특정한 수까지의 곱을 구하는 프로그램
// 재귀, 함수 포인터 이용

#include <stdio.h>

int recursive(int a);
int main() {
  int n;

  scanf("%d", &n);
  printf("%d \n", recursive(n));
  
  return 0;
}

int recursive(int n) {
  int result = 0;
  
  for(int i = 1; i <= n; i++) {
    result = i;
  }
  return result;
}
