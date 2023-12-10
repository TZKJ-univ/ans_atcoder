/**
 * author: Zama
 * created: 02.12.2023 01:40:18
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
    int N;
    cin >> N;

    vvi A(N, vi(N));
    rep(i, N) {
        rep(j, N) {
            cin >> A[i][j];
        }
    }

    int M;
    cin >> M;
    vi X(M), Y(M);

    vvi G(N);
    rep(i, M) {
        cin >> X[i] >> Y[i];
        X[i]--; Y[i]--;
        G[X[i]].pb(Y[i]);
        G[Y[i]].pb(X[i]);
    }

    vi row(N);
    iota(all(row), 0);

    int ans;
    int isfind = 0;
    do {
        int f = 1;
        rep(i, N-1) {
            if (find(all(G[row[i]]), row[i+1]) != G[row[i]].end()) f = 0;
        }
        if (f == 0) continue;

        int time = 0;
        rep(i, N) {
            time += A[row[i]][i];
        }
        if (isfind == 0) {
            ans = time;
        } else {
            chmin(ans, time);
        }
        isfind = 1;

    } while (next_permutation(all(row)));

    if (isfind) {
        print(ans);
    } else {
        print(-1);
    }


    return 0;
}