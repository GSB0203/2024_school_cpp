#include <iostream>
#include <vector>
using namespace std;

// pair<int, int>는 (노드 번호, 해당 노드까지의 거리)를 저장하기 위한 구조체 역할
// 첫 번째 요소는 인접한 노드 번호, 두 번째 요소는 그 노드까지의 거리(가중치)
int V;  // 정점의 개수
vector<pair<int, int>> v[100001];  // 각 노드의 인접 리스트 (노드, 가중치)
bool visited[100001] = {false,};  // 방문 여부를 저장하는 배열
int selected;  // dfs를 통해 찾은 리프 노드 (가장 먼 노드)
int dist = 0;  // 최대 거리를 저장하는 변수

// dfs(현재 노드, 현재 거리)
// 현재 노드에서 갈 수 있는 모든 경로를 탐색하며, 가장 먼 노드를 찾음
void dfs(int x, int cnt) {
  if (dist < cnt) {  // 현재까지 저장된 최대 거리보다 긴 경우
    selected = x;  // 가장 먼 노드를 업데이트
    dist = cnt;  // 최대 거리 업데이트
  }

  // 현재 노드 x와 인접한 모든 노드들을 탐색
  for (int i = 0; i < v[x].size(); ++i) {
    int nx = v[x][i].first;  // 인접한 노드
    int cost = v[x][i].second;  // 그 노드까지의 거리 (가중치)
    if (!visited[nx]) {  // 아직 방문하지 않은 경우
      visited[nx] = true;  // 방문 처리
      dfs(nx, cnt + cost);  // 인접 노드로 이동하면서 거리를 누적
      visited[nx] = false;  // 재귀가 끝나면 다시 미방문 처리 (백트래킹)
    }
  }
}

int main() {
  cin >> V;  // 정점의 수 입력
  for (int i = 1; i <= V ; ++i) {
    int s, e, c;
    cin >> s;  // 시작 노드 입력
    while(true) {
      cin >> e;  // 인접 노드 입력
      if (e == -1) break;  // -1이 입력되면 인접 노드 입력 종료
      cin >> c;  // 해당 인접 노드와의 거리(가중치) 입력
      v[s].push_back({e, c});  // 인접 리스트에 추가
    }
  }

  visited[1] = true;  // 1번 노드부터 탐색 시작
  dfs(1, 0);  // 임의의 노드(1번 노드)에서 dfs 실행

  fill(visited, visited + 100001, false);  // 방문 여부 초기화
  dist = 0;  // 최대 거리 초기화
  visited[selected] = true;  // 첫 번째 dfs에서 찾은 가장 먼 노드에서 다시 dfs 시작

  dfs(selected, 0);  // 가장 먼 노드에서 다시 한 번 dfs 실행

  cout << dist;
}
