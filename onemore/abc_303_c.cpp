/**
  *  programmer:  Zama
*    created: 05.07.2023 16:05:36
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, M, H, K;
  cin >> N >> M >> H >> K;
  string S;
  cin >> S;
  int x[M], y[M];
  for (int i = 0; i < M; i++) {
    cin >> x[i] >> y[i];
  }

  vector<bool> item_flag(M, true);

  int count = 0, x_now = 0, y_now = 0;
  int i = 0;
  while (H > 0 && i < S.size()) {
    switch (S[i]) {
      case 'R': 
        x_now++;
        break;
      case 'L':
        x_now--;
        break;
      case 'U':
        y_now++;
        break;
      case 'D':
        y_now--;
        break;
    }
    H--;
    for (int i = 0; i < M; i++) {
      if (x[i] == x_now && y[i] == y_now && item_flag[i] == true && H < K) {
        H = K;
        x[i] = y[i]= false;
        break;
      } 
    }
    count++;
    i++;
    if (N == count) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}