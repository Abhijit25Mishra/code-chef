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

int LIS(vector<ll> v)
{
    ll k = 0;
    ll max = 0;
    fr(v.size())
    {
        if (v[i] > v[i - 1] && i > 0)
        {
            k++;
            if (k > max)
            {
                max = k;
            }
        }
        else
        {
            k = 0;
        }
    }
    return max;
}

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int l = n / 2;
        if (n % 2)
        {
            cout << "YES" << endl;
            for (ll i = 1; i <= l; i++)
            {
                cout << i << " ";
            }

            cout << n << " ";

            for (int i = n - 1; i > l; i--)
            {
                cout << i << " ";
            }

            cout << endl;
        }
        else if (n != 2)
        {
            cout << "YES" << endl;
            cout << l << " ";
            for (int i = 1; i < l; i++)
            {
                cout << i << " ";
            }
            for (int i = n; i > l; i--)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
    // vector<ll> v;
    // fr(n)
    // {
    //     if (i == 0)
    //     {
    //         v.push_back(1);
    //     }
    //     else if (i % 2 != 0 && (i + 2 <= n))
    //     {
    //         v.push_back(i + 2);
    //     }
    //     else if (i % 2 != 0 && (i + 2 > n))
    //     {
    //         v.push_back(i + 1);
    //     }
    //     else if (i % 2 == 0)
    //     {
    //         v.push_back(i);
    //     }
    // }

    // fr(n)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << LIS(v) << endl;

    // vector<ll> vr;
    // vr.assign(all(v));
    // reverse(all(vr));

    // if (LIS(v) == LIS(vr))
    // {
    //     cout << "YES" << endl;
    //     fr(n)
    //     {
    //         cout << v[i] << " ";
    //     }
    // }
    // else
    // {
    //     cout << "NO" << endl;
    // }
}
