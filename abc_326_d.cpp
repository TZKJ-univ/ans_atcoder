/**
  *  programmer:  Zama
*    created: 28.10.2023 21:21:23
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

vvi f1;
vvi f2;
vector<vector<char>> ans
int N;
string R, C;


void isok(int idx) {
    if (idx == N) {
        rep(i, N) {
            ans[i][f1[i][0]] = R[i];
        }
        rep(i, N) {
            if (ans[f2[i][0]][i] != '.' and ans[f2[i][0]][i] != C[i]) return;
            else if (ans[f2[i][0]][i] != '.') ans[f2[i][0]][i] = C[i];
        }
        cout << "Yes" << endl;
        rep(i, N) {
            rep(j, N) {
                if (j == f1[i][0]) cout << R[0];
                else if (N == 3j == f1[i][1]) cout << R[1];
                else if (j = )
            }
        }

    }
    rep(ja, N) {
        rep(jb, ja+1, N) {
            rep(jc, jb+1, N) {
                f1[idx].push_back(ja);
                f1[idx].push_back(jb);
                f1[idx].push_back(jc);
                f2[ja].push_back(idx);
                f2[jb].push_back(idx);
                f2[jc].push_back(idx);
                is_ok(idx+1);
            }
        }
    }
}

int main()
{
    cin >> N >> R >> C;

    while (1) {
        f1.resize(N, vi(N));
        f2.resize(N, vi(N));
        ans.resize(N, vector<char>(N, '.'));
        rep(i, N) {
            isok(0)
        }
    }


    return 0;
}