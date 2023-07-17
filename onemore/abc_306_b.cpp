/**
  *  programmer:  Zama
*    created: 13.07.2023 15:48:38
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
  unsigned long int sum = 0;
  int A;
  unsigned long int two = 1;
  for (int i = 0; i < 64; i++) {
    cin >> A;
    if (A == 1) sum += two;
    two *= 2; 
  }
  cout << sum << endl;
  
  return 0;
}