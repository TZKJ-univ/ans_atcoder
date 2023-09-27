/**
  *  programmer:  Zama
*    created: 15.07.2023 20:50:35
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> P(N), C(N);
  vector<vector<int>> F(N, vector<int>(M, -1));

  for (int i = 0; i < N; i++) {
    cin >> P[i] >> C[i];
    for (int j = 0; j < C[i]; j++) {
      cin >> F[i][j];
     }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (P[i]<P[j]) {
        continue;
      }
      bool ok = true;
      for (int k = 0; k < C[i]; k++) {
        if (find(F[j].begin(), F[j].end(), F[i][k]) == F[j].end()) {
          ok = false;
          break;
        }
      }
      if (!ok) continue;
      if (P[i] > P[j]) {
        cout << "Yes" << endl;
        return 0;
      }
      for (int k = 0; k < C[j]; k++) {
        if (find(F[i].begin(), F[i].end(), F[j][k]) == F[i].end()) {
          cout << "Yes" <<  endl;
          return 0;
        }
      }
    }
  }
  cout << "No" << endl;
  return 0;
}