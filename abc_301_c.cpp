/**
  *  programmer:  Zama
*    created: 14.07.2023 00:33:19
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
  string s, t;
  cin >> s >> t;

  sort(s.begin(), s.end());
  sort(t.begin(), t.end());
  cout << s << endl << t;
  return 0;
}