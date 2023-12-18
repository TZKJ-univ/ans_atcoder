/**
 * author: Zama
 * created: 10.12.2023 18:33:17
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
    vvi P(H, vi(W));

    rep(i, H) {
        rep(j, W) {
            cin >> P[i][j];
        }
    }

    int ans = 0;
    for (int bit = 1; bit < (1<<H); ++bit) {
        map<int, int> mp;
        rep(i, W) {
            int obj = -1;
            int is_ok = 1;
            rep(j, H) {
                if ((1 << j) & bit) {
                    if (obj == -1) {
                        obj = P[j][i];
                    } else {
                        if (obj != P[j][i]) is_ok = 0;
                    }
                }
            }
            if (is_ok) mp[obj]++;
        }
        int mx = -1;
        for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
            chmax(mx, itr->second);
        }
        int cnt_H = 0;
        rep(i, H) {
            if ((1 << i) & bit) cnt_H++;
        }
        chmax(ans, mx*cnt_H);
    }

    print(ans);

    return 0;

}