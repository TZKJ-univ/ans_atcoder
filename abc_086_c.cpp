/**
*    programmer:  Zama
*    created: 15.05.2023 16:08:49
**/

#include<bits/stdc++.h>

using namespace std;

int main() {
  int N;
	cin >> N;
	int t[N], x[N], y[N];
	for (int i = 0; i < N; i++) cin >> t[i] >> x[i] >> y[i];

	int x_now = 0, y_now = 0, t_now = 0;
	bool can = 1;
	for (int i = 0; i < N; i++) {
		int dist = abs(x[i] - x_now) + abs(y[i] - y_now);
		if (dist > (t[i] - t_now) || (dist - (t[i] - t_now)) % 2 != 0) {
			can = 0;
			break;
		}
		x_now = x[i];
		y_now = y[i];
		t_now = t[i];
	}

	if (can) cout << "Yes";
	else cout << "No";

	return 0;
}