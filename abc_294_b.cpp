/**
  *  programmer:  Zama
*    created: 27.05.2023 22:33:40
**/

#include<bits/stdc++.h>

using namespace std;

int main() {
  int H, W;
  cin >> H >> W;

  for (int i = 0; i < H; i++) {
    string s(W, '.');
    for (int j = 0; j < W; j++) {
      int x;
      cin >> x;
      if (x != 0) s[j] = 'A'+x-1;
    }
    cout << s << endl;
  }
  
  return 0;
}