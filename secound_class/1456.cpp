#include <iostream>
#include <vector>

using namespace std;

int main() {
  int a, b;cin>>a>>b;
  int sum = 0;
  vector<int> v(b + 1);

  for (int i = a; i <= b; ++i) {
    v[i] = i;
  }

  vector<int> prime = v;

  for (int i = 2; i < b; ++i) {
    if(prime[i] == 0) continue;
    for (int j = 2*i; j < b; j+=i) {
      prime[j] = 0;
    }
  }

//  for (int i = 2; i <= b; ++i)
//    for (int j = a; j < v.size(); ++j) {
//      if (v[j] % (i*i) == 0) {
//        sum++;
//        break;
//      }
//    }
//
//  cout<<sum;

  return 0;
}
