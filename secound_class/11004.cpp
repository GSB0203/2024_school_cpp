#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, k;
  scanf("%d %d", &n, &k);
  vector<int> nums(n);

  for (int i = 0; i <n; ++i) {
    scanf("%d", &nums[i]);
  }

  sort(nums.begin(), nums.end());

  printf("%d", nums[k - 1]);
  return 0;

}