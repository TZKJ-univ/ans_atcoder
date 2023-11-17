/**
  *  programmer:  Zama
*    created: 13.07.2023 14:47:17
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
  char p, q;
  cin >> p >> q;

  int d[6] = {3,1,4,1,5,9};
  int start = min(p - 'A', q - 'A');
  int end = max(p - 'A', q - 'A');

  int dist = 0;
  for (int i = start; i < end; i++) {
    dist += d[i];
  }

  cout << dist << endl;
  

  return 0;
}