/**
  *  programmer:  Zama
*    created: 30.05.2023 09:30:22
**/

// #include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
  int N;
  cin >> N;
  string S, T;
  cin >> S >> T;
  
  for (int i = 0; i < N; i++) {
    cout << S[i];
    cout << T[i];    
  }
  cout << endl;
  
  return 0;
}