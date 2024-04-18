#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    //STL 벡터를 사용하지 않는 스택공간 배열선언
    int num[5];
  for (int i = 0; i < 5; ++i) {
    num[i] = i;
    cout<<num[i]<<" ";
  }
  cout<<endl;
    //STL 벡터를 사용하지 않는 힙공간 배열 선언
    //C언어 스타일 - malloc, free
//    int* numPtr = (int*)malloc(sizeof(int)*5);
//    free(numPtr);
  //c++스타일 - new, delete
  int *numPtr = new int[5];
  for (int i = 0; i < 5; ++i) {
    numPtr[i] = i;
    cout<<numPtr[i]<<" ";
  }
  cout<<endl;
  delete []numPtr;

  //STL 벡터를 사용할 경우(힙공간)
  vector<int> nums(5);
  for (int i = 0; i < 5; ++i) {
    nums[i] = i;
    cout<<nums[i]<<" ";
  }
  cout<<endl;

    //벡터 초기화 2
    //vector<int> num2 = {0, 1, 2, 3, 4};

    //벡터 내장 함수들
  cout<<"----요소 삽입 전----"<<endl;
  cout<<"벡터 요소의 개수 : "<<nums.size()<<endl;  //벡터의 요소 개수 반환
  nums.emplace_back(5);  //벡터의 마지막 공간에 삽입
  cout<<"벡터 요소 삽입 후----"<<endl;
    //size_t = unsigned long
  for (size_t i = 0; i < nums.size(); ++i) {
    cout<<nums[i]<<" ";
  }
  cout<<endl;
  nums.pop_back();  //벡터의 마지막 요소 제거
  cout<<"----요소 제거 후----"<<endl;
  for (size_t i = 0; i < nums.size(); ++i) {
    cout<<nums[i]<<" ";
  }
  cout<<endl;

    //벡터 순회방법1 - 인덱스로 접근
  for(size_t idx = 0;idx < nums.size(); ++idx) {
    cout<<nums[idx]<<" ";
  }
  cout<<endl;

    //벡터 이터레이터
  vector<int>::iterator itr;  //벡터를 순회할 때 사용하는 포인터
    //nums.begin(); : 첫번째 요소의 주소값
    //nums.end()  마지막 요소의 주소값 + 1
  itr = nums.begin();
  cout<<"첫번째 요소의 값은? : "<<*itr<<endl;
  itr = nums.end();
  cout<<"마지막 요소의 값은? : "<<*(--itr)<<endl;

    //벡터 순회 방법 2 - 이터레이터 활용(많이 활용)
//  vector<int>::iterator itr2;
  for (auto itr2 = nums.begin(); itr2 < nums.end() ; itr2++) {
    cout<<*itr2<<" ";
  }
  cout<<endl;

    //벡터 순회 방법 3 - range for(가장 짧음)
  for (auto num : nums) {
    cout<<num<<" ";
  }
  cout<<endl;
  return 0;
}


