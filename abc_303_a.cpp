/**
  *  programmer:  Zama
*    created: 27.05.2023 21:00:31
**/

#include<bits/stdc++.h>

using namespace std;

int main() {
  int N;
  cin >> N;

  string S, T;
  cin >> S >> T;

  bool ok = 0;
  
  if (S == T) ok = 1;
  
  bool f = 1;
  for (int i = 0; i < N; i++) {
    if (!(S[i] == T[i] || (S[i] == '1' && T[i] =='l' || S[i] == 'l' && T[i] =='1') || ((S[i] == '0' && T[i] =='o' || S[i] == 'o' && T[i] =='0')))) f = 0;
  }
  if (f == 1) ok = 1;

  if (ok == 1) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}