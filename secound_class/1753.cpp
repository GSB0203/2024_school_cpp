#include <iostream>
#include <queue>
#include <cstring>
#include <vector>
using namespace std;

int INF = 9999999;  //무한대를 나타내는 값
int dp[20003];  //각 정점까지의 최소 거리를 저장할 배열
vector<pair<int, int>> v[20003];  //인접 리스트: (다음 정점, 가중치)

void dijkstra(int st) { // 다익스트라 알고리즘 함수
  memset(dp, INF, sizeof(dp));  //dp 배열을 초기화 (모든 정점까지의 거리를 INF로 설정)
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;  //우선순위 큐 (pair<거리, 정점>): 거리가 작은 순으로 정렬
  pq.push({0, st});  //시작 정점과 초기 거리(0)를 큐에 삽입
  dp[st] = 0;  //시작 정점까지의 최소 거리는 0으로 설정

  while (!pq.empty()) {  //큐가 비어있지 않을 동안 반복
    int x = pq.top().second;  //현재 정점
    int cost = pq.top().first;  //현재 정점까지의 최소 거리
    pq.pop();  //큐에서 해당 원소 제거

    for (int i = 0; i < v[x].size(); i++) {  //현재 정점 x에 연결된 모든 간선 확인
      int nx = v[x][i].first;  //다음 정점
      int ncost = cost + v[x][i].second;  //현재 경로를 통해 다음 정점까지의 거리 계산

      if (dp[nx] > ncost) {  //현재 계산된 경로가 기존 최소 거리보다 짧으면 갱신
        pq.push({ncost, nx});  //다음 정점을 우선순위 큐에 추가
        dp[nx] = ncost;  //다음 정점까지의 최소 거리 갱신
      }
    }
  }
}

int main() {
  int V, E, K;cin>>V>>E>>K;

  int a, a2, a3;  //시작 정점, 도착 정점, 가중치
  for (int i = 0; i < E; i++) {
    cin>>a>>a2>>a3;
    v[a].push_back({a2, a3});  //정점 a1에서 정점 a2로 가는 가중치 a3인 간선
  }

  dijkstra(K);  //시작 정점 K에서 다익스트라 알고리즘 실행

  for (int i = 1; i <= V; i++) {  //각 정점까지의 최소 거리 출력
    if (dp[i] < INF) cout<<dp[i]<<endl;  //INF보다 작으면 최소 거리 출력
    else cout<<"INF"<<endl;  //도달할 수 없는 경우 INF 출력
  }

  return 0;
}