/**
  *  programmer:  Zama
*    created: 06.06.2023 11:18:56
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
  string S;
  cin >> S;
  for (int i = 0; i < S.size()/2; i++) swap(S[2*i], S[2*i+1]);

  cout << S;
  
  return 0;
}