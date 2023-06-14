/**
*    programmer:  Zama
*    created: 13.05.2023 21:34:00
**/

#include<bits/stdc++.h>

using namespace std;

int main() {
	int H, W;
  cin >> H >> W;
	vector<string> A(H), B(H);
	for (auto& x : A) cin >> x;
	for (auto& x : B) cin >> x;
	for (int s = 0; s < H; s++) {
		for (int t = 0; t < W; t++) {
			int ok = 1;
			for (int i = 0; i < H; i++) {
				for (int j = 0; j < W; j++) {
					if (A[(i - s + H) % H][(j - t + W) % W] != B[i][j]) ok = 0;
				}
			}
			if (ok) {
				cout << "Yes" << endl;
				exit(0);
			}
		}
	}
	cout << "No" << endl;
}