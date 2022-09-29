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

void primeFactors(int n, map<ll, ll> &a)
{
    while (n % 2 == 0)
    {
        a[2]++;
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            a[i]++;
            n = n / i;
        }
    }
    if (n > 2)
        a[n]++;
}

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        map<ll, ll> x, y;
        primeFactors(a, x);
        primeFactors(b, y);
        // for (auto c : x)
        // {
        //     cout << c.first << " " << c.second;
        //     nl;
        // }
        // for (auto d : y)
        // {
        //     cout << d.first << " " << d.second;
        //     nl;
        // }
        if (x.size() == y.size() && x.size() == 1)
        {
            for (auto c : x)
            {
                for (auto d : y)
                {
                    if (c.first == d.first) { cout << "YES"; }
                    else { cout << "NO"; }
                }
            }
        }
        else if (x.size() == y.size())
        {

            double k = -1;
            bool first = true, ans = true;
            for (auto c : x)
            {
                for (auto d : y)
                {
                    if (c.first == d.first)
                    {
                        // cout << d.second << " " << c.second << " " << c.first;
                        // nl;
                        if (first)
                        {
                            k = (double)d.second / (double)c.second;
                            // cout << k;
                            first = false;
                        }
                        else
                        {
                            if (k != (double)d.second / (double)c.second)
                            {
                                ans = false;
                            }
                        }

                    }
                }
            }

            if (ans) { cout << "YES"; }
            else { cout << "NO"; }
        }
        else
        {
            cout << "NO";
        }
        nl;

    }
    return 0;
}
