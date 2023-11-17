/**
  *  programmer:  Zama
*    created: 06.06.2023 17:39:19
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, M, H, K;
  cin >> N >> M >> H >> K;

  string S;
  cin >> S;

  vector<int> x(M);
  vector<int> y(M);

  int now_x = 0;
  int now_y = 0;

  for (int i = 0; i < N; i++) {
    if (S[i] == 'R') now_x++;
    if (S[i] == 'U') now_y++;
    if (S[i] == 'D') now_y--;
    if (S[i] == 'L') now_x--;
  }
  
  return 0;
}