#include <iostream>

  //함수 네이밍컨벤션 : 반드시 동사, 동사구 형태로 지어야한다.
  //C++에서는 함수오버로딩을 지원한다.
  //함수오버로딩이란? 함수의 이름을 같을지라도 함수의 시그니처가 다르면 서로 다른 함수로 인정한다.
  //함수 시그니처란? 함수의 이름 + 자료형의 갯수 + 자료형의 종류
int addNum(int, int);
double addNum(double , double);
//void addNum(double, double);
double addNum(double);

int main() {
  std::cout<<addNum(3, 5)<<std::endl;
  std::cout<<addNum(3.5, 5.5)<<std::endl;
  std::cout<<addNum(3.5)<<std::endl;
}

int addNum(int a, int b) {
  return a + b;
}
double addNum(double a, double b) {
  return a + b;
}