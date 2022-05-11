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
        ll n, r;
        cin >> n >> r;
        ll count = 0;
        vi a, b;
        vector<pair<ll, pair<ll, ll>>> v;
        fr(n)
        {
            ll temp;
            cin >> temp;
            a.pb(temp);
        }
        fr(n)
        {
            ll temp;
            cin >> temp;
            b.pb(temp);
        }
        fr(n)
        {
            v.pb(make_pair(a[i] - b[i], make_pair(a[i], b[i])));
        }
        sort(all(v));
        fr(n)
        {
            while (r >= v[i].second.first)
            {
                ll ans = r / v[i].second.first;
                count += ans;
                r -= (ans * (v[i].second.first));
                r += (ans * (v[i].second.second));
            }
        }
        cout << count;
        nl;
        // map<ll, ll> mp;
        // fr(n)
        // {
        //     mp.insert(pair<ll, ll>(a[i], b[i]));
        // }

        // // for (auto x : mp)
        // // {
        // //     cout << x.first << " " << x.second << endl;
        // // }

        // vi c;
        // for (auto x : mp)
        // {

        //     c.pb(x.first - x.second);
        // }

        // // vi::iterator min = min_element(all(c));

        // ll min = *min_element(all(c));
        // // ll min_ind = min_element(all(c)) - c.begin();

        // c.erase(min_element(all(c)));
        // ll ans = 0;

        // while (r > min)
        // {

        //     r -= min;
        //     ans++;
        //     min = *min_element(all(c));
        //     // min_ind =
        //     c.erase(min_element(all(c)));
        // }
        // cout << "ans " << ans;
        // nl;
        // fr(n) { c.pb(a[i] - b[i]); }
        // cout << *min;
        // min++;
        // nl;
        // cout << *min;
        // nl;
    }
    return 0;
}
