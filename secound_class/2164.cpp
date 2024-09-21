#include <iostream>
#include <queue>
using namespace std;

int main() {
  int n;cin>>n;
  int ans = 0;
  queue<int> q;

  for (int i = 0; i < n; ++i) {
    q.push(i);
  }

  while(q.size() > 1) {
    q.pop();
    ans = q.front();
    q.push(ans);
  }

  cout<<ans<<endl;
  return 0;
}