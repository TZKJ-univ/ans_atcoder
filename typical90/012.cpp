/**
 * author: Zama
 * created: 07.11.2023 21:21:50
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
    int H, W, Q;
    cin >> H >> W >> Q;
    int q;
    dsu d(H * W);
    vvi painted(H, vi(W, 0));
    vs ans;
    rep(i, Q) {
        cin >> q;
        if (q == 1) {
            int px, py;
            cin >> px >> py;
            px--; py--;
            int dx[] = {1, 0, -1, 0};
            int dy[] = {0, 1, 0, -1};
            painted[px][py] = 1;
            rep(i, 4) {
                int sx = px + dx[i];
                int sy = py + dy[i];
                if (sx < 0 or sx >= H or sy < 0 or sy >= W) continue;
                if (!painted[sx][sy]) continue;
                d.merge(px*W+py, sx*W+sy);
            }
        } else if (q == 2) {
            int px, py, sx, sy;
            cin >> px >> py >> sx >> sy;
            px--; py--; sx--; sy--;
            if (!painted[px][py] or !painted[sx][sy]) ans.pb("No");
            else {
                if (d.same(px*W+py, sx*W+sy)) ans.pb("Yes");
                else ans.pb("No");
            }
        }
    }

    print(ans, "\n");

    return 0;
}