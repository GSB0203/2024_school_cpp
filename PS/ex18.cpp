#include <iostream>
using namespace std;

int main() {
  freopen("ex18_input.txt", "rt", stdin);
  int n, m, ball; cin>>n>>ball;
  int max = 0;
  int cnt = 0;

  for(int i=0;i<n;i++) {
    cin >> m;
    if (m > ball) cnt++;
    else cnt = 0;
    if (cnt > max) max = cnt;
  }
  max == 0 ? max = -1:max = max;
  cout<<max;
}