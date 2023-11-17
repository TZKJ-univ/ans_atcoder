/**
  *  programmer:  Zama
*    created: 22.08.2023 00:10:52
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

int main() {
    int N, M;
    cin >> N >> M;
    vi P(N), C(N);
    vvi F(N);
    for (int i = 0; i < N; i++) {
        cin >> P[i] >> C[i];
        vi tmp(C[i]);
        for (auto& ele : tmp) cin >> ele;
        F[i] = tmp;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            bool cond1 = false, cond2 = false, cond3 = false;
            if (P[i] >= P[j]) cond1 = true;

            vi func_i = F[i], func_j = F[j];
            sort(all(func_i));
            sort(all(func_j));
            if (includes(all(func_j), all(func_i))) cond2 = true;
            if (P[i] > P[j]) cond3 = true;
            for (auto& fj : F[j]) {
                if (find(all(F[i]), fj) == F[i].end()) cond3 = true;
            }
            if (cond1 and cond2 and cond3) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;


    return 0;
}