#include <iostream>
  //매크로 상수
//#define MAX_INT 2147000000
//#define MIN_INT -2147000000
//#define ABCD 2
constexpr int ABCD = 2;

  //매크로 함수
//#define BIGGER(a, b) (((a) > (b)) ? (a) : (b))
  int bigger(int, int);

int main() {
  int arr[10];
  int max = INT_MIN;
  int min = INT_MAX;
  std::cout <<max<< " "<<min<<std::endl;
  int a = 10;
  int b = 11;
  std::cout <<std::max(a, b)<<std::endl;
  std::cout <<ABCD<<std::endl;
  return 0;
}

//int bigger(int a, int b) {
//  return a > b ? a : b;
//}

  //#define을 사용해서 전처리기의 부담을 늘리는 것은 전체 프로그램의 실행에 악영향을 끼친다.