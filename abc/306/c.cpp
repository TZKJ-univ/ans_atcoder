/**
  *  programmer:  Zama
*    created: 13.07.2023 16:10:00
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  cin >> N;
  int A[3*N];
  for (int i = 0; i < 3*N; i++) {
    cin >> A[i];
  }
  int count[N] = {0};
  vector<int> index;
  for (int i = 0; i < 3*N; i++) {
    count[A[i]-1]++;
    if (count[A[i]-1] == 2) {
      index.push_back(A[i]-1);
    }
  }

  for (int i = 0; i < N; i++) {
    cout << index[i]+1 << ' '; 
  }

  cout << endl;

  return 0;
}