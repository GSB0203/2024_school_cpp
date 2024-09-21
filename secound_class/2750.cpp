#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  scanf("%d", &n);
  vector<int> nums(n, 0);

  for (int i = 0; i < n; ++i) {
    scanf("%d", &nums[i]);
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < i; ++j) {
      if(nums[i] < nums[j]) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
      }
    }
  }

  for (int i = 0; i < n; ++i) {
    printf("%d\n", nums[i]);
  }

  return 0;
}