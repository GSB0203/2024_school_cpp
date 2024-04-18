#include <iostream>
using namespace std;

int main() {
  int num; cin>>num;

  for(int i=1;i<=num;i++) {
    int count = 0;
    for(int j=1;j<=i/2;j++) {
      if(i % j == 0) count++;
    }
    cout<<count + 1<<" ";
  }
}