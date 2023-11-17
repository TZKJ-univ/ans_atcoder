/**
*    programmer:  Zama
*    created: 13.05.2023 21:21:31
**/

#include<bits/stdc++.h>

using namespace std;

int main() {
	int N;
	string S;
	cin >> N >> S;

	bool f = true;
	for (int i = 0; i < N-1; i++) {
		if(S[i] == 'M' && S[i+1] == 'M' || S[i] == 'F' && S[i+1] == 'F') {
			f = false;
			break;
		}
	}

	cout << (f ? "Yes" : "No");

	return 0;
}