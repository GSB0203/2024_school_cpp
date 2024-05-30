#include <iostream>
using namespace std;

int main() {
  int n;cin>>n;  //자연수
  int start = 1, end = 1;  //two pointer
  int sum = 0;
  int cnt = 0;

  while(start <= end && end <= n) {  // 시작값이 끝값이 넘기지 않고, 끝값이 n을 넘기기 전까지

      //연속된 수의 합이기 때문에 작으면 끝값++, 크면 시작값--
    if(sum < n) sum += end++;  //만약 더한 값이 n 보다 작은가? 마지막값 더하고 ++
    else {  //작지 않은가?
      if(sum == n) cnt++;  //같은가? cnt++
      sum -= start++;  //크면 시작값 빼고 ++
    }
  }
  cout<<cnt + 1;  //자기 자신
  return 0;
}