// Aur Bhai Dekhne aagaye ;)
// Author: Abhijit Mishra 
#pragma GCC optimize("Ofast")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("unroll-loops")
//#pragma GCC target("sse,sse2,sse3,ssse3,popcnt,abm,mmx,tune=native")
#pragma GCC optimize("fast-math")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define mod 1000000007
#define pb push_back
#define is insert
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rfr(n) for(int i=n-1;i>=0;i--)
#define rep1(i,a,b) for(long long i=a;i<=b;i++)
#define fr(n) for(long long i=0;i<n;i++)
#define nesfr(x,y) for(long long i=0;i<x;i++)for(long long j=0;j<y;j++)
#define rep(i,a,b) for(long long i=a;i<b;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
#define nl cout << "\n"
const unsigned int M = 1000000007;
const int  N = 2e5 + 5;


void primes(ll n, vector<bool> &is_prime)
{
    // int n;
    // vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++)
    {
        if (is_prime[i] && (long long)i * i <= n)
        {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
}


int main()
{
    fast;
    vi x;
    vector<bool> is_prime(100005, true);
    primes(1005, is_prime);
    for (int i = 0; i < 100005; i++)
    {
        if (is_prime[i])
        {
            x.pb(i);
        }
    }

    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vi m(n);
        ll mx = 0;
        fr(n) { cin >> m[i]; mx = max(mx, m[i]); }

        ll a[n][mx + 1000];
        bool ok = false;
        for (int i = 0; i < n; i++)
        {
            if (ok) { break; }
            for (auto pri : is_prime)
            {
                if (pri > n) { ok = true; break; }

                if (i != 0)
                {
                    if (m[i] % pri)
                    {
                        a[i][pri] = a[i - 1][pri];
                    }
                    else
                    {
                        a[i][pri] = a[i - 1][pri] + 1;
                    }
                }
                else
                {
                    if (m[i] % pri)
                    {
                        a[i][pri] = 0;
                    }
                    else
                    {
                        a[i][pri] = 1;
                    }
                }
            }
        }

        ok = false;
        for (int i = 0; i < n; i++)
        {
            if (ok) { break; }
            for (auto pri : is_prime)
            {
                if (pri > n) { ok = true; break; }
                cout << a[i][pri] << " ";
            }
            nl;
        }
        ll q;
        cin >> q;
        while (q--)
        {
            ll y, z;
            cin >> y >> z;

        }
    }
    return 0;
}
