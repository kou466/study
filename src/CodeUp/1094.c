#include <stdio.h>

int main() {
  int i, n;
  int attend[10000] = {};

  scanf("%d", &n);
  for(i = 1; i <= n; i++) {
    scanf("%d", &attend[i]);
  }

  for(i = n; i >= 1; i--) {
    printf("%d ", attend[i]);
  }
  return 0;
}
