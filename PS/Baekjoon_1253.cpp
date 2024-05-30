#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n;cin>>n;  //n개의 수
  int start = 0, end = n - 1;  //two pointer
  int cnt = 0;  //일치 수
  vector<int> nums(n);  //n개의 수들

  for(int i=0;i<n;i++) {
    cin>>nums[i];
  }

  sort(nums.begin(), nums.end());  //n개의 수들 정렬

  for(int i=0;i<n;i++) {
    int val = nums[i];  //예시로 첫번째 수일 때 val에 저장
    start = 0, end = n - 1;
    while(start < end) {  //시작과 끝이 만나기 전까지
      int sum = nums[start] + nums[end];  //첫번째 값 + 마지막 값
      if ( sum == val) {  // 같냐?
        if(start != i && end != i) {  //첫번째 값도 아닌가?
          cnt++;  //일치++;
          break;
        }
        else if(start == i) start++;  //만약 시작값이 첫번째이랑 만났는가 넘어가기
        else if(end == i) end--;  //만약 끝값이 첫번째값이랑 만났는가 넘어가기
      }
      else if(sum < val) start++;  //만약 첫번째 값보다 sum이 작나? 시작값 증가(정렬 되었있기 때문에 작으면 시작값 증가)
      else end--;  //아니면 끝값 감소
    }
  }

  cout<<cnt;
  return 0;
}

