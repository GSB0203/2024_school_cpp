#include <iostream>
#include <vector>
using namespace std;

class Cat {
private:
    int mAge;
public:
    Cat(int age):mAge{age} {};
    void speak() const {
      cout<<"meow~"<<mAge<<endl;
    }
};

int main() {
  vector<Cat> cats;
  cats.emplace_back(Cat{1});
  cats.emplace_back(Cat{2});
  cats.emplace_back(Cat{3});
  cats.emplace_back(Cat{4});
  cats.emplace_back(Cat{5});

    //고양이 전체 출력
  for (const auto &cat : cats) {
    cat.speak();
  }
  cout<<endl;

    //벡터 순회 방법 1을 활용하여 나이가 3살인 고양이를 찾고 출력
  for(size_t idx = 0;idx < cats.size(); ++idx) {
    if(idx == 2) cats[idx].speak();
  }
  cout<<endl;

    //벡터 순회 방법 2을 활용하여 나이가 4살인 고양이를 찾고 출력 ->
  for (auto itr2 = cats.begin(); itr2 < cats.end() ; itr2++) {
    if(std::distance(cats.begin(), itr2) == 3) {
      itr2->speak();
    }
  }
  cout<<endl;

    //벡터 순회 방법 3을 활용하여 나이가 5살인 고양이를 찾고 출력
  int idx = 0;
  for (auto cat : cats) {
    idx += 1;
    if(idx == 5) {
      cat.speak();
    }
  }
  cout<<endl;

  return 0;
}
