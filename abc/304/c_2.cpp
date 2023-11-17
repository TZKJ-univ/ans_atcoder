/**
*  programmer:  Zama
*    created: 13.07.2023 23:41:45
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
int N, D;
cin >> N >> D;
vector<int> x(N), y(N);
for (int i = 0; i < N; i++) cin >> x[i] >> y[i];

vector<vector<bool>> graph(N, vector<bool>(N));
for (int i = 0; i < N; i++) {
  for (int j = 0; j < N; j++) {
    if ((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]) <= D*D) graph[i][j] = true;
  }
}

queue<int> que;
que.push(0);

vector<bool> ans(N);
ans[0] = true;

while (!que.empty()) {
  int q = que.front();
  que.pop();
  for (int i = 0; i < N; i++) {
    if (graph[q][i] and !ans[i]) {
      ans[i] = true;
      que.push(i);
    }
  }
}
for (int i = 0; i < N; i++) {
  cout << (ans[i] ? "Yes" : "No") << endl;
}


  return 0;
}