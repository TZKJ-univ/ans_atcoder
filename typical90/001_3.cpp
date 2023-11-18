/**
*  programmer: Zama
*  created: 30.10.2023 13:48:28
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

int N, L, K;
vi A;

// 長さを指定の長さmid以上にできるか
bool is_ok(int mid) {
    int cnt = 0;
    int pre = 0;
    rep(i, N) {
        if (A[i] - pre >= mid and L - A[i] >= mid) {
            cnt++;
            pre = A[i];
        }
    }
    return cnt >= K;
}

int main()
{
    cin >> N >> L >> K;
    A.resize(N);
    rep(i, N) cin >> A[i];

    int ng = 1000000001, ok = 0;

    while (ng - ok > 1) {
        int mid = (ng + ok) / 2;
        if (is_ok(mid)) ok = mid;
        else ng = mid;
    }

    cout << ok << endl;


    return 0;
}