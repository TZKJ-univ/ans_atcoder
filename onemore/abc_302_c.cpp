/**
  *  programmer:  Zama
*    created: 13.07.2023 13:37:27
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  vector<string> S(N);
  for (int i = 0; i < N; i++) {
    cin >> S[i];
  }
  sort(S.begin(), S.end());

  do {
    bool ok = 1;
    for (int i = 0; i < N-1; i++) {
      int count = 0;
      for (int j = 0; j < M; j++) {
        if (S[i][j] != S[i+1][j]) count++;
      }
      if (count != 1) ok = 0;
    }
    if (ok) {
      cout << "Yes" << endl;
      return 0;
    }
  } while (next_permutation(S.begin(), S.end()));

  cout << "No" << endl;
  
  return 0;
}