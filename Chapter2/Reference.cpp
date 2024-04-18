//더이상 포인터 쓰지마세요. 함수에 전달할 때 참조자를 전달하세요.

#include <iostream>
using namespace std;

void swapByPtr(int *ptr1, int *ptr2);
void swapByRef(int &ref1, int &ref2);

int main() {
  int val1 = 10;
  int val2 = 20;
  cout<<val1<<" "<<val2<<endl;
  swapByPtr(&val1, &val2);
  cout<<val1<<" "<<val2<<endl;
  swapByRef(val1, val2);
  cout<<val1<<" "<<val2<<endl;
  return 0;
}

void swapByPtr(int *ptr1, int *ptr2) {
  int tmp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = tmp;
}

void swapByRef(int &ref1, int &ref2) {
  int tmp = ref1;
  ref1 = ref2;
  ref2 = tmp;
}

//포인터를 선언할때는 int *ptr이라고 선언한 다음 변수의 주소를받기위해 &을 일일이 붙여야한다
//참조자를 선언할때는 int &ref이라고 선언한 다음 그냥 변수의 이름만 넣으면 끝이다.