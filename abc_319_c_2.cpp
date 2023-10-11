/**
  *  programmer:  Zama
*    created: 10.10.2023 20:12:39
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

int main()
{
    vector<tuple<int, int, int>> row{{0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6}};
    vi ceil(9);

    rep(i, 9) {
        cin >> ceil[i];
    }
    vi ord(9);
    iota(all(ord), 0);

    int all = 0;
    int ok = 0;
    do {
        all++;
        bool flg = 0;
        for (auto& [a,b,c] : row) {
            if (ceil[a] == ceil[b] and ord[a] < ord[c] and ord[b] < ord[c]) flg = 1;
            if (ceil[c] == ceil[b] and ord[c] < ord[a] and ord[b] < ord[a]) flg = 1;
            if (ceil[a] == ceil[c] and ord[a] < ord[b] and ord[c] < ord[b]) flg = 1;
        }
        if (!flg) ok++;
    } while (next_permutation(all(ord)));

    cout << setprecision(10);
    cout << (double(ok) / all) << endl;

    return 0;
}