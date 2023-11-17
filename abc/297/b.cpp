/**
  *  programmer:  Zama
*    created: 23.05.2023 21:13:32
**/

#include<bits/stdc++.h>

using namespace std;

int main() {
  string S;
  cin >> S;

  vector<int> B, R;
  int K;

  for (int i = 0; i < S.length(); i++) {
    if (S[i] == 'B') B.push_back(i+1);
    if (S[i] == 'R') R.push_back(i+1);
    if (S[i] == 'K') K = i+1;
  }

  if ((B[0]+B[1]) % 2 == 1 && R[0] < K && K < R[1]) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}