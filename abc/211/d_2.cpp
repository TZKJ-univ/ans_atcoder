/**
  *  programmer:  Zama
*    created: 21.10.2023 20:07:59
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

int main()
{
    int N, M;
    cin >> N >> M;
    vi A(M), B(M);
    rep(i, M) {
        cin >> A[i] >> B[i];
        A[i]--; B[i]--;
    }
    vvi g(N);

    rep(i, M) {
        g[A[i]].push_back(B[i]);
        g[B[i]].push_back(A[i]);
    }

    vi dist(N, -1);
    vll cnt(N); // 最短経路の数

    queue<int> que;
    que.push(0);
    cnt[0] = 1;

    while (!que.empty()) {
        int v = que.front();
        que.pop();
        for(auto& nv : g[v]) {
            if (dist[nv] == -1) {
                dist[nv] = dist[v] + 1;
                cnt[nv] = cnt[v];
                que.push(nv);
            } else if (dist[nv] == dist[v] + 1) {
                cnt[nv] += cnt[v];
                cnt[nv] %= 1000000007ll;
            }
        }
    }

    cout << cnt[N-1] << endl;
    return 0;
}