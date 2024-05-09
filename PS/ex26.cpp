#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;cin>>n;
  vector<int> nums(n);
  vector<int> rank(n, 1);

  for(int i=0;i<n;i++) {
    cin>>nums[i];
  }

  for(int i=0;i<n;i++) {
    for(int j=0;j<i;j++) {
      if(nums[i] < nums[j]) rank[i]++;
    }
  }

  for(int i=0;i<n;i++) {
    cout<<rank[i]<<" ";
  }

  return 0;
}