#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n; cin>>n;
  int diff;
  vector<int> nums(n);
  vector<bool> check(n);
  for(int i=0;i<n;i++) {
    cin>>nums[i];
  }
  for(int i=0;i<n-1;i++) {
    diff = abs(nums[i] - nums[i + 1]);
    if (diff != 0 && diff <= n - 1 && !check[diff]) continue;
    else {
      cout << "NO";
      return 0;
    }
  }
  cout<<"YES";
}