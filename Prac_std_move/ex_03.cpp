#include <iostream>
using namespace std;

  //결론 : 객체의 문자열 멤버변수를 초기화 시키는 가장 이상적인 코드는 아래와 같다.
class Cat {
public: //멤버 함수
    void setName(string name) {
      mName = std::move(name);
}
private:  //멤버 함수
    string mName;
};

int main() {
  Cat kitty;
  string s = "kitty";

  kitty.setName(s); //1copy
  kitty.setName("kitty"); //0copy

  return 0;
}