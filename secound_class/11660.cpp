#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n,m;cin>>n>>m;
  vector<vector<int>> nums(1024);

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cin>>nums[i][j];
      nums[i][j] += nums[i - 1][j] + nums[i][j - 1];
    }
  }

  for (int i = 0; i < m; ++i) {
    int x1, y1, x2, y2;cin>>x1>>y1>>x2>>y2;
    cout<<nums[x2][y2] - nums[x1][y1]<<endl;
  }
}