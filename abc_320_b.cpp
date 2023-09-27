/**
  *  programmer:  Zama
*    created: 16.09.2023 20:57:44
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

bool is_kaibun(string str) {
    int low = 0;
    int high = str.length() - 1;

    while (low < high) {
        if (str[low] != str[high]) {
            return false;
        }
        low++;
        high--;
    }
    return true;
}

int main()
{
    string S;
    cin >> S;

    int max_v = 1;
    rep(i, S.size()) {
        rep(j, i, S.size()) {
            if (j - i + 1 == 1) continue;
            if (is_kaibun(S.substr(i, j - i + 1))) {
                max_v = max(max_v, int(j - i + 1));
            }
        }
    }
    cout << max_v << endl;

    return 0;
}