#include <iostream>
#include <vector>
using namespace std;

int main() {
  freopen("ex16_input.txt", "rt", stdin);
  vector<int> strs(26, 0);
  string a; cin>>a;
  string b; cin>>b;

  for (auto & c : a) {
    strs[c - 'a']++;
  }

  for (auto & c : b) {
    strs[c - 'a']++;
  }

  for (int count : strs) {
    if (count == 1) {
      cout << "NO";
      return 0;
    }
  }
  cout<<"YES";
  return 0;
}