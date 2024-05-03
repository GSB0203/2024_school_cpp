#include <iostream>
#include <math.h>
using namespace std;

int reverse(int x) {
  int n;
  while(x != 0) {
    n *= 10;
    n += x % 10;
    x /= 10;
  }
  return n;
}

bool isPrime(int x) {
  if (x <= 1) return false;
  for (int i=2;i<=sqrt(x);i++) {
    if (x % i == 0) return false;
  }
  return true;
}

int main() {
  int n; cin>>n;
  int p = 0;

  for(int i=0;i<n;i++) {
    cin>>p;
    int reP = reverse(p);
    if(isPrime(reP)) cout<<reP<<" ";
  }
}