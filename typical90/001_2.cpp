/**
  *  programmer:  Zama
*    created: 22.10.2023 20:34:19
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

vi A;
int N, L, K;

// mid以上の大きさに分けたとき，それは要件を満たしているか（K個以上か）
bool is_ok(int mid) {
    int cnt = 0;
    int pre = 0;
    rep(i, A.size()) {
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

    int ok = -1;
    int ng = 1000000001;

    while (ng - ok > 1) {
        int mid = (ng + ok) / 2;
        if (is_ok(mid)) ok = mid;
        else ng = mid;
    }

    cout << ok << endl;

    return 0;
}