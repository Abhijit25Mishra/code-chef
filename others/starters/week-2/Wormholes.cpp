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
    ll n, x, y;
    map<ll, ll> contest;
    cin >> n >> x >> y;
    fr(n)
    {
        ll a, b;
        cin >> a >> b;
        contest.insert(pair<ll, ll>(a, b));
    }
    vi V;
    vi W;
    fr(x)
    {
        ll temp;
        cin >> temp;
        V.pb(temp);
    }
    fr(y)
    {
        ll temp;
        cin >> temp;
        W.pb(temp);
    }
    auto it = contest.begin();
    auto ptr = &*it;
    cout << ptr->first << endl;

    // for (auto x : contest)
    // {
    //     cout << x.ff << " " << x.ss << endl;
    // }
    // for (auto x : V)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;
    // for (auto x : W)
    // {
    //     cout << x << " ";
    // }

    ll ans = INT_MAX;
    ll check;
    for (auto p : contest)
    {
        for (int j = 0; j < x; j++)
        {
            for (int k = 0; k < y; k++)
            {
                if ((V[j] <= (p.ff)) && (W[k] >= p.ss))
                {
                    check = W[k] - V[j] + 1;
                    if (check < ans)
                    {
                        ans = check;
                    }
                }
            }
        }
    }

    cout << ans;
    return 0;
}
