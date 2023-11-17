/**
  *  programmer:  Zama
*    created: 12.08.2023 21:33:47
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, M;
  string S;
  cin >> N >> M >> S;
  vector<int> C(N);
  for (int i = 0; i < N; i++) cin >> C[i];

  char tmp;
  int next_i, last_i;
  for (int c = 1; c < M+1; c++) {
    bool is_first = true;
    for (int i = N-1 ; i >= 0; i--) {
      if (C[i] == c && is_first) {
        tmp = S[i];
        next_i = i;
        is_first = false;
      }
      else if (C[i] == c && !is_first) {
        S[next_i] = S[i];
        next_i = i;
      }
    }
    S[next_i] = tmp;
  }

  cout << S << endl;
  
  return 0;
}