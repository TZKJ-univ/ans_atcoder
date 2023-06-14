/**
  *  programmer:  Zama
*    created: 03.06.2023 21:14:05
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
  long long int N;
  cin >> N;

  if (N <= pow(10, 3)-1) cout << N;
  else if (pow(10, 3) <= N && N <= pow(10, 4)-1) cout << int(int(N / pow(10, 1)) *pow(10, 1)); 
  else if (pow(10, 4) <= N && N <= pow(10, 5)-1) cout << int(int(N / pow(10, 2)) *pow(10, 2));
  else if (pow(10, 5) <= N && N <= pow(10, 6)-1) cout << int(int(N / pow(10, 3)) *pow(10, 3));
  else if (pow(10, 6) <= N && N <= pow(10, 7)-1) cout << int(int(N / pow(10, 4)) *pow(10, 4));
  else if (pow(10, 7) <= N && N <= pow(10, 8)-1) cout << int(int(N / pow(10, 5)) *pow(10, 5));
  else if (pow(10, 8) <= N && N <= pow(10, 9)-1) cout << int(int(N / pow(10, 6)) *pow(10, 6));
  
  return 0;
}