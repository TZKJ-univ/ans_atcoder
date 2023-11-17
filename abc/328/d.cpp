/**
 * author: Zama
 * created: 11.11.2023 20:54:00
 **/

#include <bits/stdc++.h>

using namespace std;

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

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

#define OVERLOAD_REP(_1, _2, _3, name, ...) name
#define REP1(i, n) for (auto i = std::decay_t<decltype(n)>{}; (i) != (n); ++(i))
#define REP2(i, l, r) for (auto i = (l); (i) != (r); ++(i))
#define rep(...) OVERLOAD_REP(__VA_ARGS__, REP2, REP1)(__VA_ARGS__)
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

#define pb push_back
#define YESNO(bool) if(bool){cout<<"YES"<<"\n";}else{cout<<"NO"<<"\n";}
#define yesno(bool) if(bool){cout<<"yes"<<"\n";}else{cout<<"no"<<"\n";}
#define YesNo(bool) if(bool){cout<<"Yes"<<"\n";}else{cout<<"No"<<"\n";}

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main()
{
    string S;
    cin >> S;
    stack<char> stk;
    if (S.size() < 3) {
        rep(i, (int)S.size()) {
            cout << S[i];
        }
        cout << endl;
        return 0;
    }
    stk.push(S[0]);
    stk.push(S[1]);
    rep(i, 2, (int)S.size()) {
        stk.push(S[i]);
        if (stk.size() < 3) continue;
        char c = stk.top();
        stk.pop();
        char b = stk.top();
        stk.pop();
        char a = stk.top();
        stk.pop();

        if (!(a == 'A' and b == 'B' and c == 'C')) {
            stk.push(a);
            stk.push(b);
            stk.push(c);
        }
    }

    int s = (int)stk.size();

    vector<char> x(s);
    rep(i, s) {
        x[i] = stk.top();
        stk.pop();
    }
    reverse(all(x));
    rep(i, (int)x.size()) {
        cout << x[i];
    }
    cout <<endl;

    return 0;
}