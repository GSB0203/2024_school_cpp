#include <iostream>
#include <vector>
using namespace std;

int main() {
  freopen("ex21_input.txt", "rt", stdin);
  int scoreA = 0, scoreB = 0;
  string win;
  vector<int> A(10, 0);
  vector<int> B(10, 0);
  for(int i=0;i<10;i++) {
    cin>>A[i];
  }
  for(int i=0;i<10;i++) {
    cin>>B[i];
  }

  for(int i=0;i<10;i++) {
    if(A[i] > B[i]) scoreA += 3, win = 'A';
    else if(A[i] < B[i]) scoreB += 3, win = 'B';
    else scoreA++, scoreB++;
  }

  cout<<scoreA<<" "<<scoreB<<endl;

  if(A == B) win = 'D';
  else if(scoreA > scoreB) win = 'A';
  else if(scoreA < scoreB) win = 'B';
  cout<<win;

}