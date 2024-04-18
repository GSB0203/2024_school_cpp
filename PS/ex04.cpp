//N(2 <= N <= 100)명의 나이가 입력됩니다.
//이 N명의 사람 중 가장 나이차이가 많이 나는 경우는 몇살 일까요? 최대 나이 차이를 출력하는 프로그램을 작성하세요.
//ex 10
//ex 1 2 3 4 5 6 7 8 9 10
//ex 9

#include <iostream>

using namespace std;

int main() {
  freopen("ex04_input.txt", "rt", stdin);
  int n, a;
  int max = 0, min = INT_MAX;
  cin>>n;
  for(int i=0;i<n;i++) {
    cin>>a;
    if(a > max) max = a;
    if(a < min) min = a;
  }

  cout<<max - min<<endl;
}