/**
  *  programmer:  Zama
*    created: 03.06.2023 21:29:28
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, D;
  cin >> N >> D;
  vector<int> X(N);
  vector<int> Y(N);
  for (int i = 0; i < N; i++) cin >> X[i] >> Y[i];

  vector<vector<bool>> graph(N, vector<bool>(N));

  for (int i = 0; i < N; i++) for(int j = 0; j < N; j++) if (pow(X[i]-X[j], 2) + pow(Y[i]-Y[j], 2) <= D * D) graph[i][j] = true;

  vector<bool> ans(N);
  ans[0] = true;

  queue<int> que;
  que.push(0);

  while (!que.empty()){
    int q = que.front();
    que.pop();

    for (int i = 0; i < N; i++) {
      if (graph[q][i] && !ans[i]) {
        ans[i] = true;
        que.push(i);
      }
    }
  }

  for (auto& x:ans) {
    cout << (x?"Yes":"No") << endl;
  }

  // for (int i = 0; i < N; i++) {
  //   cout << (ans[i]?"Yes":"No") << endl;
  // }
  return 0;
}