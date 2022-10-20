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

ll dfs(ll i, ll j, vector<vector<char>> &x)
{
    ll cnt = 1;
    x[i][j] = 0;
    if (x[i - 1][j] == '1') { cnt += dfs(i - 1, j, x); }
    if (x[i + 1][j] == '1') { cnt += dfs(i + 1, j, x); }
    if (x[i][j - 1] == '1') { cnt += dfs(i, j - 1, x); }
    if (x[i][j + 1] == '1') { cnt += dfs(i, j + 1, x); }
    return cnt;
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
        n += 2;
        m += 2;
        vector<vector<char>> a(n, vector<char>(m, '0'));
        rep(i, 1, n - 1)
        {
            rep(j, 1, m - 1)
            {
                cin >> a[i][j];
            }
        }
        // rep(i, 0, n)
        // {
        //     rep(j, 0, m)
        //     {
        //         cout << a[i][j] << " ";
        //     }
        //     nl;
        // }
        vi siz;
        nesfr(n, m)
        {
            if (a[i][j] == '1')
            {
                siz.pb(dfs(i, j, a));
            }
        }
        sort(all(siz));
        ll ans = 0;
        reverse(all(siz));
        fr(siz.size())
        {
            if (i & 1) { ans += siz[i]; }
        }
        cout << ans; nl;
    }
    return 0;
}
