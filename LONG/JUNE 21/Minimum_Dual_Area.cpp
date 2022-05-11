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
        vector<pair<ll, ll>> x;
        vector<pair<ll, ll>> y;
        multiset<ll> X;
        multiset<ll> Y;
        fr(n)
        {
            ll a, b;
            cin >> a >> b;
            x.pb({a, b});
            y.pb({b, a});
            X.insert(a);
            Y.insert(b);
        }
        sort(all(x));
        sort(all(y));
        ll h1 = 0;
        ll h2 = 0;
        ll h1Max = 0;
        ll h1Min = mod;
        ll area = mod;
        fr(n - 1)
        {
            h1Max = max(h1Max, x[i].second);
            h1Min = min(h1Min, x[i].second);
            h1 = h1Max - h1Min;
            auto it = Y.find(x[i].second);
            Y.erase(it);
            h2 = *Y.rbegin() - *Y.begin();
            ll newArea = (x[i].first - x[0].first) * h1 + (x[n - 1].first - x[i + 1].first) * h2;
            area = min(area, newArea);
        }

        ll w1 = 0;
        ll w2 = 0;
        ll w1Max = 0;
        ll w1Min = mod;
        fr(n - 1)
        {
            w1Max = max(w1Max, y[i].second);
            w1Min = min(w1Min, y[i].second);
            w1 = w1Max - w1Min;
            auto it = X.find(y[i].second);
            X.erase(it);
            w2 = *X.rbegin() - *X.begin();
            ll newArea = (y[i].first - y[0].first) * w1 + (y[n - 1].first - y[i + 1].first) * w2;
            area = min(area, newArea);
        }
        if (area == mod)
        {
            area = 0;
        }
        cout << area << endl;
    }
    return 0;
}
