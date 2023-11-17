/**
  *  programmer:  Zama
*    created: 21.10.2023 20:58:50
**/

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

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
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int H, W;
vvi seen;

vector<pair<int, int>> dir{{-1, -1}, {0, -1}, {1, -1}, {-1, 0}, {1, 0}, {-1, 1}, {0, 1}, {1, 1}};
vs S;

void dfs(int i, int j) {
    seen[i][j] = 1;
    for(auto& [a, b] : dir) {
        if (i + a < 0 or i + a >= H or j + b < 0 or j + b >= W) continue;
        if (seen[i+a][j+b]) continue;
        if (S[i + a][j + b] == '#') {
            dfs(i+a, j+b);
        }
    }
}

int main()
{
    cin >> H >> W;
    S.resize(H);
    rep(i, H) cin >> S[i];
    seen.assign(H, vi(W));

    int ans = 0;
    rep(i, H) {
        rep(j, W) {
            if (seen[i][j]) continue;
            if (S[i][j] == '.') continue;
            if (S[i][j] == '#') {
                dfs(i, j);
            }
            ans += 1;
        }
    }

    cout << ans << endl;

    return 0;
}