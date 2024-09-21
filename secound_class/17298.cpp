#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
  int n;cin>>n;
  stack<int> s;
  vector<int> a(10000001);
  vector<int> nge(10000001);

  for (int i = 0; i < n; ++i) {  //입력
    cin>>a[i];
  }

  for (int i = 0; i < n; ++i) {  //수열 갯수 만큼 반복
    while(!s.empty() && a[s.top()] < a[i]) {  //스택 비어있지 X, 현재 값이 스택의 최상위 값보다 큰 경우
      nge[s.top()] = a[i];  //오큰수를 설정
      s.pop();  //최상위 인덱스 제거
    }
    s.push(i);  //현재 인덱스 스택에 추가
  }

  while(!s.empty()) {  //마지막 값 오큰수 설정 = -1
    nge[s.top()] = -1;
    s.pop();
  }

  for (int i = 0; i < n; ++i) {  //출력
    cout<<nge[i]<<" ";
  }

  return 0;
}