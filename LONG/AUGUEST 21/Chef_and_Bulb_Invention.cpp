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
        ll n, k, p, res = 0;
        cin >> n >> p >> k;
        ll x = p % k;
        ll y = ((n - 1) - ((n - 1) / k * k));

        if (x > y)
        {
            res = (((n - 1) / k) + 1) * (y + 1) + ((x - 1 - y) * ((n - 1) / k));
        }
        else
        {
            res = (((n - 1) / k) + 1) * x;
        }
        for (int i = x; i <= n - 1; i += k)
        {
            res = res + 1;
            if (i == p)
            {
                cout << res << endl;
                break;
            }
        }

        // ll a = (n - 1) % k;
        // ll b = p % k;
        // if (b > a)
        // {
        //     res += (n / k) * (a + 1);
        // }
        // fr(b - a - 1)
        // {
        //     res += ((n / k) - 1) * (b - a - 1);
        // }
        // res++;
        // for (int i = b; i != p; i += k)
        // {
        //     res++;
        // }
        // cout << res << " " << a << "  " << b << endl;

        //ll x = 0;
        // ll imk = 0;
        // ll ctr = 1;
        // fr(n)
        // {
        //     if (x == p)
        //     {
        //         if (imk != 0)
        //         {
        //             cout << ctr - 1 << endl;
        //         }
        //         else
        //         {
        //             cout << ctr << endl;
        //         }
        //     }
        //     x += k;
        //     ctr++;
        //     if (x > n)
        //     {
        //         imk++;
        //         x = imk;
        //     }
        // }
    }
    return 0;
}
