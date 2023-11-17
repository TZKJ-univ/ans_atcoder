/**
*  programmer: Zama
*  created: 01.11.2023 20:27:04
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

int main()
{
    int n;
    cin >> n;
    vi a(n-1), b(n-1);
    rep(i, n-1) cin >> a[i] >> b[i];

    vvi g(n, vi());

    rep(i, n-1) {
        a[i]--;
        b[i]--;
        g[a[i]].push_back(b[i]);
        g[b[i]].push_back(a[i]);
    }

    vi dist(n, -1);

    queue<int> que;
    que.push(0);
    dist[0] = 0;

    while (!que.empty()) {
        int v = que.front();
        que.pop();
        for (auto nv : g[v]) {
            if (dist[nv] != -1) continue;
            dist[nv] = dist[v] + 1;
            que.push(nv);
        }
    }
    int v_max = max_element(all(dist)) - dist.begin();
    // rep(i, n) cout << dist[i] << ' ';
    // cout << endl;
    dist.assign(n, -1);

    queue<int> que2;
    que2.push(v_max);
    dist[v_max] = 0;
    while (!que2.empty()) {
        int v = que2.front();
        que2.pop();
        for (auto nv : g[v]) {
            if (dist[nv] != -1) continue;
            dist[nv] = dist[v] + 1;
            que2.push(nv);
        }
    }
    cout << *max_element(all(dist)) + 1 << endl;




    return 0;
}