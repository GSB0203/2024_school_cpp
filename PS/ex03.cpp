  //진약수의 합
  //자연수 N이 주어지면 자연수 N의 진약수의 합을 수식과 함께 출력하는 프로그램을 작성하세요(3 < N <= 100)
#include <iostream>
int main() {
  int n;
  int sum = 1;
  std::cin>>n;
  printf("%d", sum);
  for(int i=2;i<n;i++) {
    if(n % i == 0) {
      printf(" + %d", i);
      sum += i;
    }
  }
  printf(" = %d", sum);
}