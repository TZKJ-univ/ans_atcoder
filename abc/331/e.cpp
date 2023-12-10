/**
 * author: Zama
 * created: 05.12.2023 13:55:54
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
    int N, M, L;
    cin >> N >> M >> L;
    vi a(N), b(M);
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < M; ++i) {
        cin >> b[i];
    }
    vector<int> c(L), d(L);
    set<pair<int, int>> ng_set;
    for (int i = 0; i < L; ++i) {
        cin >> c[i] >> d[i];
        c[i]--; d[i]--;
        ng_set.insert({c[i], d[i]});
    }

    vi ord_b(M);
    iota(all(ord_b), 0);
    sort(all(ord_b), [&](int x, int y){return b[x] > b[y];});

    // 合計金額とaのインデックスのペア
    priority_queue<pair<int, int>> que;
    vi cur(N);

    rep(i, N) {
        que.push({a[i]+b[ord_b[cur[i]]], i});
    }
    while (true) {
        auto [cost, i] = que.top();
        int j = cur[i];
        que.pop();
        if (ng_set.count({i, ord_b[j]}) == 0) {
            cout << cost << endl;
            break;
        }
        cur[i]++;
        if (cur[i] != M) {
            que.push({a[i]+b[ord_b[cur[i]]], i});
        }
    }

    return 0;
}