/**
  *  programmer:  Zama
*    created: 29.05.2023 21:35:37
**/

#include <iostream>
#include <string>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  string n1 = "", n2 = "";
  for (int i = 0; i < b; i++) {
    n1 += char('0'+a);
  }
  for (int i = 0; i < a; i++) {
    n2 += char('0'+b);
  }
  
  cout << min(n1, n2) << endl;
  
  return 0;
}