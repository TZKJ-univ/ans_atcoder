/**
 * author: Zama
 * created: 23.12.2023 15:50:51
 **/

#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#  include <debug_print.hpp>
#  define debug(...) debug_print::multi_print(#__VA_ARGS__, __VA_ARGS__)
#else
#  define debug(...) (static_cast<void>(0))
#endif

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
    int N, Q;
    cin >> N >> Q;
    vll A(N);
    rep(i, N) cin >> A[i];

    vll L(Q), R(Q), V(Q);

    rep(i, Q) {
        cin >> L[i] >> R[i] >> V[i];
        L[i]--;
        R[i]--;
    }

    vll dif(N-1);
    ll inc = 0;
    rep(i, N-1) {
        dif[i] = A[i+1]-A[i];
        inc += (ll)abs(A[i+1]-A[i]);
    }
    rep(i, Q) {
        ll mae = 0, ato = 0;
        if (L[i] != 0) {
            mae += (ll)abs(dif[L[i]-1]);
        }
        if (R[i] != N-1) {
            mae += (ll)abs(dif[R[i]]);
        }

        if (L[i] != 0) {
            dif[L[i]-1] = dif[L[i]-1] + V[i];
        }
        if (R[i] != N-1) {
            dif[R[i]] = dif[R[i]] - V[i];
        }

        if (L[i] != 0) {
            ato += (ll)abs(dif[L[i]-1]);
        }
        if (R[i] != N-1) {
            ato += (ll)abs(dif[R[i]]);
        }
        inc += (ll)(ato - mae);
        print(inc);
    }



    return 0;
}