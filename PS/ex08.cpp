#include <iostream>
using namespace std;
int main() {
  string str;
  int count = 0;

  getline(cin, str);
  for(char& c : str) {
    if(c == '(') count++;
    else if (c == ')') count--;
    if(count < 0) {
      cout<<"NO"<<endl;
      return 0;
    }
  }
  if(count != 0) cout<<"NO"<<endl;
  else cout<<"YES"<<endl;
  return 0;
}