/**
  *  programmer:  Zama
*    created: 23.10.2023 14:47:31
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
    ll N, M, P;
    cin >> N >> M >> P;
    vll A(N), B(M);
    rep(i, N) cin >> A[i];
    rep(i, M) cin >> B[i];
    sort(all(B));
    vll B_cum(M+1);
    rep(i, M) {
        B_cum[i+1] = B_cum[i] + B[i];
    }

    ll sum = 0;
    rep(i, N) {
        int bd = lower_bound(all(B), P - A[i]) - B.begin();
        sum += ll(bd)*A[i];
        sum += B_cum[bd];
        sum += ll(P) * (M-bd);
    }

    cout << sum << endl;


    return 0;
}