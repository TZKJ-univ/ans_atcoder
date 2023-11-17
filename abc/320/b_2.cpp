/**
  *  programmer:  Zama
*    created: 10.10.2023 21:28:03
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

bool is_kaibun(string s) {
    int idx1 = 0;
    int idx2 = s.size()-1;
    while(idx1<idx2) {
        if (s[idx1] != s[idx2]) return 0;
        idx1++;
        idx2--;
    }
    return 1;
}

int main()
{
    string s;
    cin >> s;
    int ans = 0;
    rep(i, s.size()) {
        rep(j, s.size()-i+1) {
            if (is_kaibun(s.substr(i, j))) {
                ans = max(ans, int(j));
            }
        }
    }
    cout << ans;
    return 0;
}