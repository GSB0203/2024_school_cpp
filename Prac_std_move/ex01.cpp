#include <iostream>
using namespace std;
  //std::move() 란? : 내가 가진 힙 메모리 영역의 소유권을 다른 변수에게 넘겨주고 나는 소유권 포기

int main() {
  string a ="my programming";
  cout<<"a : " <<a<<endl;
  string b = std::move(a);
  cout<<"b : " <<b<<endl;
  b = "asdf";
  cout<<"a : " <<a<<endl;
  cout<<"b : " <<b<<endl;
  return 0;
}
