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
        ll n;
        cin >> n;
        ll a[n];
        bool pari = true;
        ll cnt = 0;
        ll par;
        ll even = 0;
        ll odd = 0;
        ll last;
        ll maxi = 0;
        ll cntAtMaxi = 0;
        fr(n)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                even++;
            }
            if (a[i] % 2 == 1)
            {
                odd++;
            }
            if (i == 0)
            {
                par = a[0] % 2;
                last = 0;
            }
            if ((a[i] % 2) != par)
            {
                // cout << i << " ";
                maxi = i - last;
                last = i;
                cntAtMaxi = cnt;
                cnt++;
                par = a[i] % 2;
            }
        }
        // cout << endl;
        // cout << cnt << endl;
        ll par0 = a[0] % 2;
        ll parn = a[n - 1] % 2;
        // cout << par0 << " " << parn << endl;
        if (par0 == parn)
        {
            if (par0 == 1)
            {
                cout << odd - 1 << endl;
            }
            else
            {
                cout << even - 1 << endl;
            }
        }
        else
        {
            cout << maxi << " " << cntAtMaxi << endl;
        }
    }
    return 0;
}
