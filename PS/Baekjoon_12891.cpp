#include <iostream>
#include <vector>
using namespace std;

int main() {
  int s, p;cin>>s>>p;  //DNA 문자열 길이, 사용할 부분문자열 길이
  int a, c, g, t;  //비밀번호 필요 개수
  int ac = 0, cc = 0, gc = 0, tc = 0;  //비밀번호 사용하기에 적합한지 판정용
  int l = 0, r = p - 1;
  int cnt = 0;
  string str;  //임시 DNA 문자열
  cin>>str;
  cin>>a>>c>>g>>t;
  for(int i=l;i<=r;i++) {  //처음 한 번 부분 문자열만큼 계산
    if(str[i] == 'A') ac++;
    if(str[i] == 'C') cc++;
    if(str[i] == 'G') gc++;
    if(str[i] == 'T') tc++;
  }


  while(r < s) {  //그 다음부터는 사용가능하면 cnt++하고, l --, r++, r이 문자열 끝을 만나기 전까지
    if(a <= ac && c <= cc && g <= gc && t <= tc) cnt++;
    if(str[l] == 'A') ac--;
    else if(str[l] == 'C') cc--;
    else if(str[l] == 'G') gc--;
    else if(str[l] == 'T') tc--;

    l++, r++;

    if(str[r] == 'A') ac++;
    else if(str[r] == 'C') cc++;
    else if(str[r] == 'G') gc++;
    else if(str[r] == 'T') tc++;

  }

  cout<<cnt;
  return 0;
}