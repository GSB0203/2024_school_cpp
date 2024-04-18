#include <iostream>
using namespace std;
  //&(참조자)로 값을 넘겨주면 소유권을 넘겨주는 것이고 , 자신의 소유권을 사라지지 않는다.
void storeByMove(string& b, int& num) {
  b = "bcc";
  num = 30;
  string& c = b;
  c = "cde";
}
int main () {
  string a = "abc";
  int b = 3;
  cout<<"a : "<<a<<endl;
  cout<<"b : "<<b<<endl;
  storeByMove(a, b);
  cout<<"a : "<<a<<endl;
  cout<<"b : "<<b<<endl;
  return 0;
}

  //결론 : 함수에 변수를 넘겨줄 때 &(참조자)한테 넘겨주면 내가 함께 바뀌거나 최악의
  //상황에서는 (힙메모리에 대한)소유권의 권한도 박탈당할 수 있기 때문에 신중하게 참조자를 사용해야하며
  //왠만하면 그냥 참조자로 넘겨주는 것 보다 일반변수로 넘겨주는 것이 좋다.

  //결론2 : &(참조자)가 소유권을 다른 변수한테 move로 줘버리면 함께 공유하던 변수들은
  //모두 소유권을 잃게 된다.