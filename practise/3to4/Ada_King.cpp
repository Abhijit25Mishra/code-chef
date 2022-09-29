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

void bfs(vector<vector<ll>> &a, ll x, ll y, ll k)
{
    a[x][y] = 0;
    queue<pair<ll, ll>> q;
    vector<pair<ll, ll>>v;
    q.push(mp(x, y));
    while (!q.empty())
    {
        x = q.front().first;
        y = q.front().second;
        nesfr(3, 3)
        {
            if (a[x - it[i]][y - it[j]])
            {
                // a[x - it[i]][y - it[j]] = 0;
                v.pb(mp(x - it[i], y - it[j]));
            }
        }
        q.pop();
        if (q.empty() && k > 0)
        {
            k--;
            while (!v.empty())
            {
                a[v.back().first][v.back().second] = 0;
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
        ll x, y, k;
        cin >> x >> y >> k;
        vector<vector<ll>> board(10ll, vi(10, 1));
        nesfr(10, 10)
        {
            if (i == 0 || i == 9)
            {
                board[i][j] = 0;
            }
            if (j == 0 || j == 9)
            {
                board[i][j] = 0;
            }
        }
        bfs(board, x, y, k);
        ll ans = 0;
        nesfr(10, 10)
        {
            if (board[i][j] == 0) { ans++; }
        }
        // rep(i, 0, 10)
        // {
        //     rep(j, 0, 10)
        //     {
        //         cout << board[i][j] << " ";
        //     }
        //     nl;
        // }
        // cout << " ";
        cout << ans - 36;
        nl;
    }
    return 0;
}
