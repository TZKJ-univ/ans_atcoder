/**
*  programmer: Zama
*  created: 04.11.2023 20:50:18
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
    int N, M;
    cin >> N >> M;

    vi A(M), B(M);
    rep(i, M) {
        cin >> A[i];
        A[i]--;
    }
    rep(i, M) {
        cin >> B[i];
        B[i]--;
    }

    vvi G(N);

    rep(i, M) {
        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    }

    vi X(N, -1);
    rep(i, N) {
        if (X[i] != -1) continue;
        X[i] = 0;
        queue<int> que;
        que.push(i);
        while (!que.empty()) {
            int v = que.front();
            que.pop();
            for (auto& nv : G[v]) {
                if (X[nv] != -1 and X[v] != -1 and X[nv] == X[v]) {
                    cout << "No" << endl;
                    return 0;
                }
                if (X[nv] != -1) continue;

                X[nv] = !X[v];
                que.push(nv);
            }
        }
    }

    YesNo(count(all(X), -1) == 0);



    return 0;
}