/**
  *  programmer:  Zama
*    created: 22.07.2023 20:59:35
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;

  bool a = 0, b = 0, c = 0;
  for(int i = 0; i < N; i++) {
    if (S[i] == 'A') a = 1;
    if (S[i] == 'B') b = 1;
    if (S[i] == 'C') c = 1;
    if (a && b && c == 1) {
      cout << i + 1 << endl;
      return 0;
    }
  }

}