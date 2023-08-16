/**
  *  programmer:  Zama
*    created: 12.08.2023 21:06:31
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> C(N);
  vector<vector<int>> A;
  for (int i = 0; i < N; i++) {
    cin >> C[i];
    vector<int> A_input(C[i]);
    for (int j = 0; j < C[i]; j++) {
      cin >> A_input[j];
    }
    A.push_back(A_input);
  }
  int X;
  cin >> X;

  int min_count = 99999;

  bool is_exist = 0;
  for (int i = 0; i < N; i++) {
    if (find(A[i].begin(), A[i].end(), X) != A[i].end()) {
      is_exist = 1;
      min_count = min(min_count, C[i]);
    }
  }

  if (!is_exist) {
    cout << 0 << endl;
    return 0;
  }
  
  vector<int> man;
  for (int i = 0; i < N; i++) {
    if (C[i] == min_count && find(A[i].begin(), A[i].end(), X) != A[i].end()) {
      man.push_back(i+1);
    }
  }

  sort(man.begin(), man.end());

  cout << man.size() << endl;
  for (auto& x: man) {
    cout << x << ' ';
  }
  cout << endl;

  
  return 0;
}