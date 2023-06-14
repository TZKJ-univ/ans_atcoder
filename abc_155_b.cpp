/**
  *  programmer:  Zama
*    created: 28.05.2023 18:08:07
**/

#include<bits/stdc++.h>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A[i];

  bool f = 1;
  for(auto& a:A) {
    if (a % 2 == 0) {
      if (a % 3 != 0 && a % 5 != 0) f = 0; 
    }
  }

  if (f == 1) cout << "APPROVED" << endl;
  else cout << "DENIED" << endl;
  
  return 0;
}