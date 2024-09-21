#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;cin>>n;
  vector<int> nums(10001, 0);
  for (int i = 1; i <= n; ++i) {	// 입력 값 count
    int a;cin>>a;
    nums[a]++;  //입력 받은 수에 해당하는 인덱스 값 증가
  }

  for (int i = 1; i <= 10000; ++i) {	// 값 출력
    for (int j = 0; j < nums[i]; ++j)
      cout<<i<<'\n';
  }
  return 0;
}