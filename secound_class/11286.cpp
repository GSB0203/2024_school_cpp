#include <iostream>
#include <queue>
using namespace std;

struct compare {
    bool operator()(int a, int b) {
      if (abs(a) == abs(b)) {
        return a > b;
      }
      return abs(a) > abs(b);
    }
};

int main() {
  int n;cin>>n;
  priority_queue<int, vector<int>, compare> pq;

  for (int i = 0; i < n; ++i) {
    int a;cin>>a;
    if(a == 0) {
      if(pq.empty()) cout<<0<<endl;
      else {
        cout<<pq.top()<<endl;
        pq.pop();
      }
    }
    else pq.push(a);
  }
}