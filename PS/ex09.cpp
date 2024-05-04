#include <iostream>
#include <vector>

using namespace std;

int main() {
//  int num; cin>>num;
//
//  for(int i=1;i<=num;i++) {
//    int count = 0;
//    for(int j=1;j<=i/2;j++) {
//      if(i % j == 0) count++;
//    }
//    cout<<count + 1<<" ";
//  }
  vector<int> nums(50001, 0);
  int num; cin>>num;
  for(int i=1;i<=num;i++) {
    for(int j=i;j<=num;j+=i) {
      nums[j]++;
    }
  }

  for(int i=1;i<=num;i++) {
    cout<<nums[i]<<" ";
  }
}