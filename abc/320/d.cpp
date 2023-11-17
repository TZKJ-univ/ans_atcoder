/**
  *  programmer:  Zama
*    created: 24.10.2023 20:05:16
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
    ll N, M;
    cin >> N >> M;
    vll A(M), B(M), X(M), Y(M);
    rep(i, M) {
        cin >> A[i] >> B[i] >> X[i] >> Y[i];
        A[i]--; B[i]--;
    }

    vector<vector<tuple<ll, ll, ll>>> G(N);
    rep(i, M) {
        G[A[i]].push_back({B[i], X[i], Y[i]});
        G[B[i]].push_back({A[i], -X[i], -Y[i]});
    }

    queue<ll> que;
    vll seen(N);

    vector<pair<ll, ll>> ans(N);
    que.push(0);

    ans[0] = {0, 0};

    while (!que.empty()) {
        ll v = que.front();
        que.pop();
        seen[v] = 1;
        ll vx = ans[v].first;
        ll vy = ans[v].second;

        for(auto& [nv, nvx, nvy] : G[v]) {
            if (seen[nv]) continue;
            ans[nv] = {vx + nvx, vy + nvy};
            que.push(nv);
        }
    }

    rep(i, N) {
        if (seen[i]) {
            cout << ans[i].first << ' ' << ans[i].second << endl;
        } else {
            cout << "undecidable" << endl;
        }
    }

    return 0;
}