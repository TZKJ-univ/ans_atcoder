/**
  *  programmer:  Zama
*    created: 15.10.2023 23:58:01
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
    ll N;
    cin >> N;
    vll S(N), C(N);
    rep(i, N) cin >> S[i] >> C[i];

    map<ll, ll> mp;
    set<ll> st;
    rep(i, N) {
        while ((S[i] & 1) == 0) {
            S[i] >>= 1;
            C[i] <<= 1;
        }
        // cout << "!! " << S[i] << ' ' << C[i] << endl;
        st.insert(S[i]);
        mp[S[i]] += C[i];
    }

    ll ans = 0;
    for(auto ite = st.begin(); ite != st.end(); ite++) {
        // cout << "!! " << i << ' ' << mp[i] << endl;
        ll count_1 = 0;
        while (mp[*ite] != 0) {
            if (mp[*ite] & 1) count_1++;
            mp[*ite] >>= 1;
        }
        ans += count_1;
    }

    cout << ans << endl;

    return 0; 
}