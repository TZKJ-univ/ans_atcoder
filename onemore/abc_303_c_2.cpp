/**
  *  programmer:  Zama
*    created: 13.07.2023 16:53:51
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, M, H, K;
  cin >> N >> M >> H >> K;
  string S;
  cin >> S;
  set<pair<int, int>> item;

  for (int i = 0; i < M; i++) {
    int x, y;
    cin >> x >> y;
    item.insert({x, y});
  }

  int cx = 0, cy = 0;
  for (int i = 0; i < N; i++) {
    if (S[i] == 'R') cx += 1;
    if (S[i] == 'L') cx -= 1;
    if (S[i] == 'U') cy += 1;
    if (S[i] == 'D') cy -= 1;

    H--;
    if (H < 0) {
      cout << "No" << endl;
      return 0;
    }
    if (H < K and item.count({cx, cy})) {
      H = K;
      item.erase({cx, cy});
    }
  }

  cout << "Yes" << endl;

  return 0;
}