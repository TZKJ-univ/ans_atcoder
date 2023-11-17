/**
  *  programmer:  Zama
*    created: 13.10.2023 14:39:18
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
    int n,m;
    cin >> n>>m;
    vi a(m);
    for(auto& i:a) cin >> i;
    vi f(n);
    for(auto& i:a) {
        f[i-1] =1;
    }

    vi ans(n);
    int num = 0;
    rep(i, n) {
        if (f[n-i-1] == 1){
            num = 0;
            ans[n-i-1] = 0;
        } else {
            num++;
            ans[n-i-1] =num;
        }
    }

    for(auto& i:ans) {
        cout << i << endl;
    }

    return 0;
}