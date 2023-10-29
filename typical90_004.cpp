/**
  *  programmer:  Zama
*    created: 25.10.2023 15:40:46
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

int main()
{
    int H, W;
    cin >> H >> W;
    vvi A(H, vi(W));
    rep(i, H) {
        rep(j, W) {
            cin >> A[i][j];
        }
    }

    vvi ans(H, vi(W));
    vi cum_h(H), cum_w(W);
    rep(i, H) {
        rep(j, W) {
            cum_h[i] += A[i][j];
        }
    }
    rep(j, W) {
        rep(i, H) {
            cum_w[j] += A[i][j];
        }
    }

    rep(i, H) {
        rep(j, W) {
            ans[i][j] = cum_h[i] + cum_w[j] - A[i][j];
        }
    }

    rep(i, H) {
        rep (j, W) {
            cout << ans[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}