#include <iostream>
#include <string>
using namespace std;

  //결론 : 참조자는 변수의 메모리 공간을 그대로 공유 받는다.(복사 X)
  //참조자는 초기화 할 때 변수명으로 받아야하는데 다만 const를 붙이면 상수값으로도 초기화 할 수 있다.
  //std::move()는 참조자들끼리의 소유권 모두를 다른 변수에게 넘겨주는 역할을 한다.
int main() {
  std::string str1 = "bssm";
  string &str2 = str1;
  string &str3 = str2;
  cout<<str1<<" "<<str2<<" "<<str3<<" "<<endl;
  string str6 = std::move(str3);
  cout<<str1<<" "<<str2<<" "<<str3<<" "<<str6<<endl;
  str6 = "bssm2";
  str1 = "bssm3";
  cout<<str1<<" "<<str2<<" "<<str3<<" "<<str6<<endl;
  return 0;
}
