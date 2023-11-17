/**
  *  programmer:  Zama
*    created: 20.09.2023 10:40:15
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
    int N, M;
    cin >> N >> M;
    string S;
    cin >> S;
    vi C(N);
    for (auto& c: C) {
        cin >> c;
        c--;
    }


    vi next(M), first_index(M), flag(M);

    rep(i, N) {
        if (flag[C[i]] == 0) {
            flag[C[i]] = 1;
            first_index[C[i]] = i;
            next[C[i]] = S[i];
        } else if(flag[C[i]] == 1) {
            char tmp = S[i];
            S[i] = next[C[i]];
            next[C[i]] = tmp;
        }
    }

    rep(i, M) {
        S[first_index[i]] = next[i];
    }

    cout << S << endl;


    return 0;
}