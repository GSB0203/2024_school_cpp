#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int x) {
  for (int i = 2; i <= sqrt(x); i++) {
    if (x % i == 0) return false;
  }
  return true;
}

int main() {
  int n; cin>>n;
  int cnt = 0;

  for(int i=2;i<=n;i++) {
    if(isPrime(i)) cnt++;
  }


  cout<<cnt;
}