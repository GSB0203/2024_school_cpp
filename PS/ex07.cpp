//영어단어 뛰어쓰기 대소문자 혼합 표현, 원래의 표현 공백 제거&소문자화
//입력 : 공백 존재 & 대소문자 영어 단어 ex)bE    au T I ful
//출력 : 소문자로 된 정상적인 영어 단어 ex)beautiful

#include <iostream>
#include <algorithm>
using namespace std;
//
//int main() {
//  string s;
//  getline(cin, s);
//  s.erase(remove(s.begin(), s.end(), ' '), s.end());
//  for(int i=0;i<s.size();i++) {
//    s[i] = tolower(s[i]);
//  }
//  cout<<s<<endl;
//
//}

int main() {
  string str;
  getline(cin, str);
  string::iterator iter;
  str.erase(remove(str.begin(), str.end(), ' '), str.end());
  for(auto iter = str.begin(); iter != str.end(); ++iter) {
    if(*iter >= 65 && *iter <= 90) *iter = tolower(*iter);
  }
  cout<<str;
  return 0;
}

//int main() {
//  char b[101];
//  string a;
//  int i, p=0;
//  getline(cin, a);
//  for(i=0; i<a.size();i++) {
//    if(a[i] != ' ') {
//      if(a[i] >= 65 && a[i] <= 90) b[p++] = a[i] + 32;
//      else b[p++] = a[i];
//    }
//    b[p] = '\0';
//    printf("%s\n", b);
//    return 0;
//  }
//}