/**
  *  programmer:  Zama
*    created: 15.07.2023 20:50:19
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, P, Q;
  cin >> N >> P >> Q;
  vector<int> D(N);
  for (int i = 0; i < N; i++) cin >> D[i];

  int min_v = D[0]+Q;
  for (int i = 1; i < N; i++) {
    min_v = min(min_v, D[i]+Q);
  }

  if (P < min_v) {
    cout << P << endl;
  }
  else {
    cout << min_v << endl;
  }
  
  return 0;
}