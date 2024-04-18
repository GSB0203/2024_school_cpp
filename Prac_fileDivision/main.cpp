#include <iostream>
#include "foo.h"
#include "cat.h"

int main() {
  foo();
  Cat kitty;
  kitty.speak();
  return 0;
}
  //빌드 3단계 1. 전처리기 단계 2. 컴파일 단계 3. 링커단계 -> 실행파일 완성
  //파일 분할 시 헤더파일에는 함수나 클래스의 선언을 넣고, 소스파일에는 정의를 넣는다.

