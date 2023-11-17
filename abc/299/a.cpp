/**
*    author:  Zama
*    created: 11.05.2023 14:09:50
**/

#include<bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  int state = 0;
  int l_index, r_index, index;

  for (int i=0; i<n; i++) {
    if (s[i] == '|') {
      if (state == 0) {
        l_index = i;
        state = 1;
      }
      else {
        r_index = i;
      }
    }
    else if (s[i] == '*') {
      index = i;
    }
  }

  if (l_index < index && index < r_index)
    cout << "in" << endl;
  else
    cout << "out" << endl;
    
  return 0;
}