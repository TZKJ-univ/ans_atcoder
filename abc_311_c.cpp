/**
  *  programmer:  Zama
*    created: 22.07.2023 20:59:31
**/

#include <bits/stdc++.h>

using namespace std;

int dfs(const vector<vector<int>> &G, int v, vector<int> &list) {
  for (int i = 0; i < G[v].size(); i++) {
    if (G[v][i]==1 and i == list[0]) {
      cout << "find2:" << i << endl;
      return 0;
    }
    else if (G[v][i]==1) {
    cout << "find1:" << i << endl;
      list.push_back(i);
      if (dfs(G, i, list) == 0) return 0;
    }
  }
  return 1;
}

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
   
  for (int i = 0; i < N; i++) {
    cin >> A[i];
    A[i]--;
  }
   
  vector<vector<int>> graph(N, vector<int>(N));
  for (int i = 0; i < N; i++) {
    graph[i][A[i]] = 1;
  }

int i = 0;
    cout << "i=" << i << endl;
    vector<int> list(0); 
    list.push_back(i);

    int result;
    result = dfs(graph, i, list);
    if (result == 0) {
      for (auto& l: list) cout << l+1 << ' ';
      cout << endl;
      return 0;
    }
  
  
  return 0;
}