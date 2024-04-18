//https://nypc.github.io/2018/2018_online_3
#include <iostream>
using namespace std;
int main() {
  int p, q, w;
  int cnt_p = 0, cnt_q = 0;
  cin>>p>>q>>w;
  while(w > (p + q)) {
    w -= (p + q);
    cnt_p += 1;
    cnt_q += 1;
  }
  if(w == p) cnt_p += 1;
  else cnt_q += 1;
  cout<<cnt_p<<" "<<cnt_q<<endl;
}

//쌤 코드
//int main() {
//  int p, q, w, x, y;
//  cin>>p>>q>>w;
//  for(x = 1;p*x<=w;x++) {
//    if((w-(p*x))%q == 0) {
//      cout << x << " " << (w-(p*x)) / q << endl;
//      break;
//    }
//  }
}