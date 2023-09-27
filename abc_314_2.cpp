/**
  *  programmer:  Zama
*    created: 20.09.2023 09:53:31
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
    vi C(N);
    vvi A(N);
    rep(i, N) {
        cin >> C[i];
        vi tmp(C[i]);
        rep(j, C[i]) {
            cin >> tmp[j];
        }
        A[i] = tmp;
    }
    int X;
    cin >> X;

    vi hit_person;
    int n_bet = 100;
    rep(i, N) {
        if (find(all(A[i]), X) != A[i].end()) {
            if (A[i].size() == n_bet) {
                hit_person.push_back(i);
            } else if (A[i].size() < n_bet) {
                n_bet = A[i].size();
                hit_person.clear();
                hit_person.push_back(i);
            }
        }
    }
    sort(all(hit_person));

    cout << hit_person.size() << endl;
    for(auto& p: hit_person) {
        cout << p + 1 << ' ';
    }
    cout << endl;

    return 0;
}