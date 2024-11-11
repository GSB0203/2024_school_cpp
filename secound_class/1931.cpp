#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(const pair<int, int>& p1, const pair<int, int>& p2) {
  if (p1.second == p2.second)
    return p1.first < p2.first;
  return p1.second < p2.second;
}

int main() {
  int n; cin >> n;
  int sum = 1;

  vector<pair<int, int>> nums;

  for (int i = 0; i < n; ++i) {
    int a, b;cin >> a >> b;
    nums.emplace_back(a, b);
  }

  sort(nums.begin(), nums.end(), cmp);
  int end = nums[0].second;

  for (int i = 1; i < n; ++i) {
    if(nums[i].first < end) continue;
    else {
      end = nums[i].second;
      sum += 1;
    }
  }

  cout<<sum;

  return 0;
}