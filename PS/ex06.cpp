//문자 + 숫자 문자열 중 숫자만 추출, 맨 앞 0은 무시, 첫 줄에 자연수 두번째 줄에 약수 개수 출력
//입력 : 문자열
//출력 : 자연수, 약수
#include <iostream>
using namespace std;

int main() {
  string s;
  int num = 0;
  cin>>s;
  for(int i=0;i<s.length();i++) {
    if(s[i] >= '0' && s[i] <= '9') {
      num += s[i] - '0';
    }
  }
  cout<<num<<endl;
}