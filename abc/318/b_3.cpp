/**
  *  programmer:  Zama
*    created: 06.10.2023 21:55:50
**/

#include <bits/stdc++.h>
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
    int N;
    cin >> N;
    vvi sheet(N, vi(4));

    for (auto& x:sheet) cin >> x[0] >> x[1] >> x[2] >> x[3];
    vvi seen(101, vi(101, 0));

    rep(i, N) {
        rep(j, sheet[i][0], sheet[i][1]) {
            rep(k, sheet[i][2], sheet[i][3]) {
                seen[j][k] = 1;
            }
        }
    }

    int count = 0;
    rep(i, 101) {
        rep(j, 101) {
            if (seen[i][j]) count++;
        }
    }

    cout << count << endl;

    return 0;
}