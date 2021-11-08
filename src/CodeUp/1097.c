/*부모님을 기다리던 영일이는 검정/흰 색 바둑알을 바둑판에 꽉 채워 깔아 놓고 놀다가 "십(+)자 뒤집기를 해볼까?"하고 생각했다.
바둑판(19 * 19)에 흰 돌(1) 또는 검정 돌(0)이 모두 꽉 채워져 놓여있을 때,
n개의 좌표를 입력받아 십(+)자 뒤집기한 결과를 출력하는 프로그램을 작성해보자.
*/

#include <stdio.h>

int main() {
  int n; // 십자 뒤집기 횟수
  int i, j; // for문 변수
  int x, y; // 좌표
  int a[20][20] = {};
  
  for(i=1; i<=19; i++) {
    for(j=1; j<=19; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  scanf("%d", &n);
  for(i=1; i<=n; i++) {
    scanf("%d %d", &x, &y);
    for(j=1; j<=19; j++){
      if(a[x][j] == 0) a[x][j] = 1;
      else a[x][j] = 0;
    }
    for(j=1; j<=19; j++) {
      if(a[j][y] == 0) a[j][y] = 1;
      else a[j][y] = 0;
    }
  }
  for(i=1; i<=19; i++) {
    for(j=1; j<=19; j++) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
  return 0;
}
