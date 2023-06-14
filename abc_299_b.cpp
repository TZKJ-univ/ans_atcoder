/**
*    programmer:  Zama
*    created: 17.05.2023 22:55:09
**/

#include<bits/stdc++.h>

using namespace std;

int main() {
  int N, T;
	cin >> N >> T;
	int C[N], R[N];
	for (int i = 0; i < N; i++) cin >> C[i];
	for (int i = 0; i < N; i++) cin >> R[i];

	int count = 0;
	for (int i = 0; i < N; i++) {
		if (C[i] == T) count++;
	}
	int max=-1024;
	int winner;
	if (count >= 1) {
		for (int i = 0; i < N; i++) {
			if(C[i] == T && R[i] > max) {
				max = R[i];
				winner = i+1;
			}
		}
	}
	else {
		for (int i = 0; i < N; i++) {
			if(C[i] == C[0] && R[i] > max) {
				max = R[i];
				winner = i+1;
			}
		}
	}

	cout << winner << endl;

	return 0;
}