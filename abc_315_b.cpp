/**
  *  programmer:  Zama
*    created: 19.08.2023 21:04:29
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int M;
    cin >> M;
    vector<int> D(M);
    int sum = 0;
    for (auto& d : D) {
        cin >> d;
        sum += d;
    }
    int target = (sum + 1) / 2;

    for (int i = 0; i < M; i++) {
        if (target - D[i] == 0) {
            cout << i + 1 << ' ' << D[i] << endl;
            return 0;
        }
        else if (target - D[i] < 0) {
            cout << i+1 << ' ' << target << endl;
            return 0;
        }
        target -= D[i];
    }
  
    return 0;
}