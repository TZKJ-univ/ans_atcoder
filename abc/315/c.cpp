/**
  *  programmer:  Zama
*    created: 19.08.2023 21:14:08
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> F(N), S(N);

    int best_i = -1; 
    int best_S = -1;
    for (int i = 0; i < N; i++) {
        cin >> F[i] >> S[i];
        if (best_S < S[i]) {
            best_S = S[i];
            best_i = i;
        }
    }
    
    int md = -1;
    for (int i = 0; i < N; i++) {
        if (i == best_i) continue;
        if (F[best_i] == F[i]) {
            md = max(md, S[i] + S[best_i]/2);
            md = max(md, S[best_i] + S[i]/2);
        }
        else {
            md = max(md, S[i] + S[best_i]);
        }   
    }
    cout << md << endl;
  
    return 0;
}