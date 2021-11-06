#include <stdio.h>

int main() {
  int i, n;
  int temp;
  int attend[10000] = {};

  scanf("%d", &n);
  for(i = 1; i <= n; i++) {
    scanf("%d", &attend[i]);
  }
  
  temp = attend[1];
  for(i = 1; i < n; i++) {
    if(temp > attend[i+1]) {
      temp = attend[i+1];
    }
  }

  printf("%d", temp);

  return 0;
}
