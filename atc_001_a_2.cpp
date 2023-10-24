/**
  *  programmer:  Zama
*    created: 23.10.2023 13:41:07
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

int H, W;
vs c;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};
vvi seen;

void dfs(int x, int y) {
    rep(i, 4) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 0 or nx >= H or ny < 0 or ny >= W) continue;
        if (c[nx][ny] == '#') continue;
        if (seen[nx][ny]) continue;
        if (c[nx][ny] == 'g') {
            cout << "Yes" << endl;
            exit(0);
        }
        seen[nx][ny] = 1;
        dfs(nx, ny);
    }
}


int main()
{
    cin >> H >> W;
    c.resize(H);
    rep(i, H) cin >> c[i];
    seen.resize(H, vi(W));

    int sh, sw, gh, gw;
    rep(i, H) {
        rep(j, W) {
            if (c[i][j] == 's') {
                sh = i; sw = j;
            }
            if (c[i][j] == 'g') {
                gh = i; gw = j;
            }
        }
    }
    dfs(sh, sw);

    cout << "No" << endl;

    return 0;
}