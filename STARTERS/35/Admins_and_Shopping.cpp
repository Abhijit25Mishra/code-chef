// Aur Bhai Dekhne aagaye ;)
// Author: Abhijit Mishra
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

        ll n, x;
        cin >> n >> x;
        ll a[n];
        fr(n)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        float sum = float(x) / *min_element(a, a + n);

        float o = ceil(sum);
        // cout << "o = " << o << " " << x << " " << *min_element(a, a + n) << endl;
        // o = ceil(o);
        // cout << "0 =  " << o << endl;
        float k = n;
        float ans = max(k, o);
        cout << ans << endl;

        // ll low = 1000000000;
        // ll a[n];
        // fr(n)
        // {
        //     cin >> a[i];
        //     if (a[i] < low)
        //     {
        //         low = a[i];
        //     }
        //     sum += a[i];
        // }
        // ll ans = ceil(x / low);
        // // cout << ans << "  ";
        // ans = max(ans, n);
        // ll ano = ceil((n * x) / sum);
        // // cout << ano << "  " << n << endl;
        // ans = max(ans, ano);

        // cout << ans << endl;
    }
    return 0;
}
