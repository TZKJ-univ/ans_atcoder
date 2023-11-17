/**
  *  programmer:  Zama
*    created: 20.10.2023 00:25:13
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
    int M;
    cin >> M;
    vs S(3);
    cin >> S[0] >> S[1] >> S[2];

    S[0] = S[0] + S[0] + S[0];
    S[1] = S[1] + S[1] + S[1];
    S[2] = S[2] + S[2] + S[2];

    int mintime = 10000;
    rep(i, 3*M) {
        rep(j, 3*M) {
            if (i == j) continue;
            if (S[0][i] == S[1][j]) {
                rep(k, 3*M) {
                    if (i == k or j == k) continue;
                    if (S[1][j] == S[2][k]) {
                        int time = max(i, max(j, k));
                        mintime = min(mintime, time);
                        // break;
                    }
                }
                // break;
            }
        }
    }

    cout << (mintime==10000 ? -1 : mintime) << endl;
    return 0;
}