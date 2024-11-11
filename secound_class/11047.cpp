#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int n, k;cin>>n>>k;
  int cnt = 0;
  vector<int> coins(n);

  for (int i = 0; i < n; ++i) {
    cin>>coins[i];
  }

  sort(coins.rbegin(), coins.rend());

  for (int i = 0; i < n; ++i) {
    if (coins[i] > k) continue;
    else {
      cnt += k / coins[i];
      k %= coins[i];
    }
  }

  cout<<cnt;

  return 0;
}