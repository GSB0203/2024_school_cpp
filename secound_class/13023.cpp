#include <iostream>
#include <vector>
using namespace std;

vector<int> v[2000];  //관계 저장 인접 리스트
bool visited[2000];  //방문했는지 저장하는 배열
bool ispossible;  //5명의 친구 연결 되었는지 여부

void dfs(int node, int depth) {
  if (depth == 4) {  //만약 5명의 친구가 연결되었나?
    ispossible = true;
    return;
  }

  visited[node] = true;  //현재 노드 방문
  for (int i = 0; i < v[node].size(); ++i) {  //친구 목록 순회
    int next = v[node][i];  //다음 친구 저장
    if (!visited[next] && !ispossible) {  //방문 X, 5명 친구 관계 발견 X
      dfs(next, depth + 1);  //다음 친구 방문
    }
  }
  visited[node] = false;  //백트래킹
}

int main() {
  int n, m;cin>>n>>m;

  for (int i = 0; i < m; ++i) {
    int a, b;
    cin>>a>>b;
    v[a].push_back(b);
    v[b].push_back(a);
  }

  for (int i = 0; i < n; ++i) {
    dfs(i, 0);
    if (ispossible) break;
  }

  cout<<ispossible;
  return 0;
}