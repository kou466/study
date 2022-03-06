/*
input : random
function : input + 4
result : input + 4
*/

#include <stdio.h>

int function(int input) {
  input += 4;
  return input;
}

int main() {
  int input;

  printf("Input : \n");
  scanf("%d", &input);

  printf("Result : %d \n", function(input));
  return 0;

}
