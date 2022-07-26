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
#define nl cout << "\n"
const unsigned int M = 1000000007;
const int N = 2e5 + 5;

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n, m = 0, m2;
        cin >> n;
        map<int, int> cnt;
        int a[n], mx = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i], mx = max(mx, a[i]), cnt[a[i]]++;
        int bad = 0, g2 = 0, largest = 0;
        for (int i = 0; i < n; i++)
        {
            if (cnt[a[i]] == 1)
            {
                bad++;
                if (mx == a[i])
                    largest = 1;
            }
            else if (cnt[a[i]] > 2)
                g2++;
        }
        if (bad == 1)
        {
            if (g2 || !largest)
                cout << 1 << "\n";
            else
                cout << 2 << "\n";
        }
        else
            cout << (bad + 1) / 2 << "\n";

        // map<ll, ll> a;
        // set<ll> b, c;
        // fr(x)
        // {
        //     ll temp;
        //     cin >> temp;
        //     if (m < temp)
        //     {
        //         m2 = m;
        //         m = temp;
        //     }
        //     if (a.find(temp) == a.end())
        //     {
        //         a[temp] = 1;
        //     }
        //     else
        //     {
        //         a[temp]++;
        //     }
        // }
        // // sort(all(a));
        // ll ans = 0;
        // bool ok = false;
        // if (a[m] <= 1)
        // {
        //     ok = true;
        // }
        // ll mmmin = LLONG_MAX, ab;
        // for (auto z : a)
        // {
        //     if (ok)
        //     {
        //         if (z.first == m)
        //         {
        //             continue;
        //         }

        //         if (z.second == 1)
        //         {
        //             ans++;
        //         }
        //         if (mmmin > z.second)
        //         {
        //             mmmin = z.second;
        //             ab = z.first;
        //         }
        //     }
        //     else
        //     {
        //         if (z.second == 1)
        //         {
        //             ans++;
        //         }
        //     }
        //     // cout << z.first << " " << z.second;
        //     // nl;
        // }
        // if (ok)
        // {
        //     ans = ans - (ans / 2);
        //     if (mmmin > 2)
        //     {
        //         ans += 1;
        //     }
        //     else if (mmmin == 2)
        //     {
        //         ans += 1;
        //     }
        //     else
        //     {
        //         ans += 0;
        //     }
        //     cout << ans;
        // }
        // else
        //     cout << ans - (ans / 2);
        // nl;
    }
    return 0;
}
