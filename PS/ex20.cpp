#include <iostream>
#include <vector>
using namespace std;

int main() {
  freopen("ex20_input.txt", "rt", stdin);
  int n; cin>>n;
  int i;
  vector<int> A(100, 0);
  vector<int> B(100, 0);

  for(i=0;i<n;i++) {
    cin>>A[i];
  }
  for(i=0;i<n;i++) {
    cin>>B[i];
  }

  for(i=0;i<n;i++) {
    if(A[i] == 1 && B[i] == 2) cout<<"B"<<endl;
    else if(A[i] == 2 && B[i] == 1) cout<<"A"<<endl;
    else if(A[i] == 1 && B[i] == 3) cout<<"A"<<endl;
    else if(A[i] == 3 && B[i] == 1) cout<<"B"<<endl;
    else if(A[i] == 2 && B[i] == 3) cout<<"B"<<endl;
    else if(A[i] == 3 && B[i] == 2) cout<<"A"<<endl;
    else cout<<"D"<<endl;
  }

  return 0;
}