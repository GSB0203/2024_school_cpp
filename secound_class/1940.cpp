#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m;cin>>n>>m;
  int start = 0, end = 1;
  int sum = 0;
  vector<int> nums(15001, 0);

  for (int i = 0; i < n; ++i) {
    cin>>nums[i];
  }

  while (start != n) {
    if(nums[start] + nums[end] == m) sum += 1;
    if(end > n) {
      start++;
      end = start + 1;
    }
    else end++;

  }

  cout<<sum<<endl;
  return 0;
}