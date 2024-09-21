#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;cin>>n;
  vector<int> nums(101, 0);
  int sum = 0;

  for (int i = 0; i < n; i++) {
    scanf("%1d", &nums[i]);
    sum += nums[i];
  }

  cout<<sum;
  return 0;
}