/**
  *  programmer:  Zama
*    created: 12.10.2023 20:47:04
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
    int K;
    cin >> K;

    vll num(10);
    vll li;
    iota(all(num), 0);
    for (ll bit = 2; bit<(1<<10); bit++) {
        ll tmp = 0;
        int j = 0;
        for (ll i = 0; i < 10; i++) {
            if (bit&(1<<i)) {
                tmp += num[i] * pow(10, j);
                j++;
            }
        }
        li.push_back(tmp);
    }
    sort(all(li));

    cout << li[K-1] << endl;

    return 0;
}