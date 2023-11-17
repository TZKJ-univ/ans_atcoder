/**
*    programmer:  Zama
*    created: 14.05.2023 23:47:07
**/

#include<bits/stdc++.h>

using namespace std;

int main() {
	int N;
	cin >> N;
	int A[N];
	for (int i = 0; i < N; i++)
		cin >> A[i];
	
	int count = 0;
	while(1) {
		bool f = 0;	// 0ならば奇数がなく続行する
		for (int i = 0; i < N; i++) {
			if (A[i] % 2 == 0) {
				A[i] = A[i] / 2;
			}
			else
				f = 1;
		}

		if (f == 0) count++;
		else break;
	}
	cout << count << endl;

	return 0;
}