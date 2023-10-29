/**
  *  programmer:  Zama
*    created: 28.10.2023 20:33:15
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
    int N;
    cin >> N;
    string S;
    cin >> S;

    string T = "atcoder";
    int T_size = (int)T.size();

    vvll dp(N+1, vll(T_size+1));
    // i=0 まだどの文字も検査していない
    // i=1 1文字目
    // i=2 2文字目
    // ...

    // j=0 なんの文字もとっていない
    // j=1 "a"をとっている
    // j=2 "at"をとっている
    // j=3 "atc"をとっている
    // ...

    ll mod = 1000000007;

    dp[0][0] = 1;

    rep(i, N) {
        rep(j, T_size+1) {
            // 選ばない場合
            dp[i+1][j] += dp[i][j];
            dp[i+1][j] %= mod;

            // 選ぶ場合
            // j=T_sizeのときは"atcoder"が完成しているからもう何も選ばない
            if (S[i] == T[j] and j < T_size) {
                // i+1文字目（次の文字）のj+1（今のステップの文字）の選び方に
                // i文字目（今の文字）のj（前のステップの文字）の選び方を足す
                dp[i+1][j+1] += dp[i][j];
                dp[i+1][j+1] %= mod;
            }
        }
    }

    cout << dp[N][T_size] << endl;

    return 0;
}