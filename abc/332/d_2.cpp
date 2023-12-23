/**
 * author: Zama
 * created: 20.12.2023 20:34:44
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

    vvi A(H, vi(W));
    vvi B(H, vi(W));
    rep(i, H) rep(j, W) cin >> A[i][j];
    rep(i, H) rep(j, W) cin >> B[i][j];

    vi H_idx(H);
    vi W_idx(W);
    iota(all(H_idx), 0);
    iota(all(W_idx), 0);
    int mv = 100000000;
    int ans = mv;
    do {
        do {
            int f = 1;
            rep(i, H) {
                rep (j, W) {
                if (A[H_idx[i]][W_idx[j]] != B[i][j]) f = 0;
                }
            }
            if (f == 0) continue;
            int rotate_H = 0;
            int rotate_W = 0;
            rep(i, H) {
                rep (j, H) {
                    if (i < j and H_idx[i] > H_idx[j]) rotate_H++;
                }
            }
            rep(i, W) {
                rep (j, W) {
                    if (i < j and W_idx[i] > W_idx[j]) rotate_W++;
                }
            }
            // debug(H_idx, W_idx);
            // debug(rotate_H, rotate_W);

            chmin(ans, rotate_H+rotate_W);
        } while (next_permutation(all(W_idx)));
    } while (next_permutation(all(H_idx)));

    if (ans == mv) {
        print(-1);
    } else {
        print(ans);
    }

    return 0;
}