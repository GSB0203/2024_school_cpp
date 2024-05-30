#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n;cin>>n;  //재료 개수
  int m;cin>>m;  //갑옷 제작 필요 개수
  int sum = 0;  //제작된 갑옷 수
  int start = 0, end = n - 1;  //two pointer
  vector<int> nums(n);  //재료들

  for(int i=0;i<n;i++) {
    cin>>nums[i];
  }

  sort(nums.begin(), nums.end());  //재료들 정렬
  while(start < n) {  //시작값이 갑옷 수 넘지 않을 때까지
    if ((nums[start] + nums[end]) < m) start++;  //만약 시작값과 끝값의 합이 갑옷 제작 개수보다 작은가? 시작값 증가(정렬해서 시작갑 증가시키면 값 오름)
    else if ((nums[start] + nums[end]) > m) end--;  //만약 적은가? 끝값 감소
    else if ((nums[start] + nums[end]) == m) {  //만약 같은가?
      sum++;  //갑옷++
      start++, end--;
    }
  }

  cout<<sum / 2;  // 필요 재료 개수가 3일 때 1,2  2,1 같은 경우이기 때문에 /2
  return 0;
}