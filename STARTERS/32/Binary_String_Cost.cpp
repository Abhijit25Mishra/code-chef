#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define mod 1000000007
#define pb push_back
#define is insert
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rfr(n) for (int i = n - 1; i >= 0; i--)
#define rep1(i, a, b) for (long long i = a; i <= b; i++)
#define fr(n) for (long long i = 0; i < n; i++)
#define nesfr(x, y)                   \
    for (long long i = 0; i < x; i++) \
        for (long long j = 0; j < y; j++)
#define rep(i, a, b) for (long long i = a; i < b; i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll X, Y;
        cin >> X >> Y;
        string s;
        cin >> s;

        // cout << min(X, Y) << endl;
        char start = s[0];
        ll diff = 0;

        fr(n - 1)
        {
            if (s[i] != s[i + 1])
            {
                diff++;
            }
        }
        if (diff)
        {
            cout << min(X, Y) << endl;
        }
        else
        {
            cout << 0 << endl;
        }
        // if (diff % 2 == 0)
        // {
        //     cout << (X * diff / 2 + Y * diff / 2) << endl;
        //     cout << "diff: " << diff << endl;
        // }
        // else
        // {
        //     start ? cout << (X * (diff / 2 + 1) + Y * (diff / 2)) << endl : cout << (X * (diff / 2) + Y * (diff / 2 + 1)) << endl;
        //     cout << "diff: " << diff << endl;
        // }
    }
    return 0;
}
