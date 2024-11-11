#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
  //푸는 중
int main() {
  int n;cin>>n;
  vector<int> nums(n, 0);
  vector<int> DP(n, 0);
  int sum = 0;

  for (int i = 0; i < n; ++i) {
    cin>>nums[i];
  }

  sort(nums.begin(), nums.end());
  DP[0] = nums[0];

  for (int i = 1; i <= n; ++i) {
    DP[i] = max(nums[(i - 1) * 2] * nums[i], nums[i]);
//    DP[i] = max(nums[i * 2] * nums[i], nums[i]);
  }

  for (int i : DP) {
    cout <<i<<endl;
  }


  for (int i : DP) {
    sum += i;
  }

  cout<<sum;

  return 0;
}