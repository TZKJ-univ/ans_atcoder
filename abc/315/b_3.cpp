/**
  *  programmer:  Zama
*    created: 22.09.2023 11:07:46
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

    vi F(N), S(N);
    rep(i, N) {
        cin >> F[i] >> S[i];
    }

    int max_index = max_element(all(S)) - S.begin();

    int max_v = -1;
    rep(i, N) {
        if (i == max_index) continue;
        int result;
        if (F[i] == F[max_index]) {
            result = S[max_index] + S[i] / 2;
        } else {
            result = S[max_index] + S[i];
        }
        max_v = max(max_v, result);
    }
    cout << max_v << endl;

    return 0;
}