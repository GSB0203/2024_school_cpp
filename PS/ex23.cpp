#include <iostream>
#include <vector>
using namespace std;

int main() {
  freopen("ex23_input.txt", "rt", stdin);
  int n; cin>>n;
  int max = 0;
  int sum = 0;
  int start = 0;
  int end = 0;
  int flag = 0;
  vector<int> nums(n, 0);

  for(int i=0;i<n;i++) {
    cin>>nums[i];
  }

  for(int i=0;i<n;i++) {
    if(nums[start] <= nums[end]) start = end++;
    else {
      sum = end - flag;
      if (sum > max) max = sum;
      sum = 0;

      start++;
      end++;
      flag = start;
    }
  }
  if(max == 0) max = n;
  cout<<max;
}