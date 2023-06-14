/**
  *  programmer:  Zama
*    created: 31.05.2023 16:10:53
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  cin >> N;
  string S;
  cin >> S;

  int count = 0;
  for(int i = 0; i < N-3+1; i++) {
    if (S[i] + S[i+1] + S[i+2] == "ABC") count++;
  }

  cout << count << endl;

  return 0;
}