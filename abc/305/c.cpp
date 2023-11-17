/**
  *  programmer:  Zama
*    created: 13.07.2023 14:57:23
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  vector<string> S(H);
  for (int i = 0; i < H; i++) {
    cin >> S[i];
  }

  int i_min=1e9, i_max=-1e9, j_min=1e9, j_max=-1e9;

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (S[i][j]=='#') {
        i_min = min(i_min, i);
        i_max = max(i_max, i);
        j_min = min(j_min, j);
        j_max = max(j_max, j);
      }
    }
  }

  for (int i = i_min; i <= i_max; i++) {
    for (int j = j_min; j <= j_max; j++) {
      if (S[i][j] == '.') cout << i+1 << ' ' << j+1 << endl;
    }
  }
  
  return 0;
}