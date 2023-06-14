/**
  *  programmer:  Zama
*    created: 30.05.2023 09:57:45
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, K, M;
  cin >> N >> K >> M;

  vector<int> A(N-1);
  for (auto& a:A) cin >> a;

  int nec = N*M - accumulate(A.begin(), A.end(), 0);

  if (nec > K) cout << -1;
  else if (nec < 0) cout << 0;
  else cout << nec;
  cout << endl;

  return 0;
}