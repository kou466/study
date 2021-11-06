#include <stdio.h>
//입력받는 학생들의 성적을 높은 순으로 정렬하는 프로그램
int main() {
  int arr[10];
  int temp;
  int arr_size = sizeof(arr) / sizeof(int); // 배열 크기
  for(int i = 0; i < 10; i++) {
    printf("%d 번째 학생의 성적은? ", i+1);
    scanf("%d",&arr[i]);
  }
  for (int i = 0; i < arr_size; i++) {
	  for (int j = 0; j < (arr_size - 1) - i; j++) {
		  if (arr[j] < arr[j + 1]) {	// 버블 정렬 사용
			  temp = arr[j];
			  arr[j] = arr[j + 1];
			  arr[j + 1] = temp;
		  }
	  }
  }
  for(int i = 0; i < arr_size; i++) {
    printf("%d \n", arr[i]);
  }
  return 0;
}
