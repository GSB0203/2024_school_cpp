#include <iostream>
#include <vector>
using namespace std;

int main() {
  freopen("ex22_input.txt", "rt", stdin);
  int n; cin>>n;
  int k; cin>>k;
  int sum = 0;
  int max = -999;
  vector<int> t(n, 0);

  for(int i=0;i<n;i++) {
    cin>>t[i];
  }

  for(int i=0;i<k;i++) {
    sum += t[i];
  }

  max = sum;

  for(int i=1;i<n-k;i++) {
    sum = sum - t[i - 1] + t[i + k - 1];
    if(sum > max) max = sum;
  }

  cout<<max;

}