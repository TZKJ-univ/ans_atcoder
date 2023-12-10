/**
*  programmer: Zama
*  created: 07.11.2023 19:04:15
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
    int N;
    cin >> N;
    vi C(N), P(N);
    rep(i, N) cin >> C[i] >> P[i];
    int Q;
    cin >> Q;
    vi L(Q), R(Q);
    rep(i, Q) cin >> L[i] >> R[i];

    vi cum_1(N+1), cum_2(N+1);
    cum_1[0] = cum_2[0] = 0;
    rep(i, N) {
        if (C[i] == 1) {
            cum_1[i+1] = cum_1[i] + P[i];
            cum_2[i+1] = cum_2[i];
        } else {
            cum_1[i+1] = cum_1[i];
            cum_2[i+1] = cum_2[i] + P[i];
        }
    }

    rep(i, Q) {
        cout << cum_1[R[i]] - cum_1[L[i]-1] << ' ' << cum_2[R[i]] - cum_2[L[i]-1] << endl;
    }

    return 0;
}