/**
  *  programmer:  Zama
*    created: 14.10.2023 19:00:40
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

void made_let(int num_l) {
    if (num_l == 0) {

    }
}

int main()
{
    int N;
    cin >> N;

    vs list;

    for (int bit = 0; bit < (1<<N); bit++) {
        int num = 0;
        int flg = 1;
        string s;
        rep(i, N) {
            if (bit&(1<<i)) {
                num += 1;
                s.push_back('(');
            } else {
                num -= 1;
                s.push_back(')');
            }
            if (num < 0) flg = 0;
        }
        if (flg == 0) continue;
        if (num != 0) continue;

        list.push_back(s);
    }


    sort(all(list));
    for(auto& li : list) cout << li << endl;

    return 0;
}