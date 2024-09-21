#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;cin>>n;
  int insert;
  int total = 0;
  vector<int> nums(n, 0);
  vector<int> sum(n, 0);
  for (int i = 0; i < n; ++i) {
    cin>>nums[i];
  }

  for (int i = 0; i < n; ++i) {
    insert = nums[i];
    int j = i - 1;

    while(j >= 0 && nums[j] > insert) {
      nums[j + 1] = nums[j];
      j--;
    }

    nums[j + 1] = insert;
  }

  for (int i = 0; i < n; ++i) {
    sum[i] = sum[i - 1] + nums[i];
    total += sum[i];
  }

  cout<<total;
  return 0;
}