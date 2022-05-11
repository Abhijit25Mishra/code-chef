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

// 1 1 1 2 2 2 2
// 2 1 2 2 2 2
// 3 2 2 2 2
// 5 2 2 2
// 7 2 2
// 9 2
// 11

// 1 1 1 4 2 2
// 1 1 1 4 4
// 1 1 1 8
// 1 1 9

// 1 1 1 2 2 2 2 2
// 2 1 2 2 2 2 2
// 3 2 2 2 2 2
// 5 2 2 2 2
// 7 2 2 2
// 9 2 2
// 11 2
// 13

// 1 1 1 4 2 2 2
// 1 1 1 4 4 2
// 1 1 1 8 2
// 1 1 1 10
// 1 1 11
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
        ll even = 0, odd = 0;
        fr(n)
        {
            cin >> a[i];
            (a[i] % 2) ? odd++ : even++;
        }

        // cout << even << " " << odd << endl;
        if ((odd % 2) == 1)
            cout << even << "\n";
        else
            cout << min(even, odd / 2) << "\n";

        // ans = min(even, odd);
        // if (ans == odd)
        // {
        //     type = true;
        // }
        // else
        // {
        //     type = false;
        // }
        // if (type)
        // {
        //     if (ans % 2 == 0)
        //     {
        //         cout << ans / 2 << "hello1" << endl;
        //     }
        //     else if ((ans % 2 == 1) && (even % 2 == 0))
        //     {
        //         cout << even / 2 + 1 << "hello2" << endl;
        //     }
        //     else if ((ans % 2 == 1) && (even % 2 == 1))
        //     {
        //         cout << even / 2 + 2 << "hello3" << endl;
        //     }
        // }
        // else
        // {
        //     if (ans % 2 == 0)
        //     {
        //         cout << "even " << ans / 2 + 1 << endl;
        //     }
        //     else
        //     {
        //         cout << "odd" << ((ans + 1) / 2) << endl;
        //     }
        // }
        // odds are less -> odds are even -> odds/2
        //               -> odds are odd -> n-1
        // evens are less -> evens are even -> evens/2 + 1
        //                -> evens are odd  -> evens+1/2
    }
    return 0;
}
