/**
  *  programmer:  Zama
*    created: 27.05.2023 21:34:58
**/

#include<bits/stdc++.h>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<vector<int>> a(M, vector<int>(N));

  for (int i = 0; i < M; i++) for (int j = 0; j < N; j++) cin >> a[i][j];

  vector<vector<int>> f(N, vector<int>(N, 0)); 

  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N-1; j++) {
      if (a[i][j] < a[i][j+1]) f[a[i][j]-1][a[i][j+1]-1] = 1;
      else f[a[i][j+1]-1][a[i][j]-1] = 1;
    }
  }

  int c = 0;
  for (int i = 0; i < N; i++) {
    for (int j = i+1; j < N; j++) {
      if (f[i][j] == 0) c++;
    }
  }

  cout << c << endl;

  return 0;
}