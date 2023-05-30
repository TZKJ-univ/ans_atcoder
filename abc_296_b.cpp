/**
	*  programmer:  Zama
*    created: 24.05.2023 23:37:20
**/

#include<bits/stdc++.h>

using namespace std;

int main() {
  // vector<vector<char>> S(8, vector<char>(8));
	// for (auto& r:S) {
	// 	for (auto& e:r) {
	// 		cin >> e;
	// 	}
	// }

	vector<string> S(8);

	for (auto& s:S) {
		cin >> s;
	}

	int row, col;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (S[i][j] == '*') {
				row = 7-i;
				col = j;
			}
		}
	}

	char row_list[8] = {'1','2','3','4','5','6','7','8'};
	char col_list[8] ={'a','b','c','d','e','f','g','h'};

	cout << col_list[col] << row_list[row] << endl;
	return 0;
}