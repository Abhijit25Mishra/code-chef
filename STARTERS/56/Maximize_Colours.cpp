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


int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        vi x(3);
        cin >> x[0] >> x[1] >> x[2];
        sort(all(x));
        reverse(all(x));
        ll ans = 0;
        fr(3)
        {
            if (x[i] > 0)
            {
                ans++;
                x[i]--;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = i + 1; j < 3; j++)
            {
                if (x[i] && x[j])
                {
                    ans++;
                    x[i]--;
                    x[j]--;
                }
            }
        }
        cout << ans;


        // ll a, b, c;
        // cin >> a >> b >> c;
        // ll ans = 0;

        // if (a > 2)
        // {
        //     if (b > 2)
        //     {
        //         if (c > 2)
        //         {
        //             cout << 6;
        //         }
        //         else if (c == 2)
        //         {
        //             cout << 5;
        //         }
        //         else
        //         {
        //             cout << 3 + c;
        //         }
        //     }
        //     else if (b == 2)
        //     {
        //         if (c > 2)
        //         {
        //             cout << 5;
        //         }
        //         else if (c == 2)
        //         {
        //             cout << 5;
        //         }
        //         else
        //         {
        //             cout << c + 3;
        //         }
        //     }
        //     else
        //     {
        //         if (c > 2)
        //         {
        //             cout << b + 3;
        //         }
        //         else if (c == 2)
        //         {
        //             cout << b + 3;
        //         }
        //         else
        //         {
        //             cout << b + c + 1;
        //         }
        //     }
        // }
        // else if (a == 2)
        // {
        //     if (b > 2)
        //     {
        //         if (c > 2)
        //         {
        //             cout << 5;
        //         }
        //         else if (c == 2)
        //         {
        //             cout << 5;
        //         }
        //         else
        //         {
        //             cout << c + 3;
        //         }
        //     }
        //     else if (b == 2)
        //     {
        //         if (c > 2)
        //         {
        //             cout << 5;
        //         }
        //         else if (c == 2)
        //         {
        //             cout << 4;
        //         }
        //         else
        //         {
        //             cout << 3 + c;
        //         }
        //     }
        //     else
        //     {
        //         if (c > 2)
        //         {
        //             cout << b + 3;
        //         }
        //         else if (c == 2)
        //         {
        //             cout << 3 + b;
        //         }
        //         else
        //         {
        //             cout << c + b + 1;
        //         }
        //     }
        // }
        // else
        // {
        //     if (b > 2)
        //     {
        //         if (c > 2)
        //         {
        //             cout << a + 3;
        //         }
        //         else if (c == 2)
        //         {
        //             cout << a + 3;
        //         }
        //         else
        //         {
        //             cout << a + c + 1;
        //         }
        //     }
        //     else if (b == 2)
        //     {
        //         if (c > 2)
        //         {
        //             cout << a + 3;
        //         }
        //         else if (c == 2)
        //         {
        //             cout << a + 3;
        //         }
        //         else
        //         {
        //             cout << a + c + 1;
        //         }
        //     }
        //     else
        //     {
        //         if (c > 2)
        //         {
        //             cout << a + b + 1;
        //         }
        //         else if (c == 2)
        //         {
        //             cout << a + b + 1;
        //         }
        //         else
        //         {
        //             cout << a + b + c;
        //         }
        //     }
        // }
        nl;
    }
    return 0;
}
