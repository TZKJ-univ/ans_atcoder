/**
  *  programmer:  Zama
*    created: 16.09.2023 20:57:41
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
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    s1 += s1 + s1;
    s2 += s2 + s2;
    s3 += s3 + s3;

    int result = 1000000000;
    bool flag = 0;

    rep(i, N) {
        char target = s1[i];
        vi v1(N, 0);
        vi v2(N, 0);
        vi v3(N, 0);
        v1[i] = 1;
        rep(j, N) {
            if (s1[j] == target) {
                v1[j] = 1;
            }
            if (s2[j] == target) {
                v2[j] = 1;
            }
            if (s3[j] == target) {
                v3[j] = 1;
            }
        }


        bool stop_f1 = 0;
        bool stop_f2 = 0;
        bool stop_f3 = 0;
        rep(j, 3 * N) {
            if (v1[j % N] == 1 and !stop_f1) {
                stop_f1 = 1;
            } else if (v2[j % N] == 1 and !stop_f2) {
                stop_f2 = 1;
            } else if (v3[j % N] == 1 and !stop_f3) {
                stop_f3 = 1;
            }
            if (stop_f1 and stop_f2 and stop_f3) {
                flag = 1;
                result = min(result, j);
            }
        }

        stop_f1 = 0;
        stop_f2 = 0;
        stop_f3 = 0;
        rep(j, 3 * N) {
            if (v1[j % N] == 1 and !stop_f1) {
                stop_f1 = 1;
            } else if (v3[j % N] == 1 and !stop_f3) {
                stop_f3 = 1;
            } else if (v2[j % N] == 1 and !stop_f2) {
                stop_f2 = 1;
            }
            if (stop_f1 and stop_f2 and stop_f3) {
                flag = 1;
                result = min(result, j);
            }
        }

        stop_f1 = 0;
        stop_f2 = 0;
        stop_f3 = 0;
        rep(j, 3 * N) {
            if (v2[j % N] == 1 and !stop_f2) {
                stop_f2 = 1;
            } else if (v1[j % N] == 1 and !stop_f1) {
                stop_f1 = 1;
            } else if (v3[j % N] == 1 and !stop_f3) {
                stop_f3 = 1;
            }
            if (stop_f1 and stop_f2 and stop_f3) {
                flag = 1;
                result = min(result, j);
            }
        }

        stop_f1 = 0;
        stop_f2 = 0;
        stop_f3 = 0;
        rep(j, 3 * N) {
            if (v2[j % N] == 1 and !stop_f2) {
                stop_f2 = 1;
            } else if (v3[j % N] == 1 and !stop_f3) {
                stop_f3 = 1;
            } else if (v1[j % N] == 1 and !stop_f1) {
                stop_f1 = 1;
            }
            if (stop_f1 and stop_f2 and stop_f3) {
                flag = 1;
                result = min(result, j);
            }
        }

        stop_f1 = 0;
        stop_f2 = 0;
        stop_f3 = 0;
        rep(j, 3 * N) {
            if (v3[j % N] == 1 and !stop_f3) {
                stop_f3 = 1;
            } else if (v1[j % N] == 1 and !stop_f1) {
                stop_f1 = 1;
            } else if (v2[j % N] == 1 and !stop_f2) {
                stop_f2 = 1;
            }
            if (stop_f1 and stop_f2 and stop_f3) {
                flag = 1;
                result = min(result, j);
            }
        }

        stop_f1 = 0;
        stop_f2 = 0;
        stop_f3 = 0;
        rep(j, 3 * N) {
            if (v3[j % N] == 1 and !stop_f3) {
                stop_f3 = 1;
            } else if (v2[j % N] == 1 and !stop_f2) {
                stop_f2 = 1;
            } else if (v1[j % N] == 1 and !stop_f1) {
                stop_f1 = 1;
            }
            if (stop_f1 and stop_f2 and stop_f3) {
                flag = 1;
                result = min(result, j);
            }
        }
    }

    cout << (flag ? result : -1) << endl;
    return 0;
}