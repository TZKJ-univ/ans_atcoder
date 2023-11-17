/**
  *  programmer:  Zama
*    created: 25.05.2023 00:19:13
**/

#include<bits/stdc++.h>

using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  vector<string> S(H);
  for (auto& s:S) cin >> s;

  int a[8] = {-1,-1,-1,0,0,1,1,1};
  int b[8] = {-1,0,1,-1,1,-1,0,1};

  string c;
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      for (int k = 0; k < 8; k++) {   // 方向を決定
        if (i + 4*a[k] < 0 || i + 4*a[k] >= H) continue;
        if (j + 4*b[k] < 0 || j + 4*b[k] >= W) continue;
        c = "";
        for (int m = 0; m < 5; m++) {
          c += S[i+m*a[k]][j+m*b[k]];
        }
        if (c == "snuke") {
          for (int m = 0; m < 5; m++) {
            cout << i+m*a[k]+1 << ' ' << j+m*b[k]+1 << endl;
          }
        }
      }
    }
  }

  return 0;
}