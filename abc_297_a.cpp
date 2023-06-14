/**
*    programmer:  Zama
*    created: 13.05.2023 20:16:33
**/

#include<bits/stdc++.h>

using namespace std;

int main() {
  int N;
  int D;
  cin >> N >> D;
  vector<int> T(N);
  for (int i = 0; i<N; i++) cin >> T[i];

  bool flag = false;
  
  for (int i = 0; i < N-1; i++) {
    if (T[i+1] - T[i] <= D) {
      flag = true;
      cout << T[i+1] << endl;
      break;
    }
  }

  if (flag == false) {cout << -1 << endl;}

  return 0;
}