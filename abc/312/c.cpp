/**
  *  programmer:  Zama
*    created: 29.07.2023 20:52:56
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(N), B(M), AB;
  for (int i = 0; i < N; i++) cin >> A[i];
  for (int i = 0; i < M; i++) cin >> B[i];

  AB.insert(AB.end(), A.begin(), A.end());
  AB.insert(AB.end(), B.begin(), B.end());

  int B_max = B[0];
  for (int i = 1; i < M; i++) {
    B_max = max(B_max, B[i]);
  }

  int A_min = A[0];
  for (int i = 1; i < M; i++) {
    A_min = min(A_min, A[i]);
  }

  if (B_max < A_min) {
    cout << B_max+1 << endl;
    return 0;
  }

  long long min_v1 = pow(10, 10);

  sort(AB.begin(), AB.end());
  int min_i, max_i;
  for (int i = 0; i < N+M; i++) {
    if (AB[i] == A_min) min_i = i;
    if (AB[i] == B_max) max_i = i;
  }
  vector<int> AB2(AB.begin()+min_i, AB.begin()+max_i); 

  for (auto& x: AB2) {
    int c1 = 0, c2 = 0;
    for (auto& a: A) if (a <= x) c1++;
    for (auto& b: B) if (b >= x) c2++;

    if (c1 >= c2 and x < min_v1) min_v1 = x;
  }

  cout << min_v1 << endl;
  
  return  0;
}