#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;cin>>n;
  int max = 0;
  float sum = 0.0;
  vector<int> nums(1001, 0);

  for (int i = 0; i < n; ++i) {
    cin>>nums[i];
    if(max < nums[i]) max = nums[i];
  }

  for (int i = 0; i < n; ++i) {
    sum += ((float)nums[i] / max * 100);
  }

  printf("%.2f", sum / n);
  return 0;
}