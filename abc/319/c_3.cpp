/**
  *  programmer:  Zama
*    created: 20.10.2023 00:01:24
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
    vi cs(9);
    rep(i, 9) cin >> cs[i];

    vi ord(9);
    iota(all(ord), 0);
    sort(all(ord));

    vector<tuple<int, int, int>> rows{{0,3,6}, {1,4,7}, {2,5,8}, {0,1,2}, {3,4,5}, {6,7,8}, {0,4,8}, {2,4,6}};

    int all = 0, cnt = 0;
    do {
        all++;
        bool f = 1;
        for(auto& [a,b,c] : rows) {
            if (cs[a] == cs[b] and ord[a] < ord[c] and ord[b] < ord[c] or
                cs[b] == cs[c] and ord[b] < ord[a] and ord[c] < ord[a] or
                cs[a] == cs[c] and ord[a] < ord[b] and ord[c] < ord[b]) {
                f = 0; break;
            }
        }
        if (f == 1) cnt++;

    } while (next_permutation(all(ord)));

    cout << setprecision(10);
    cout << double(cnt) / all << endl;

    return 0;
}