#include <iostream>
using namespace std;

int main() {

  int num1 = 1020;
  //  //포인터 활용
  //  int *num2 = &num1;
  //  cout<<num1<<" "<<*num2<<endl;
  //  *num2 = 20;
  //  cout<<num1<<" "<<*num2<<endl;

  //참조자 활용
  //참조자는 제일 처음에 선언할 때 &을 붙인다.
  //선언과 동시에 변수이름으로 초기화 시킨다.
  //이후 변수와 완전히 동일한 역할을 수행한다.
  int &num2 = num1;
  cout<<num1<<" "<<num2<<endl;
  num2 = 3047;
  cout<<num1<<" "<<num2<<endl;
  cout<<&num1<<" "<<&num2<<endl;


  return 0;
}