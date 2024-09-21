#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  string c;cin>>c;
  vector<int> nums(c.length());

  for (int i = 0; i < c.length(); ++i) {
    nums[i] = c[i] - '0';
  }

  sort(nums.begin(), nums.end(), greater<>());

  for (int i = 0; i < c.length(); ++i) {
    cout<<nums[i];
  }
}