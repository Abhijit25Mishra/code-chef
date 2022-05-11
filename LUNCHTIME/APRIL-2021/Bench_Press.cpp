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
        bool flag = true;
        ll n, w, rod;
        cin >> n >> w >> rod;
        ll grams[n];
        map<ll, ll> m;
        fr(n)
        {
            cin >> grams[i];
            m[grams[i]]++;
        }
        if (rod >= w)
        {
            cout << "YES\n";
            flag = false;
        }
        else
        {
            w = w - rod;
            fr(n)
            {
                if (m[grams[i]] >= 2)
                {
                    ll count = m[grams[i]];
                    if (count % 2 == 0)
                    {
                        w -= count * grams[i];
                    }
                    else
                    {
                        w -= (count - 1) * grams[i];
                    }
                    m[grams[i]] = 0;
                }
                if (w > 0)
                {
                    break;
                }
            }
            if (w <= 0)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
