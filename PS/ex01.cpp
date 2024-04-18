//1부터 N까지 M의 배수합
//자연수 N이 입력되면 1부터 N까지의 수 중 M의 배수합을 출력하는 프로그램을 작성하세요.(3 <= M < N <= 1000)
#include <iostream>
int main() {
  int n, m;
  int sum = 0;
  std::cin>>n;
  std::cin>>m;

  for(int i=1;i<=n;i++) {
    if(i % m == 0) sum += i;
  }

  std::cout<<sum<<std::endl;
  return 0;
}

