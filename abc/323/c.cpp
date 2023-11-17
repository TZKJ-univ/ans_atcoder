/**
  *  programmer:  Zama
*    created: 07.10.2023 20:56:58
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
    vector<pair<int, int>> A(M);
    rep(i, M) {
        A[i].second = i;
        cin >> A[i].first;
    }

    vector<string> S(N);
    rep(i, N) cin >> S[i];

    vi point(N, 0);
    rep(i, N) {
        rep(j, M) {
            if (S[i][j] == 'o') point[i] += A[j].first;
        }
        point[i] += i;
    }

    // rep(i, N) cout << point[i] << ' ';

    int fp_idx = max_element(all(point)) - point.begin();
    int fp_pt = point[fp_idx];
    // cout << fp_idx << ' ' << fp_pt;
    sort(rall(A));
    rep(i, N) {
        if (i == fp_idx) {
            cout << 0 << endl;
        } else {
            int now_p = point[i];
            int count = 0;
            // cout << "num:" << i <<endl;
            rep(j, M) {
                if (S[i][A[j].second] == 'x') {
                    now_p += A[j].first;
                    // cout << now_p << " ";
                    count++;
                    if (now_p > fp_pt) break;
                }
            }
            cout << count << endl;
        }
    }

    return 0;
}