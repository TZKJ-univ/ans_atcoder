/**
  *  programmer:  Zama
*    created: 08.09.2023 13:45:56
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
    vi A(N+1);
    rep(i, 1, N+1) cin >> A[i];

    vi seen(N+1, 0);
    int v = 1;
    vi flow;
    while (seen[v] == 0) {
        seen[v] = 1;
        flow.push_back(v);
        v = A[v];
    }

    bool flag = 0;
    vi ans;
    for (auto& f: flow) {
        if (f == v) flag = 1;
        if (flag) ans.push_back(f);
    }
    cout << ans.size() << endl;
    for (auto& i: ans) {
        cout << i << ' ';
    }
    cout << endl;

    return 0;
}