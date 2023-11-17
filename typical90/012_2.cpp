/**
 * author: Zama
 * created: 17.11.2023 20:41:14
 **/

#include <bits/stdc++.h>

using namespace std;

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

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

#define OVERLOAD_REP(_1, _2, _3, name, ...) name
#define REP1(i, n) for (auto i = std::decay_t<decltype(n)>{}; (i) != (n); ++(i))
#define REP2(i, l, r) for (auto i = (l); (i) != (r); ++(i))
#define rep(...) OVERLOAD_REP(__VA_ARGS__, REP2, REP1)(__VA_ARGS__)
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

#define pb push_back
#define YESNO(bool) if(bool){cout<<"YES"<<"\n";}else{cout<<"NO"<<"\n";}
#define yesno(bool) if(bool){cout<<"yes"<<"\n";}else{cout<<"no"<<"\n";}
#define YesNo(bool) if(bool){cout<<"Yes"<<"\n";}else{cout<<"No"<<"\n";}

template <typename T> inline void print(const vector<T>& v, string s = " "){rep(i, v.size()) cout << v[i] << (i != (ll)v.size() - 1 ? s : "\n");}
template <typename T, typename S> inline void print(const pair<T, S>& p){cout << p.first << " " << p.second << "\n";}
template <typename T> inline void print(const T& x) {cout << x << "\n";}
template <typename T, typename S> inline void print(const vector<pair<T, S>>& v){for (auto&& p : v) print(p);}

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main()
{
    int H, W, Q;
    cin >> H >> W >> Q;

    dsu d(H*W);
    vi ans;
    vi dh{1,0,-1,0}, dw{0,1,0,-1};
    vvi f(H, vi(W));

    rep(i, Q) {
        int t;
        cin >> t;
        if (t == 1) {
            int ph, pw;
            cin >> ph >> pw;
            ph--; pw--;
            f[ph][pw] = 1;
            rep(j, 4) {
                int sh = ph + dh[j];
                int sw = pw + dw[j];
                if (sh < 0 or sh >= H or sw < 0 or sw >= W) continue;
                if (f[sh][sw] == 0) continue;
                d.merge(W*sh+sw, W*ph+pw);
            }
        } else {
            int ra, ca, rb, cb;
            cin >> ra >> ca >> rb >> cb;
            ra--; ca--; rb--; cb--;
            if(f[ra][ca] == 0 or f[rb][cb] == 0){
                ans.pb(0);
            } else {
                if (d.same(W*ra+ca, W*rb+cb)) {
                    ans.pb(1);
                } else {
                    ans.pb(0);
                }
            }
        }
    }


    rep(i, ans.size()) {
        YesNo(ans[i]);
    }

    return 0;
}