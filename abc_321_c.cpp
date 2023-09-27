/**
  *  programmer:  Zama
*    created: 23.09.2023 20:59:58
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
    int K;
    cin >> K;

    int count = 0;
    string N = "1";
    while(1) {
        bool flag = 1;
        rep(i, N.size()-1) {
            if (N[i] <= N[i+1]) {
                flag = 0;
                if (N[i] != '9') {
                    N[i] += 1;
                    rep(j, i+1, N.size()) {
                        N[j] = '0';
                    }
                } else {
                    N.insert(N.begin(), '1');
                    rep(i, 1, N.size()) {
                        N[i] = '0';
                    }
                }
                    break;
            }
        }
        if (flag) count++;

        if (count == K) {
            cout << N << endl;
            return 0;
        }

        if (flag) {
            int tmp = stoi(N);
            tmp++;
            N = to_string(tmp);
        }
    }
}