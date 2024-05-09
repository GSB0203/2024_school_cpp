#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n; cin>>n;
  vector<int> nums(n);
  vector<int> rank(n, 0);

  for(int i=0;i<n;i++) {
    cin>>nums[i];
  }

  for(int i=0;i<n;i++) {
    for(int j=0;j<n;j++) {
      if(nums[i] < nums[j]) rank[i]++;
      else if(nums[i] == nums[j]) continue;
    }
  }

  for(int i=0;i<n;i++) {
    cout<<rank[i] + 1<<" ";
  }
  return 0;
}

//5
//90 85 92 95 90