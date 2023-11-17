/**
  *  programmer:  Zama
*    created: 03.06.2023 21:00:32
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> S(N);
  vector<int> A(N);

  for (int i = 0; i < N; i++) {
    cin >> S[i] >> A[i];
  }

  int min = 0;
  int min_a = A[0];

  for (int i = 1; i < N; i++) {
    if (min_a > A[i]) {
      min = i;
      min_a = A[i];
    }
  }

  for (int i = min; i < N; i++) {
    cout << S[i] << endl;
  }

  for (int i = 0; i < min; i++) {
    cout << S[i] << endl;
  }
  
  return 0;
}