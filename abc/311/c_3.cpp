/**
  *  programmer:  Zama
*    created: 19.09.2023 17:03:22
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
    vi A(N);
    for(auto& a: A) {
        cin >> a;
        a--;
    }

    vi flow;
    vi seen(N);
    int target = 0;
    while(seen[target] == 0) {
        seen[target] = 1;
        flow.push_back(target);
        target = A[target];
    }

    int flag = 0;
    int idx = 0;
    for (auto& s: flow) {
        if (s == target) {
            cout << flow.size() - idx << endl;
            cout << s+1 << " ";
            flag = 1;
            continue;
        }
        if (flag) cout << s+1 << " " ;
        idx++;
    }
    cout << endl;
    return 0;
}