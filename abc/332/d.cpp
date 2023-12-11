/**
 * author: Zama
 * created: 10.12.2023 20:53:28
 **/

#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#  include <debug_print.hpp>
#  define debug(...) debug_print::multi_print(#__VA_ARGS__, __VA_ARGS__)
#else
#  define debug(...) (static_cast<void>(0))
#endif

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
    int H, W;
    cin >> H >> W;

    vvi A(H, vi(W)), B(H, vi(W));

    rep(i, H) {
        rep(j, W) {
            cin >> A[i][j];
        }
    }
    rep(i, H) {
        rep(j, W) {
            cin >> B[i][j];
        }
    }

    vi H_ord(H), W_ord(W);
    iota(all(H_ord), 0);
    iota(all(W_ord), 0);

    ll inf = 10000000000;
    ll ans = inf;
    do {
        do {
            int flg = 1;
            rep(i, H) {
                rep(j, W) {
                    if (A[H_ord[i]][W_ord[j]] != B[i][j]) flg = 0;
                }
            }
            if (!flg) continue;

            ll cnt = 0;

            rep(i, H) {
                rep(j, H) {
                    if (i < j and H_ord[i] > H_ord[j]) cnt++;
                }
            }
            rep(i, W) {
                rep(j, W) {
                    if (i < j and W_ord[i] > W_ord[j]) cnt++;
                }
            }
            chmin(ans, cnt);
        } while (next_permutation(all(W_ord)));
    } while (next_permutation(all(H_ord)));

    if (ans == inf) print(-1);
    else print(ans);

    return 0;
}