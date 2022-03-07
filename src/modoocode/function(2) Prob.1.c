#include <stdio.h>

int sort_descending(int *parr);
int main() {
  int arr[10];

  for(int i = 0; i < 10; i++) {
    scanf("%d", &arr[i]);
  }
  
  sort_descending(arr);
  
  for(int i = 0; i < 10; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}

int sort_descending(int *parr) {
  int temp = 0;

  for(int i = 0; i < 10; i++) {
    for(int j = 0; j < 9 - i; j++) {
      if(parr[j] < parr[j + 1]) {
        temp = parr[j];
        parr[j] = parr[j + 1];
        parr[j + 1] = temp;
      }
    }
  }
  return 0;
}
