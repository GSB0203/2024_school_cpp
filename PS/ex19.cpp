#include <iostream>
#include <vector>
using namespace std;

int main() {
  freopen("ex19_input.txt", "rt", stdin);
  int n; cin>>n;
  int max = 0, cnt = -1;
  vector<int> nums(n, 0);
  for(int i=0;i<n;i++) {
    cin>>nums[i];
  }

  for(auto itr= nums.rbegin();itr!=nums.rend();itr++) {
    if(*itr >= max) {
      max = *itr;
      cnt++;
    }
  }

  cout<<cnt;
}