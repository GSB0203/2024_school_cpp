#include <iostream>
using namespace std;
int main() {
  long long int arr[9] = {9, 189, 2889, 38889, 488889, 5888889, 68888889, 7888888889, 8888888889};
  int n; cin>>n;
  int n2 = n;
  int cnt = 0;
  string nine = "";

  while(n2>0) {
    n2 /= 10;
    cnt++;
    nine += '9';
  }

  cout<<arr[cnt - 1] + ((n - stoi(nine)) * cnt);
}