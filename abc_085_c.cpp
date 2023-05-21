/**
*    programmer:  Zama
*    created: 15.05.2023 15:08:41
**/

#include<bits/stdc++.h>

using namespace std;

int main() {
	int N, Y;
	cin >> N >> Y;
	for (int i = 0; i <= N; i++) {
		for (int j = 0; j <= N-i; j++) {
			if (10000*i+5000*j+1000*(N-i-j) == Y) {
				cout << i << ' ' << j << ' ' << N-i-j << endl;
				exit(0);
			}
		}
	}
	cout << -1 << ' ' << -1 << ' ' << -1 << endl;


	return 0;
}