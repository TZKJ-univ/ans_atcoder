/**
*    programmer:  Zama
*    created: 15.05.2023 17:44:39
**/

#include<bits/stdc++.h>

using namespace std;

int main() {
  int N;
	string S;
	cin >> N >> S;

	int count_T = 0;

	for (int i = 0; i < N; i++) {
		if (S[i] == 'T') count_T++;
	}

	if (count_T > N-count_T) cout << 'T' << endl;
	else if (count_T < N-count_T) cout << 'A' << endl;
	else {
		if (S[S.size()-1] == 'A') cout << 'T' << endl;
		else cout << 'A' << endl;
	}
	return 0;
}