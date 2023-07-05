/**
  *  programmer:  Zama
*    created: 30.05.2023 09:34:25
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  cin >> N;

  string S;
  cin >> S;

  for (int i = 0; i < S.size(); i++) {
    int x = S[i] - 'A';
    x = (x + N) % 26;
    cout << char(x+'A');
  }
  
  return 0;
}