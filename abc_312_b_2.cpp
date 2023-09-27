/**
  *  programmer:  Zama
*    created: 09.09.2023 16:11:15
**/

#include <bits/stdc++.h>
using namespace std;

#define OVERLOAD_REP(_1, _2, _3, name, ...) name
#define REP1(i, n) for (auto i = std::decay_t<decltype(n)>{}; (i) != (n); ++(i))
#define REP2(i, l, r) for (auto i = (l); (i) != (r); ++(i))
#define rep(...) OVERLOAD_REP(__VA_ARGS__, REP2, REP1)(__VA_ARGS__)
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)
using ull = unsigned long long;
using ll = long long;
using vi = vector<int>;
using vl = vector<long>;
using vll = vector<long long>;
using vvi = vector<vi>;
using vvl = vector<vl>;
using vvll = vector<vll>;
using vs = vector<string>;
using pii = pair<int, int>;
#define YESNO(bool) if(bool){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}
#define yesno(bool) if(bool){cout<<"yes"<<endl;}else{cout<<"no"<<endl;}
#define YesNo(bool) if(bool){cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}

int main()
{
    int N, M;
    cin >> N >> M;
    vs S(N);
    for (auto& s: S) cin >> s;

    rep(i, N-9+1) {
        rep(j, M-9+1) {
            bool ok = 1;
            rep(k, 3) {
                rep(m, 3) {
                    if (S[i+k][j+m] != '#' or S[i+k+6][j+m+6] != '#') ok = 0;
                }
            }
            if (S[i][j+3] != '.') ok = 0;
            if (S[i+1][j+3] != '.') ok = 0;
            if (S[i+2][j+3] != '.') ok = 0;
            if (S[i+3][j] != '.') ok = 0;
            if (S[i+3][j+1] != '.') ok = 0;
            if (S[i+3][j+2] != '.') ok = 0;
            if (S[i+3][j+3] != '.') ok = 0;

            if (S[i+5][j+5] != '.') ok = 0;
            if (S[i+5][j+6] != '.') ok = 0;
            if (S[i+5][j+7] != '.') ok = 0;
            if (S[i+5][j+8] != '.') ok = 0;
            if (S[i+6][j+5] != '.') ok = 0;
            if (S[i+7][j+5] != '.') ok = 0;
            if (S[i+8][j+5] != '.') ok = 0;

            if (ok) cout << i+1 << ' ' << j+1 << endl;

        }
    }

    return 0;
}