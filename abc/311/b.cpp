/**
  *  programmer:  Zama
*    created: 22.07.2023 21:04:49
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, D;
  cin >> N >> D;
  vector<string> S(N);
  for (int i = 0; i < N; i++) cin >> S[i];

  int high_s = 0;
  bool renzoku = 0;
  int count;
  for (int i = 0; i < D; i++) {
    bool ok = 1;
    for (int j = 0; j < N; j++) {
      if (S[j][i] == 'x') ok = 0;
    }
    if (ok && !renzoku) {
      renzoku = 1;
      count = 1;
    }
    else if (ok && renzoku) {
      count++;
    }
    else if (!ok && renzoku) {
      high_s = max(high_s, count);
      renzoku = 0;
    }
  }
  high_s = max(high_s, count);

  cout << high_s << endl;
  
  return 0;
}