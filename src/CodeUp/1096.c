#include <stdio.h>

int main() {
  int n; // 흰 돌의 개수
  int i, j; // for문 변수
  int x, y; // 좌표
  int a[20][20] = {};

  scanf("%d", &n);
  for(i=1; i<=n; i++) {
    scanf("%d %d", &x, &y);
    a[x][y] = 1;
  }
  for(i=1; i<=19; i++) {
    for(j=1; j<=19; j++) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
  return 0;
}
