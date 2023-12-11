/**
 * author: Zama
 * created: 11.12.2023 13:04:56
 **/

#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include <debug_print.hpp>
#define debug(...) debug_print::multi_print(#__VA_ARGS__, __VA_ARGS__)
#else
#define debug(...) (static_cast<void>(0))
#endif

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
#define YESNO(bool)   \
    if (bool)         \
    {                 \
        cout << "YES" \
             << "\n"; \
    }                 \
    else              \
    {                 \
        cout << "NO"  \
             << "\n"; \
    }
#define yesno(bool)   \
    if (bool)         \
    {                 \
        cout << "yes" \
             << "\n"; \
    }                 \
    else              \
    {                 \
        cout << "no"  \
             << "\n"; \
    }
#define YesNo(bool)   \
    if (bool)         \
    {                 \
        cout << "Yes" \
             << "\n"; \
    }                 \
    else              \
    {                 \
        cout << "No"  \
             << "\n"; \
    }

template <typename T>
inline void print(const vector<T> &v, string s = " ") { rep(i, v.size()) cout << v[i] << (i != (ll)v.size() - 1 ? s : "\n"); }
template <typename T, typename S>
inline void print(const pair<T, S> &p) { cout << p.first << " " << p.second << "\n"; }
template <typename T>
inline void print(const T &x) { cout << x << "\n"; }
template <typename T, typename S>
inline void print(const vector<pair<T, S>> &v)
{
    for (auto &&p : v)
        print(p);
}

template <class T>
inline bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return 1;
    }
    return 0;
}
template <class T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return 1;
    }
    return 0;
}
const int inf = 1000000000;

int main()
{
    int h, w, a[6][6], b[6][6];
    cin >> h >> w;
    for (int i = 1; i <= h; i++)
        for (int j = 1; j <= w; j++)
            cin >> a[i][j];
    for (int i = 1; i <= h; i++)
        for (int j = 1; j <= w; j++)
            cin >> b[i][j];

    int p[6], q[6];
    for (int i = 1; i <= h; i++)
        p[i] = i;
    for (int i = 1; i <= w; i++)
        q[i] = i;

    int ans = inf;
    do
    {
        do
        {

            bool match = true;
            for (int i = 1; i <= h; i++)
                for (int j = 1; j <= w; j++)
                {
                    if (a[p[i]][q[j]] != b[i][j])
                        match = false;
                }
            if (!match)
                continue;

            int pinv = 0, qinv = 0;
            for (int i = 1; i <= h; i++)
                for (int j = 1; j <= h; j++)
                    if (i < j && p[i] > p[j])
                        pinv++;
            for (int i = 1; i <= w; i++)
                for (int j = 1; j <= w; j++)
                    if (i < j && q[i] > q[j])
                        qinv++;
            debug(p, q);
            ans = min(ans, pinv + qinv);

        } while (next_permutation(q + 1, q + w + 1));
    } while (next_permutation(p + 1, p + h + 1));

    if (ans == inf)
        cout << -1 << endl;
    else
        cout << ans << endl;

    return 0;
}