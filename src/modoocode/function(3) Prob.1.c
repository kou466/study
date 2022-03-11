// 자기 자신을 호출하는 함수를 이용해서 1 부터 특정한 수까지의 곱을 구하는 프로그램
// 재귀?

#include <stdio.h>

int recursive(int n);
int main() {
  int n;

  scanf("%d", &n);
  printf("%d \n", recursive(n));
  
  return 0;
}

int recursive(int n) {
  if(n == 0) return 1;
  return n * recursive(n-1);
}
