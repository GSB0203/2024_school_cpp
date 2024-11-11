#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
  int n; cin >> n;  // n개의 수를 입력 받음
  int sum = 0;  // 최소 비용 합을 저장할 변수 초기화
  priority_queue<int, vector<int>, greater<>> pq;  // 최소 힙 우선순위 큐 생성

  for (int i = 0; i < n; ++i) {  // n번 반복하며 입력 값을 우선순위 큐에 추가
    int temp; cin >> temp;
    pq.push(temp);
  }

  // 큐에 원소가 2개 이상 남아있는 동안 두 개씩 꺼내어 처리
  while (pq.size() >= 2) {
    int first = pq.top(); pq.pop();  // 가장 작은 값 추출
    int second = pq.top(); pq.pop(); // 그 다음으로 작은 값 추출
    pq.push(first + second);  // 두 값을 더해 다시 큐에 추가
    sum += (first + second);  // 현재 더한 값만큼의 시간을 누적
  }

  cout << sum;  // 최종 합산된 최소 시간 출력
  return 0;
}
