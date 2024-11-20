#include <iostream>
using namespace std;

int gcd(int a, int b) {
  if (b == 0)  return a;
  return gcd(b, a % b);
}

int main() {
  int n;cin>>n;
  for (int i = 0; i < n; ++i) {
    int a, b;cin>>a>>b;
    cout<<a * b / gcd(a, b)<<endl;
  }
  return 0;
}