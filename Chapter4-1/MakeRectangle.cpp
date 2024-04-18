//클래스 설계 규칙
//1. private에는 멤버변수를 적는다.(남한테 안 보이도록 은닉화)
//2. public 생성자 및 멤버함수를 적는다.
//3. 생성자는 멤버변수를 초기화하는 역할을한다.
//4. 생성자 및 멤버변수에서 매개변수로 무언가를 받을 때에는 항상 참조자로 받는다.(불필요한 메모리공간 복사를 방지하기 위해서)
//5. 생성자로 초기화 시킬때는 {} 안에서 시키지 말고 생성자 이름 옆에 :을 붙인다음 그 옆에서 초기화 시킨다.
//6. 매개변수에 값이 앞으로 변할 일이 없다면 const를 붙인다.(코드 안정성 높아짐)
//7. 멤버함수에도 멤버 변수 같들을 변경할 일이 없다면(단순히 불러오거나 출력만 할 경우) const를 붙인다.

#include <iostream>
using namespace std;

class Point {
private:
    //x좌표
    int x;
    //y좌표
    int y;
public:
    //생성자(멤버변수들을 초기화시켜주는 역할)
    Point(const int xPos, const int yPos):x{xPos}, y{yPos} {}

    //x, y 값 불러오는 함수(Get)
    int getX() const {
      return x;
    }

    int getY() const {
      return y;
    }

    ///x, y 값 불러오는 함수(Set)
    void setX(int &xPos) {
      x = xPos;
    }

    void setY(int &yPos) {
      y = yPos;
    }

};


class Rectangle {
private:
    //직사각형 좌상단 좌표
    Point upLeft;
    //직사각형 우하단 좌표
    Point lowRight;
public:
    //생성자(멤버변수들을 초기화시켜주는 역할)
    Rectangle(const Point &pos1, const Point &pos2): upLeft{pos1}, lowRight{pos2}{}
    //직사각형 상태출력
    void showRecInfo() const {
      cout<<"좌 상단: "<<"["<<upLeft.getX()<<", ";
      cout<<upLeft.getY()<<"]"<<endl;
      cout<<"우 하단: "<<"["<<lowRight.getX()<<", ";
      cout<<lowRight.getY()<<"]"<<endl;
    }
};

int main() {
  int lx, ly, rx, ry;
  cout<<"좌 상단 x, y 좌표를 입력하세요 : "; cin>>lx>>ly;
  cout<<"우 하단 x, y 좌표를 입력하세요 : "; cin>>rx>>ry;
  Point pos1{lx, ly};
  Point pos2{rx, ry};
  Rectangle rec{pos1, pos2};
  rec.showRecInfo();

  return 0;
}
