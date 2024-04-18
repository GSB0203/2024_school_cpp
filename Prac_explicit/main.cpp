  //explicit : 명시적인, implicit : 묵시적인
  //ex) explicit conversion(명시적 형변환) - 컴파일러가 헷갈리지 않게하기 위해서 개발자가 직접 형변환 시키는 경우
  // int a = 3;, b = 4;
  // double c;
  // c = (double)a / b;
  //ex) implicit conversion(묵시적 형변환) - 컴파일러가 자료형이 안 맞는 상황에서 지가 알아서 형변환 시키는 경우
  // int a = 3;, b = 4;
  // double c;
  // c = a / b;

  //결론 : 명시적으로 프로그래밍을 하는게 좋은 코드다.

#include <iostream>
  using namespace std;

  class Cat {
  public:

      //생성자의 매개변수가 하나일 때는 '=' 연산자가 가능하기 때문에 묵시적표현을 막기위해 성성자 앞에 explicit를 적어주어야 한다.
      //생성자의 매개변수가 두개 이상일 때는 explicit을 붙여줄 필요가 없다.

    Cat(string name, int age):mName{std::move(name)}, mAge{age} {}
    void catInfo() {
      cout<<"고양이의 이름은 : "<<mName<<endl;
      cout<<"고양이의 나이는 : "<<mAge<<endl;
    };
  private:
    string mName;
    int mAge;
};

int main() {
  string str = "kitty";
  int num = 3;
  Cat kitty{str, num};
  kitty.catInfo();
  return 0;
}
