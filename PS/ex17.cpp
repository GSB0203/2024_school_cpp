#include <iostream>
using namespace std;

bool is_correct(int num, int answer) {
  return (num * (num + 1) / 2) == answer;
}

int main() {
  freopen("ex17_input.txt", "rt", stdin);
  int n; cin>>n;

  for(int i=0;i<n;i++) {
    int num, answer;
    cin>>num>>answer;
    if(is_correct(num, answer)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}