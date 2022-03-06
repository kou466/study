#include <stdio.h>

int prime(int n) {
  int cnt = 0;
  int pnum = 0;
  
  for (int i = 2; i <= n; i++) {
    for (int j = 1; j <= i; j++){
      if(i % j == 0) {
        cnt++;
      }
    }
    if (cnt == 2) {
      pnum++;
    }
    cnt = 0;
  }

  return pnum;
}

int main() {
  int n;

  printf("Input : \n");
  scanf("%d", &n);

  printf("%d \n", prime(n));

  return 0;
}
