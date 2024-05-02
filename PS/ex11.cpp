#include <iostream>
using namespace std;
int countNum(int n) {
  int cnt = 0;
  while(n > 0) {
    n /= 10;
    cnt++;
  }
  return cnt;
}

int main() {
  int n; cin>>n;
  int num = 0;
  int i = 0;
  for(i;i<=n;i++) {
    num += countNum(i);
  }
  cout<<num;
}