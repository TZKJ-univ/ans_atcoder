/**
  *  programmer:  Zama
*    created: 25.05.2023 00:03:12
**/

#include<bits/stdc++.h>

using namespace std;

int main() {
  long long int A, B;
  cin >> A >> B;
  cout << (A%B==0 ? A/B : A/B+1) << endl;
  return 0;
}