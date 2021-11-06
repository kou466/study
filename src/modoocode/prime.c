#include <stdio.h>

int main() {
  int guess = 5; // 소수인지 판별하려는 수
  int prime[1000]; // 소수의 배열

  int index = 1; // 현재까지 찾은 (소수의 개수 - 1) 아래 두 개의 소수를 미리 찾았으므로 초기값은 1
  int i; // for문 변수
  int isPrime; // 소수 판별 변수

  prime[0] = 2; // 처음 두 소수는 예외
  prime[1] = 3;
  for(;;) {
    isPrime = 0;

    for(i = 0; i <= index; i++){
      if (guess % prime[i] != 0) {
        isPrime++;
      } else {
        break;
      }
    }
    
    if(isPrime == (index + 1)){
      index++;
      prime[index] = guess;
      printf("PN : %d \n", prime[index]);
      if(index == 999) break;
    }
    
    guess += 1;
  }
  return 0;
}
