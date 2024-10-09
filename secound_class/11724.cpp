#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    bool isVisited;
    vector<Node*> adjs;
    Node(int val) : data(val), isVisited(false) {}
};

void findCC(Node* node) {
  if (node == nullptr || node->isVisited) return;
  node->isVisited = true;

  for (Node* adj : node->adjs) {
    findCC(adj);
  }
}

int main() {

  int n, m;cin>>n>>m;
  vector<Node*> nodes(n);

  for (int i = 1; i <= n; ++i)
    nodes[i] = new Node(i);


  for (int i = 1; i <= m; ++i) {
    int u, v;cin>>u>>v;
    nodes[u]->adjs.push_back(nodes[v]);
    nodes[v]->adjs.push_back(nodes[u]);
  }
  int count = 0;
  for (int i = 1; i <= n; ++i) {
    if (!nodes[i]->isVisited) {
      count++;
      findCC(nodes[i]);
    }
  }

  cout<<count;

  for (int i = 1; i <= n; ++i) {
    delete nodes[i];
  }

  return 0;
}
