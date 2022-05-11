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

// ll powmod(ll a, ll b)
// {
//     ll res = 1;
//     a %= mod;
//     assert(b >= 0);
//     for (; b; b >>= 1)
//     {
//         if (b & 1)
//             res = res * a % mod;
//         a = a * a % mod;
//     }
//     return res;
// }

// int modx(int a, int m)
// {
//     return (a % m + m) % m;
// }

/* Iterative Function to calculate (x^y)%p in O(log y) */
int power(long long x, unsigned int y, int p)
{
    int res = 1; // Initialize result
    x = x % p;   // Update x if it is more than or
                 // equal to p
    if (x == 0)
        return 0; // In case x is divisible by p;
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;
        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll k = power(2, n, mod) - 1;
        ll res = power(k, m, mod);
        cout << res << endl;
    }
    return 0;
}
