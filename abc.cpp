/**
  *  programmer:  Zama
*    created: 05.08.2023 21:05:52
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);

  for (int i = 0; i < M; i++) {
    cin >> A[i] >> B[i];
  }

  for (int i = 0; i < M; i++) {
    A[i]--;
    B[i]--;
  }

  vector<bool> ok(N, false);
  for (int i = 0; i < M; i++) {
    ok[B[i]] = true;
  }

  int count = 0;
  int index = -1;
  for (int i = 0; i < N; i++) {
    if (!ok[i]) {
      count++;
      index = i;
    }
  }

  if (count == 1) cout << index+1 <<endl;
  else cout << -1 << endl;

  return 0;
}