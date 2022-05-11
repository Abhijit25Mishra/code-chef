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
        ll ans = 0;
        cin >> n;
        vi a;
        fr(n)
        {
            ll temp;
            cin >> temp;
            a.push_back(temp);
        }

        ll indOfMin = -1;
        while (indOfMin != 0)
        {
            indOfMin = min_element(all(a)) - a.begin();
            // cout << "index of minimum :" << indOfMin << endl;
            // cout << "size of array :" << a.size() << endl;
            ans += a[indOfMin] * a.size();
            ll sub = a[indOfMin];
            // ll iniSize = a.size() - indOfMin;
            a.erase(a.begin() + indOfMin, a.end());
            fr(a.size()) { a[i] = a[i] - sub; }
        }

        cout << ans << endl;
    }

    return 0;
}
