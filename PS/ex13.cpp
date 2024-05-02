#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()  {
  freopen("ex13_input.txt", "rt", stdin);
  int num; cin>>num;
  int max = 0;
  int indexMax = 0;
  vector<int> nums(10, 0);

  while(num > 0) {
    nums[num % 10]++;
    num /= 10;
  }

  for(int i=0;i<10;i++) {
    if(nums[i] >= max && i> indexMax) {
      max = nums[i];
      indexMax = i;
    }
  }
  cout<<indexMax;
}