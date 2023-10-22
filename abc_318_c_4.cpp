/**
  *  programmer:  Zama
*    created: 15.10.2023 00:31:49
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
    ll N, D, P;
    cin >> N >> D >> P;
    vll F(N);
    for (auto& f : F) cin >> f;
    F.resize(N+D-(N%D));
    sort(all(F));
    // for (auto& f:F) cout << f << endl;

    vll F_cum(int(F.size()));
    F_cum[0] = F[0];
    rep(i, 1, int(F.size())) {
        F_cum[i] = F_cum[i-1] + F[i];
    }

    ll min_prc = P * int(F.size()) / D;
    rep(i, F.size() / D) {
        ll prc = 0;
        prc += i * P;
        prc += F_cum[int(F.size()) - 1 - i*D];
        // cout << "prc:" << prc << endl;
        min_prc = min(min_prc, prc);
    }

    cout << min_prc << endl;

    return 0;
}