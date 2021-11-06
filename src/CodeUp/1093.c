#include <stdio.h>

int main() {
  int attend[24] = {};
  int n, i, t;

  scanf("%d", &n);

  for(i = 1; i <= n; i++) {
    scanf("%d", &t);
    attend[t] += 1;
  }

  for(i=1;i<=23;i++) {
    printf("%d ", attend[i]);
  }
  return 0;
}
