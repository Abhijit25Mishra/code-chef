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


vi it = { 1,-1,0 };

void bfs(vector<vector<ll>> &a, vector<pair<ll, ll>> &v, ll &k)
{
    ll n = a.size();
    ll m = a[0].size();
    queue<pair<ll, ll>> q;
    while (!v.empty())
    {
        q.push(mp(v.back().first, v.back().second));
        v.pop_back();
    }

    bool ok = true;
    ll x, y;
    while (!q.empty())
    {
        x = q.front().first;
        y = q.front().second;
        // cout << x << " " << y;
        // nl;
        nesfr(3, 3)
        {
            if (a[x - it[i]][y - it[j]] == 0)
            {
                v.pb(mp(x - it[i], y - it[j]));
                a[x - it[i]][y - it[j]] = 1;
            }
        }

        // ok = true;
        q.pop();
        // rep(i, 1, n - 1)
        // {
        //     rep(j, 1, m - 1)
        //     {
        //         if (a[i][j] != 1)
        //         {
        //             ok = false;
        //         }
        //     }
        // }
        // if (ok) { return; }
        if (q.empty())
        {
            k++;
            while (!v.empty())
            {
                a[v.back().first][v.back().second] = 1;
                q.push(v.back());
                v.pop_back();
            }
        }
    }
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
        ll mx = 0;
        vector<vector<ll>> a(n, vector<ll>(m, -1));

        rep(i, 1, n - 1)
        {
            rep(j, 1, m - 1)
            {
                cin >> a[i][j];
                mx = max(mx, a[i][j]);
            }
        }

        vector<pair<ll, ll>> v;
        rep(i, 1, n - 1)
        {
            rep(j, 1, m - 1)
            {
                if (mx == a[i][j])
                {
                    a[i][j] = 1;
                    v.pb(mp(i, j));
                }
                else
                {
                    a[i][j] = 0;
                }
            }
        }
        // for (auto ttt : v)
        // {
        //     cout << ttt.first << " " << ttt.second;
        //     nl;
        // }
        // rep(i, 0, n)
        // {
        //     rep(j, 0, m)
        //     {
        //         cout << a[i][j] << " ";
        //     }
        //     nl;
        // }
        // nl; nl;
        ll ans = 0;
        bfs(a, v, ans);
        cout << ans - 1;
        nl;
    }
    return 0;
}
