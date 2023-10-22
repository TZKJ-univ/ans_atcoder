/**
  *  programmer:  Zama
*    created: 14.10.2023 20:54:21
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


// s1 < s2
bool is_ok(string s1, string s2) {
    if ((s2.size() - s1.size()) != 1) return 0;
    bool f = 1; // まだ使ってない=1

    rep(i, s1.size()) {
        // cout << s1[i] << ' ' << s2[i] << endl;
        if (s1[i] != s2[i]) {
            if ((f == 1) and (s1[i] == s2[i+1])) {
                f = 0;
                s2.erase(i, 1);
                // cout << s2 << endl;
            } else {
                return 0;
            }
        }
    }

    return 1;
}

bool is_ok2(string s1, string s2) {
    if ((s2.size() - s1.size()) != 0) return 0;
    int fl = 2;

    rep(i, s1.size()) {
        if (s1[i] != s2[i]) {
            fl--;
        }
        if (fl == 0) return 0;
    }

    return 1;

}

int main()
{
    int N;
    string T;

    cin >> N >> T;
    vs S(N);
    rep(i, N) cin >> S[i];

    vi ans;

    rep(i, N) {
        bool flg = 0;
        if ( ((int(S[i].size()) - int(T.size())) != 1) and ( (int(T.size()) - int(S[i].size())) != 1 ) and (int(S[i].size()) != int(T.size()))) continue;

        if (S[i] == T) {
            flg = 1;
        } else if (is_ok(T, S[i])) {
            flg = 1;
        } else if (is_ok(S[i], T)) {
            flg = 1;
        } else if (is_ok2(S[i], T)) {
            flg = 1;
        }
        if (flg) ans.push_back(i+1);
    }

    cout << ans.size() << endl;
    rep(i, ans.size()) {
        cout << ans[i] << ' ';
    }
    cout << endl;

    return 0;
}