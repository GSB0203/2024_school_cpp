//자연수의 합
//자연수 A, B가 주어지면 A부터 B까지의 합을 수식과 함께 출력하세요.(1 <= A < B <=100)
#include <iostream>
int main() {
  int a, b;
  std::cin>>a;
  std::cin>>b;
  int sum = a;
  printf("%d", sum);
  for(int i=a+1;i<=b;i++) {
    printf(" + %d", i);
    sum += i;
  }

  std::cout<<" = "<<sum<<std::endl;
}
