/**
  *  programmer:  Zama
*    created: 02.09.2023 20:53:08
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
    vvi S(N, vi(4));

    for (auto& r: S) {
        for (auto& c: r) {
            cin >> c;
        }
    }

    int x_min = S[0][0], x_max = S[0][1], y_min = S[0][2], y_max = S[0][3];
    rep(i, 1, N) {
        x_min = min(S[i][0], x_min);
        x_max = max(S[i][1], x_max);
        y_min = min(S[i][2], y_min);
        y_max = max(S[i][3], y_max);
    }

    int count = 0;
    rep(i, x_min, x_max) {
        rep(j, y_min, y_max) {
            rep(k, 0, N) {
                if (i >= S[k][0] && i < S[k][1] && j >= S[k][2] && j < S[k][3]) {
                    count++;
                    break;
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}