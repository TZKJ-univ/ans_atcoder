/**
  *  programmer:  Zama
*    created: 29.07.2023 21:03:22
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<string> S(N);
  for (int i = 0; i < N; i++) cin >> S[i];

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      if (i + 8 >= N or j + 8 >= M) break;
      bool ok = 1;
      if (S[i].substr(j, 4) != "###.") ok = 0;
      if (S[i+1].substr(j, 4) != "###.") ok = 0;
      if (S[i+2].substr(j, 4) != "###.") ok = 0;
      if (S[i+3].substr(j, 4) != "....") ok = 0;
      if (S[i+5].substr(j+5, 4) != "....") ok = 0;
      if (S[i+6].substr(j+5, 4) != ".###") ok = 0;
      if (S[i+7].substr(j+5, 4) != ".###") ok = 0;
      if (S[i+8].substr(j+5, 4) != ".###") ok = 0;
      if (ok) cout << i+1 << ' ' << j+1 << endl;
    }
  }
  
  return 0;
}