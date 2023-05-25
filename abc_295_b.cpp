/**
  *  programmer:  Zama
*    created: 25.05.2023 14:43:36
**/

#include<bits/stdc++.h>

using namespace std;

int main() {
  int R, C;
  cin >> R >> C;
  char B[R][C];
  for (int i = 0; i < R; i++) for (int j = 0; j < C; j++) cin >> B[i][j];

  bool map[R][C] = {};

  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) {
      if (isdigit(B[i][j])) {
        int num = B[i][j] - '0';
        for (int m = 0; m < R; m++) {
          for (int n = 0; n < C; n++) {
            if (abs(m-i)+abs(n-j) <= num) map[m][n] = true;
          }
        }
      }
    }
  }

  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) {
      if (map[i][j]) B[i][j] = '.';
    }
  }

  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) {
      cout << B[i][j];
    }
    cout <<endl;
  }
  return 0;
}