/**
  *  programmer:  Zama
*    created: 04.10.2023 10:07:22
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

int N, M;
vi A, B;

bool is_ok(int mid) {
    int seller, buyer;
    seller = upper_bound(all(A), mid) - A.begin();
    buyer = M - (lower_bound(all(B), mid) - B.begin());
    return seller >= buyer;
}

int main()
{
    cin >> N >> M;
    A.resize(N);
    B.resize(M);
    for (auto& x: A) cin >> x;
    for (auto& x: B) cin >> x;
    sort(all(A));
    sort(all(B));

    int ok = 1000000001;
    int ng = 0;

    while (ok - ng > 1) {
        int mid = (ok + ng) / 2;
        if (is_ok(mid)) {
            ok = mid;
        } else {
            ng = mid;
        }
    }

    cout << ok << endl;

    return 0;
}