/**
  *  programmer:  Zama
*    created: 06.10.2023 22:15:27
**/

#include <bits/stdc++.h>
using namespace std;

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

int main()
{
    int N, D;
    double P;
    cin >> N >> D >> P;
    vll F(N);
    for (auto& x:F) cin >> x;
    sort(all(F));
    vll F_cum(N);
    F_cum[0] = F[0];
    rep(i, 1, N) {
        F_cum[i] = F[i] + F_cum[i-1];
    }
    ll i = 0;
    ll mv = ceil(double(N) / D) * P;
    // cout << mv << endl;

    do {
        ll prc = F_cum[N-i-1] + i / D * P;
        i += D;
        // cout  << prc << " ";
        mv = min(mv, prc);
    } while (i < N);

    cout << mv << endl;

    return 0;
}