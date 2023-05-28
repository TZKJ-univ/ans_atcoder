/**
  *  programmer:  Zama
*    created: 27.05.2023 22:25:30
**/

#include<bits/stdc++.h>

using namespace std;

int main() {
  int N;
  cin >> N;
  
  vector<int> A(N);
  vector<int> B;

  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  for (int i = 0; i < N; i++) {
    if (A[i] % 2 == 0) B.push_back(A[i]);
  }
  
  for (int i = 0; i < B.size(); i++) {
    cout << B[i] << ' ';
  }
  cout << endl;
  
  return 0;
}