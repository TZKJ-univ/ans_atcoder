/**
*    programmer:  Zama
*    created: 15.05.2023 14:54:59
**/

#include<bits/stdc++.h>

using namespace std;

int main() {
  int N;
  cin >> N;
  int d[N];
  for (int i = 0; i < N; i++) cin >> d[i];

  sort(d, d+N);

  int dan = 1;
  for (int i = 0; i < N-1; i++) {
    if (d[i] != d[i+1]) dan++;
  }

  cout << dan << endl;

  return 0;
}