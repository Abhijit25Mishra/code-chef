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

// h1+h2+h3...

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n, z;
        cin >> n >> z;
        ll a[n];
        fr(n)
        {
            cin >> a[i];
        }
        priority_queue<ll> max_heap;
        fr(n)
        {
            max_heap.push(a[i]);
        }
        ll count = 1;
        while (z > max_heap.top())
        {
            ll x = max_heap.top();
            max_heap.pop();
            max_heap.push(x / 2);
            z -= x;
            count++;
            if (x == 0)
                break;
        }
        if (max_heap.top() == 0)
        {
            cout << "Evacuate" << endl;
        }
        else
        {
            cout << count << endl;
        }
    }
    return 0;
}
