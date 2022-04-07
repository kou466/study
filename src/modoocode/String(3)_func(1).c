// 1. 문자열 내의 총 문자의 수를 세는 함수

#include <stdio.h>
int str_length(char *str);
int main() {
  char str[] = {"What is your name?"};

  printf("이 문자열의 길이 : %d \n", str_length(str));

  return 0;
}
int str_length(char *str) {
  int i = 0;
  while (str[i]) {
    i++;
  }

  return i;
}
