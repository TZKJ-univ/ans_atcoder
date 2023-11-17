/**
*    programmer:  Zama
*    created: 19.05.2023 09:45:37
**/

#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> rotate(vector<vector<int>> A) {
	int N = A.size();
	vector<vector<int>> res(N, vector<int>(N));
	for (int i = 0; i < N; i++) for (int j = 0; j < N; j++) res[i][j] = A[N-j-1][i];
	return res;
}

int main() {
	int N;
	cin >> N;
	vector<vector<int>> A(N, vector<int>(N));
	for (int i = 0; i < N; i++) for (int j = 0; j < N; j++) cin >> A[i][j];
	vector<vector<int>> B(N, vector<int>(N));
	for (int i = 0; i < N; i++) for (int j = 0; j < N; j++) cin >> B[i][j];

	for (int _ = 0; _ < 4; _++) {
	bool ok = 1;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (A[i][j] == 1 && A[i][j] != B[i][j]) {
					ok = 0;
				}
			}
		}
		if (ok == 1) {
			cout << "Yes" << endl;
			return 0;
		}
		A = rotate(A);
	}
	cout << "No" << endl;

	return 0;
}