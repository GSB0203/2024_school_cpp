#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
  int n, l;cin>>n>>l;
  int min = 9999999;
  vector<int> nums(n);
  priority_queue<int> pq;

  for (int i = 0; i < n; ++i) {
    cin>>nums[i];
    pq.push(nums[i]);
    if(pq.size() > 3) pq.pop();
    min = pq.top();
    cout<<min<<" ";
  }

  return 0;
}