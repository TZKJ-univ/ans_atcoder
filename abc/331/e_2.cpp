/**
 * author: Zama
 * created: 12.12.2023 19:25:49
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
    int N, M, L;
    cin >> N >> M >> L;
    vi a(N), b(M);
    rep(i, N) cin >> a[i];
    rep(i, M) cin >> b[i];
    set<pair<int, int>> bad;
    rep(i, L) {
        int c, d;
        cin >> c >> d;
        bad.insert({c-1, d-1});
    }

    // {合計金額, aのインデックス}
    priority_queue<pair<int, int>> que;
    vi cur(N);
    vi b_sort_idx(M);
    iota(all(b_sort_idx), 0);
    sort(all(b_sort_idx), [&](int x, int y){ return b[x] > b[y]; });
    // debug(b_sort_idx);


    rep(i, N) {
        que.push({a[i]+b[b_sort_idx[0]], i});
    }

    int ans = 0;
    // debug(bad);
    // debug(que);
    while (1) {
        int ch = que.top().first;
        int idx = que.top().second;
        que.pop();
        if (bad.count({idx, b_sort_idx[cur[idx]]}) != 0) {
            cur[idx]++;
            que.push({a[idx]+b[b_sort_idx[cur[idx]]], idx});
        } else {
            ans = ch;
            break;
        }
    }

    print(ans);

    return 0;
}