#include <stdio.h>

int slave(int asset, int income) {
  asset += income;
  return asset;
}

int main() {
  int asset = 100000;
  int income;
  
  printf("Today's Income : \n");
  scanf("%d", &income);
  
  printf("asset : %d \n", slave(asset, income));

  return 0;
}
