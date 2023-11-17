/**
*    programmer:  Zama
*    created: 14.05.2023 23:33:50
**/

#include<bits/stdc++.h>

using namespace std;

int main() {
  char s[3];
	for (int i=0; i<3; i++) cin >> s[i];
	int count = 0;
	for (int i=0; i<3; i++) {
		if (s[i] == '1') count++;
	}

	cout << count;

	return 0;
}