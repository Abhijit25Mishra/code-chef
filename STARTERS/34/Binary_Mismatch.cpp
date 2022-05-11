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

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll zeros = 0, ones = 0;
        ll diff = 0;
        vector<char> str;
        fr(n)
        {
            char temp;
            cin >> temp;
            str.pb(temp);
            if (temp == '0')
            {
                zeros++;
            }
            else
            {
                ones++;
            }
        }
        if (n % 2 == 1)
        {
            cout << "NO" << endl;
        }
        else
        {

            ll req = (ones - zeros) / 2;
            ll cur = 0;
            ll l = 1, r = 1;
            for (int i = 0; i < n; i++)
            {
                cur += (str[i] == '1');
                cur -= (str[i] == '0');

                if (cur == req)
                {
                    r = i + 1;
                    break;
                }
            }
            cout << "YES" << endl;
            cout << l << " " << r << endl;
        }
    }
    return 0;
}
