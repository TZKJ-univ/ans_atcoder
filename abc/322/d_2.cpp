/**
*  programmer: Zama
*  created: 06.11.2023 16:30:25
**/

#include <bits/stdc++.h>

using namespace std;

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

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


void rotate(vs& p) {
    vs rp(4, "....");
    rep(i, 4) {
        rep(j, 4) {
            if (p[i][j] == '#') {
                rp[j][4-i-1] = '#';
            }
        }
    }
    p = rp;
}

bool can_put(vvi& G, vector<string>& P, int a, int b) {
    rep(x, 4) {
        rep (y, 4) {
            if (P[x][y] == '#') {
                int corx = x + a;
                int cory = y + b;
                if (corx < 0 or corx > 3 or cory < 0 or cory > 3) return 0;
                if (G[corx][cory] == 1) return 0;
                G[corx][cory] = 1;
            }
        }
    }

    return 1;
}

void dfs(vvi& G, vector<vector<string>>& P, int n) {
    if (n == 3) {
        int ok = 1;
        rep(i, 4) {
            rep(j, 4) {
                ok *= G[i][j];
            }
        }
        if (ok) {
            cout << "Yes" << endl;
            exit(0);
        } else return;
    }
    rep(a, -3, 4) {
        rep(b, -3, 4) {
            auto tmp_G = G;
            if (can_put(tmp_G, P[n], a, b)) {
                dfs(tmp_G, P, n+1);
            }
        }
    }
}

int main()
{
    vector<vector<string>> P(3, vector<string>(4));

    rep(i, 3) {
        rep(j, 4) {
            cin >> P[i][j];
        }
    }
    vvi G(4, vi(4));

    rep(t, 4) {
        rep(u, 4) {
            // 引数のピースの向きで置けるかを再起的に確かめる
            dfs(G, P, 0);
            rotate(P[2]);
        }
        rotate(P[1]);
    }

    cout << "No" << endl;

    return 0;
}