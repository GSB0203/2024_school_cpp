#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
  stack<int> stack;
  vector<char> output;
  int n;cin>>n;
  int cnt = 1;

  for(int i=0;i<n;i++) {
    int num;
    cin >> num;
    while (cnt <= num) {
      stack.push(cnt);
      output.push_back('+');
      cnt++;
    }
    if(stack.top() == num) {
      stack.pop();
      output.push_back('-');
    }
    else {
      cout<<"NO";
      return 0;
    }
  }

  for(int i=0;i<output.size();i++) {
    cout<<output[i]<< '\n';
  }
}
