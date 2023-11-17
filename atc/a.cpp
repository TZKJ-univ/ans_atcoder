/**
  *  programmer:  Zama
*    created: 13.10.2023 17:24:24
**/

#include <bits/stdc++.h>
#include <atcoder/all>
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

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

vvi seen(501, vi(501, 0));
vs field;
int H, W;

void dfs(int h, int w) {
    seen[h][w] = 1;
    rep(i, 4) {
        int nh = h + dx[i];
        int nw = w + dy[i];

        if (nh < 0 or nh >= H or nw < 0 or nw >= W) continue;
        if (field[nh][nw] == '#') continue;
        if (seen[nh][nw] == 1) continue;

        dfs(nh, nw);
    }
}

int main()
{
    cin >> H >> W;

    field.resize(H);
    rep(i, H) {
        cin >> field[i];
    }

    int sh, sw, gh, gw;
    rep(i, H) {
        rep (j, W) {
            if (field[i][j] == 's') {
                sh = i;
                sw = j;
            }
            if (field[i][j] == 'g') {
                gh = i;
                gw = j;
            }
        }
    }

    dfs(sh, sw);

    if (seen[gh][gw] == 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}