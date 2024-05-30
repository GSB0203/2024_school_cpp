#include <iostream>
#include <vector>
using namespace std;


int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, m; cin>>n>>m;
  int a, b;
  vector<int> nums(100001);

  for(int i=1;i<=n;i++) {
    cin>>nums[i];
    nums[i] += nums[i - 1];
  }


  for(int i=1;i<=m;i++) {
   cin>>a>>b;
   printf("%d\n", nums[b] - nums[a - 1]);
  }

  return 0;
}
