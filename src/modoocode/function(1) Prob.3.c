#include <stdio.h>

int add(int n) {
  int value = 0;
  
  for (int i; i <= n; i++) {
    value += i;
    }
  return value;
}

int main() {
  int n;

  printf("Input : \n");
  scanf("%d", &n);

  printf("%d \n", add(n));

  return 0;
}
