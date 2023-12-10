/**
 * author: Zama
 * created: 09.12.2023 20:57:15
 **/

#include <bits/stdc++.h>

using namespace std;

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

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

#define OVERLOAD_REP(_1, _2, _3, name, ...) name
#define REP1(i, n) for (auto i = std::decay_t<decltype(n)>{}; (i) != (n); ++(i))
#define REP2(i, l, r) for (auto i = (l); (i) != (r); ++(i))
#define rep(...) OVERLOAD_REP(__VA_ARGS__, REP2, REP1)(__VA_ARGS__)
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

#define pb push_back
#define YESNO(bool) if(bool){cout<<"YES"<<"\n";}else{cout<<"NO"<<"\n";}
#define yesno(bool) if(bool){cout<<"yes"<<"\n";}else{cout<<"no"<<"\n";}
#define YesNo(bool) if(bool){cout<<"Yes"<<"\n";}else{cout<<"No"<<"\n";}

template <typename T> inline void print(const vector<T>& v, string s = " "){rep(i, v.size()) cout << v[i] << (i != (ll)v.size() - 1 ? s : "\n");}
template <typename T, typename S> inline void print(const pair<T, S>& p){cout << p.first << " " << p.second << "\n";}
template <typename T> inline void print(const T& x) {cout << x << "\n";}
template <typename T, typename S> inline void print(const vector<pair<T, S>>& v){for (auto&& p : v) print(p);}

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main()
{
    ll N;
    cin >> N;
    vll A(N);
    rep(i, N) cin >> A[i];
    vll P(N-1);

    vvi G(250001);
    rep(i, N-1) {
        cin >> P[i];
        P[i]--;
        G[P[i]].pb(i+1);
    }

    // rep(i, 5) {
    //     cout << i << ' ' <<endl;
    //     print(G[i]);
    // }

    queue<ll> que;
    que.push(0);

    ll ans = 0;
    vi dist(250001, -1);
    dist[0] = 0;
    vector<ll> mp(250001, 0LL);
    vi flg(250001);
    while (!(que.empty())) {
        ll x = que.front();
        que.pop();
        for (auto nx : G[x]) {
            dist[nx] = dist[x]+1;
            que.push(nx);
            mp[dist[nx]] += A[nx];
            flg[dist[nx]] = 1;
        }
    }
    // rep(i, 5) print(mp[i]);

    for (int i = 250001; i > 0; --i) {
        if (flg[i] == 0) continue;
        else if (mp[i] == 0) continue;
        else{
            ans = mp[i];
            break;
        }
    }

    if (ans > 0) {
        print('+');
    } else if (ans < 0) {
        print('-');
    } else if (A[0] > 0){
        print('+');
    } else if (A[0] < 0){
        print('-');
    } else {
        print('0');
    }

    return 0;
}