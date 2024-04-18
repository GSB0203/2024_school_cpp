#include <iostream>

using namespace std;

int main() {
//  char name[10];
  string name;
  int age;
  cout << "이름 입력: ";
  cin >> name;
  cout << "나이 입력";
  cin >> age;
  //공백을 기준을 이름과 나이를 입력받기
  cout << "Hello World<<" << endl;
  cout << "Hello " << "World" << endl;

  cin >> name >> age;
  return 0;
}