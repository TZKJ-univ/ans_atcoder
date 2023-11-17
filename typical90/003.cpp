/**
  *  programmer:  Zama
*    created: 14.10.2023 19:28:03
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

vi dist;

void dfs(vvi& G, int v) {
    for (auto& nv : G[v]) {
        if (dist[nv] != -1) continue;
        dist[nv] = dist[v] + 1;
        dfs(G, nv);
    }
}
vi dist2;
void dfs2(vvi& G, int v) {
    for (auto& nv : G[v]) {
        if (dist2[nv] != -1) continue;
        dist2[nv] = dist2[v] + 1;
        dfs2(G, nv);
    }
}
int main()
{
    int N;
    cin >> N;
    vi A(N-1), B(N-1);
    vvi G(N);
    rep(i, N-1) {
        cin >> A[i] >> B[i];
        A[i]--; B[i]--;
        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    }

    dist.resize(N, -1);
    dist2.resize(N, -1);

    dist[0] = 0;
    dfs(G, 0);

    int u = max_element(all(dist)) - dist.begin();
    dist2[u] = 0;
    dfs2(G, u);
    cout << *max_element(all(dist2)) + 1 << endl;

    // cout << "=========\n";
    // rep(i, N) cout << dist[i] << ' ';
    // cout << endl;
    // rep(i, N) cout << dist2[i] << ' ';

    return 0;
}