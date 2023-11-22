/**
 * author: Zama
 * created: 19.11.2023 00:42:15
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

vvi G;
vi seen;

void dfs(int v) {
    // print(G[v]);
    for (auto& nv : G[v]) {
        if (seen[nv] != -1) continue;
        seen[nv] = !seen[v];
        dfs(nv);
    }
}

void dfs2(int v) {
    // print(G[v]);
    for (auto& nv : G[v]) {
        if (seen[nv] != -1) continue;
        seen[nv] = seen[v] + 1;
        dfs2(nv);
    }
}

int main()
{
    int N;
    cin >> N;

    vi A(N-1), B(N-1);

    G.resize(N);

    rep(i, N-1) {
        cin >> A[i] >> B[i];
        A[i]--; B[i]--;
        G[A[i]].pb(B[i]);
        G[B[i]].pb(A[i]);
    }
    // 1
    seen.assign(N, -1);
    seen[0] = 0;
    dfs2(0);

    int st = max_element(all(seen)) - seen.begin();

    // 2
    seen.assign(N, -1);
    seen[st] = 1;
    dfs(st);

    int cnt = 0;
    rep(i, N) {
        if (seen[i] == 1) {
            cout << i+1 << ' ';
            cnt++;
        }
        if (cnt == N / 2) break;
    }
    cout << endl;

    return 0;
}