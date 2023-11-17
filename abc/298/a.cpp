/**
*    author:  Zama
*    created: 13.05.2023 19:45:56
**/

#include<bits/stdc++.h>

using namespace std;

int main() {
  int n;
  string s;

  cin >> n >> s;

  for (int i=0; i<n; i++) {
    if (s[i] == 'x') {
      cout << "No" << endl;
      return 0;
      }
  }

  for (int i=0; i<n; i++) {
    if (s[i] == 'o') {
      cout << "Yes"<< endl;
      return 0;
    }
  }
  cout << "No"<< endl;
  return 0;
}