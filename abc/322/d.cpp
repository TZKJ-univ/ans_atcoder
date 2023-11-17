/**
  *  programmer:  Zama
*    created: 30.09.2023 21:21:52
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
    vector<string> A(4), B(4), C(4);

    rep(i, 4) cin >> A[i];
    rep(i, 4) cin >> B[i];
    rep(i, 4) cin >> C[i];


    set<pair<int, int>> A_set, B_set, C_set;

    bool find_flag = 0;
    rep(i, 4) {
        rep(j, 4){
            int x, y;
            if (find_flag == 0 and A[i][j] == '#') {
                    x = i;
                    y = j;
                    A_set.insert(make_pair(0, 0));
                    find_flag = 1;
            }
            if (find_flag and A[i][j] == '#') {
                A_set.insert(make_pair(i - x, j - y));
            }
        }
    }

    find_flag = 0;
    rep(i, 4) {
        rep(j, 4){
            int x, y;
            if (find_flag == 0 and B[i][j] == '#') {
                    x = i;
                    y = j;
                    B_set.insert(make_pair(0, 0));
                    find_flag = 1;
            }
            if (find_flag and B[i][j] == '#') {
                B_set.insert(make_pair(i - x, j - y));
            }
        }
    }

    find_flag = 0;
    rep(i, 4) {
        rep(j, 4){
            int x, y;
            if (find_flag == 0 and C[i][j] == '#') {
                    x = i;
                    y = j;
                    C_set.insert(make_pair(0, 0));
                    find_flag = 1;
            }
            if (find_flag and C[i][j] == '#') {
                C_set.insert(make_pair(i - x, j - y));
            }
        }
    }

    cout << "--------" <<endl;
    for(auto& x: C_set) cout << x.first << ' ' <<  x.second << endl;
    cout << endl;
    return 0;
}