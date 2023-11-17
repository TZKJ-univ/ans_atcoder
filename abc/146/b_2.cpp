/**
  *  programmer:  Zama
*    created: 05.07.2023 15:39:57
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;

  for(int i = 0; i < S.size(); i++) {
    cout << char('A'+(S[i] - 'A' + N) % 26);
  }
  cout << endl;
  
  return 0;
}