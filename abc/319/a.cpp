/**
  *  programmer:  Zama
*    created: 09.09.2023 20:57:34
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
    string S;
    cin >> S;

    if (S == "tourist") cout << 3858 << endl;
    if (S == "ksun48") cout << 3679 << endl;
    if (S == "Benq") cout << 3658 << endl;
    if (S == "Um_nik") cout << 3648 << endl;
    if (S == "apiad") cout << 3638 << endl;
    if (S == "Stonefeang") cout << 3630 << endl;
    if (S == "ecnerwala") cout << 3613 << endl;
    if (S == "mnbvmar") cout << 3555 << endl;
    if (S == "newbiedmy") cout << 3516 << endl;
    if (S == "semiexp") cout << 3481 << endl;

    return 0;
}