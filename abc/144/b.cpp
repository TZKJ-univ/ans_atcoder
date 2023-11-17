/**
  *  programmer:  Zama
*    created: 27.05.2023 23:42:13
**/

#include<bits/stdc++.h>

using namespace std;

int main() {
  int N;
  cin >> N;
  
  for (int i = 0; i < N; i++) 

  for (int i = 1; i <= 9; i++) {
    if (N % i == 0 && 1 <= N/i && N/i <= 9 ) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  
  return 0;
}