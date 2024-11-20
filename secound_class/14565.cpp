#include <iostream>
#include <tuple>
using namespace std;
typedef long long ll;

// a와 b에 대해 ax + by = gcd(a, b)를 만족하는 x, y, gcd(a, b)를 구함
tuple<ll, ll, ll> extgcd(ll a, ll b, ll p, ll q, ll r, ll s) {
  if (b == 0) return make_tuple(a, p, r); // b가 0인 경우, gcd(a, b) = a이고 x = p, y = r
  ll tmp = a / b; // 몫 계산
  // 재귀적으로 확장 유클리드 알고리즘 호출
  return extgcd(b, a - tmp * b, q, p - tmp * q, s, r - tmp * s);
}

int main() {
  ios::sync_with_stdio(0); // C++ 표준 입출력의 동기화를 끄고 속도 향상
  cin.tie(0);              // 입력과 출력이 분리되지 않도록 설정하여 속도 향상

  ll N, A;
  cin >> N >> A; // 두 수 N과 A 입력
  cout << N - A << ' '; // 첫 번째 출력: N에서 A를 뺀 값을 출력

  ll a, p, r;
  // 확장 유클리드 알고리즘을 통해 gcd(A, N), x, y를 구함
  tie(a, p, r) = extgcd(A, N, 1, 0, 0, 1);

  // p를 N에 대해 양수로 조정
  p %= N;
  if (p < 0) p += N;

  // gcd(A, N)가 1이면 p를 출력 (A의 역원), 그렇지 않으면 -1 출력
  if (a == 1) cout << p; // 역원이 존재하면 출력
  else cout << -1;       // 역원이 없으면 -1 출력
}
