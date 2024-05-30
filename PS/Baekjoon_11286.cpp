#include <iostream>
#include <queue>
using namespace std;

struct cmp {
    bool operator()(int x, int y) {
      if(abs(x) == abs(y)) return x > y;
      else return abs(x) > abs(y);
    }
};

int main() {
  int n;cin>>n;
  priority_queue<int, vector<int>, cmp> pq;

  for(int i=0;i<n;i++) {
    int num;cin>>num;
    if(num == 0) {
      if(pq.empty()) cout<<0<<'\n';
      else {
        cout<<pq.top()<<'\n';
        pq.pop();
      }
    }
    else {
      pq.push(num);
    }
  }
}