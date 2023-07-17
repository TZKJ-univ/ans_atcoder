  /**
  *  programmer:  Zama
*    created: 15.07.2023 20:50:47
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector <string> S(N);
  for (int i = 0; i < N; i++) {
    cin >> S[i];
  }

  for (int i = 0; i < N; i++) {
    string rev_S = S[i];
    reverse(rev_S.begin(), rev_S.end());
    if (S[i] > rev_S)
      S[i] = rev_S;
  }

  set<string> dict;
  for (int i = 0; i < N; i++) {
    dict.insert(S[i]);
  }

  cout << dict.size() << endl;
  
  return 0;
}