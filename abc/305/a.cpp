/**
  *  programmer:  Zama
*    created: 13.07.2023 14:39:54
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  cin >> N;
  int x = int(N / 5)*5;
  if (N % 5 <= 2) cout << x << endl;
  else cout << x+5 << endl;

  return 0;
}